
// "Compteur.cpp"

// Mettre l'entête des prototypes de la classe
#include "Compter.h"

// definitions des fonctions de la classe

// Constructeur
Compter::Compter() { _val = 0.0; }

// Fontions membres
double Compter::getValue() { return this->_val; }

void Compter::increment(double incValue) { this->_val = this->_val + incValue; }

// fin de definitions des fonctions
