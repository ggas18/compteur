#include "JCompter.h" // pour implémenter les methodes de la classe JCompteur
// On a juste le constructeur à surcharger dans cette classe.
#include "Compter.h"

JCompter::JCompter(JNIenv *env, jobject obj) : Compter() {
  // instancier l'attribut env
  this->_env = env;
  // créer une reference globale vers l'objet pour qu'on puisse l'acceder après
  this->_obj = env->NewGlobalRef(obj);
}
