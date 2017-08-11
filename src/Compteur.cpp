
// "Compteur.cpp"

// Mettre l'entête des prototypes de la classe
#include "Compteur.h"

// definitions des fonctions de la classe

// Constructeur
Compteur::Compteur() { _val = 0.0; }

// Fontions membres
double Compteur::getValue() { return this->_val; }

void Compteur::increment(double incValue) {
  this->_val = this->_val + incValue;
}

// fin de definitions des fonctions
