## StackTemplate - Implémentation d'une Pile en C++
Une implémentation complète et générique d'une structure de données Stack (Pile) en C++ utilisant des templates pour une flexibilité maximale des types de données.
## 📋 Description
Ce projet fournit une implémentation robuste et réutilisable d'une pile (structure de données LIFO - Last In, First Out) en C++. Grâce à l'utilisation des templates, cette pile peut stocker n'importe quel type de données (int, float, string, objets personnalisés, etc.).
🎯 Caractéristiques

Générique : Utilisation des templates C++ pour supporter tous types de données
Complet : Implémentation de toutes les opérations de base d'une pile
Efficace : Gestion optimale de la mémoire
Sécurisé : Gestion des cas limites et des erreurs

## 🔧 Fonctionnalités
Les opérations principales implémentées incluent :

push() - Ajouter un élément au sommet de la pile
pop() - Retirer l'élément au sommet de la pile
top() / peek() - Consulter l'élément au sommet sans le retirer
vide() - Vérifier si la pile est vide

## 📁 Structure du Projet
StackTemplate/
├── Stack/
│   ├── Stack.h/cpp          # Implémentation de base de la pile
|
│   ├── StackTemplate.cpp   # Exemple d'utilisation
└── README.md
