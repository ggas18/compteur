// Compteur.h //

class Compteur {
private:
  double _val; // la valeur qui nous permet de garder l'état interne

public:
  // Constructeur
  Compteur();

  // Observer
  double getValue();

  // Increment function
  void increment(double incValue);
};
