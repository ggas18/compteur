// Compter.h //
#ifndef COMPTER_H_
#define COMPTER_H_

class Compter {
private:
  double _val; // la valeur qui nous permet de garder l'état interne

public:
  // Constructeur
  Compter();

  // Observer
  double getValue();

  // Increment function
  void increment(double incValue);
};

#endif
