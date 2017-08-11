#include "Compter.h" // pour pouvoir heriter de la classe Compteur

#include <jni.h>
// On herite de la classe Compter existente et on lui ajoute deux attributs
// supplémentaires pour l'interaction avec le code java.

#ifndef JCOMPTER_H_
#define JCOMPTER_H_
class JCompter : public Compter {

private:
  JNIEnv *_env;
  jobject _obj;

public:
  JCompter(JNIEnv *env, jobject obj);
};

#endif
