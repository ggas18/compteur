// implémentation de l'en-tête généré avec eclipse.
#include "testjni_Compter.h" // c'est l'en-tête dont nous essayons d'implémenter les fonctions

#include "JCompter.h" // Pour la classe JCompter, c'est l'objet que nous manipulons depuis java

JNIEXPORT jlong JNICALL Java_testjni_Compter_n_1Compter(
    JNIEnv *env, jobject env)(JNIEnv *env, // l'environnement appelant
                              jobject obj  // l'objet java appelant
                              ) {
  jlong jcompPtrVal = 0;
  JCompter jcompPtr = new JCompter(env, obj); // on cree l'objet

  jcompPtrVal = reinterpret_cast<jlong>(
      jcompPtr); // on caste la valeur du pointeur sur l'objet C++
  return jcompPtrVal;
}
