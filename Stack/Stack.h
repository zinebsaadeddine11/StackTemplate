#pragma once
#include<iostream>
using namespace std;
template<class T>
class Stack
{
private:
    T* data;           // Tableau dynamique pour stocker les éléments
    int capacite;      // Capacité maximale de la pile
    int topIndex;      // Index du sommet de la pile
public:
    Stack(int);
    ~Stack();
    void push(const T&);
    T pop();
    T top() const;
    bool vide() const;
    bool plein() const;
    void afficher() const;

};
template <class T>
Stack<T>::Stack(int cap) :capacite(cap), topIndex(-1)
{
    this->data = new T[this->capacite];
    cout << "Pile creee avec capacite: " << this->capacite << endl;
}

template<class T>
inline Stack<T>::~Stack()
{
    delete[] this->data;
    cout << "Pile detruite" << endl;
}

template<class T>
void Stack<T>::push(const T& element)
{
    if (this->topIndex >= this->capacite - 1) {
        cout << "Erreur: La pile est pleine!" << endl;
        return;
    }
    this->data[++topIndex] = element;
    cout << "Element empile: " << element << endl;
}

template<class T>
inline T Stack<T>::pop()
{
    if (vide()) {
        cout << "Erreur: La pile est vide!" << endl;
        exit(1);
    }
    T element = this->data[topIndex--];
    cout << "Element depile: " << element << endl;
    return element;
}

template<class T>
inline T Stack<T>::top() const
{
    if (vide()) {
        cout << "Erreur: La pile est vide!" << endl;
        exit(1);
    }
    return this->data[topIndex];
}

template<class T>
inline bool Stack<T>::vide() const
{
    return this->topIndex == -1;
}

template<class T>
inline bool Stack<T>::plein() const
{
    return this->topIndex >= this->capacite - 1;
}

template<class T>
inline void Stack<T>::afficher() const
{
    if (vide()) {
        cout << "La pile est vide" << endl;
        return;
    }
    cout << "Contenu de la pile (du sommet -> la base): ";
    for (int i = topIndex; i >= 0; i--) {
        cout << data[i] << " ";
    }
    cout << endl;
}




