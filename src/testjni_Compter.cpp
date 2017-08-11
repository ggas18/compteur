// implémentation de l'en-tête généré avec eclipse.
#include "testjni_Compter.h" // c'est l'en-tête dont nous essayons d'implémenter les fonctions

#include "JCompter.hpp" // Pour la classe JCompter, c'est l'objet que nous manipulons depuis java

JNIEXPORT jlong JNICALL Java_testjni_Compter_n_1Compter(JNIEnv *env,
                                                        jobject obj) {
  jlong jcompPtrVal = 0;
  JCompter *jcompPtr = new JCompter(env, obj); // on cree l'objet

  jcompPtrVal = reinterpret_cast<jlong>(
      jcompPtr); // on caste la valeur du pointeur sur l'objet C++
  return jcompPtrVal;
}

JNIEXPORT jdouble JNICALL Java_testjni_Compter_n_1getValue(JNIEnv *env,
                                                           jobject obj) {
  double ret_val = 0.0;
  jclass cls = env->GetObjectClass(obj); // prendre la classe
  jfieldID id = env->GetFieldID(
      cls, "nativeObject",
      "J"); // prendre l'identifiant du champ de l'attribut NativeObject
  jlong pointerVal = env->GetLongField(obj, id); // prendre la valeur de
                                                 // l'attribut NativeObject,
                                                 // donc la valeur du pointeur

  JCompter *jCompt = reinterpret_cast<JCompter *>(pointerVal);

  return jCompt->getValue();
}

JNIEXPORT void JNICALL Java_testjni_Compter_n_1increment(JNIEnv *env,
                                                         jobject obj,
                                                         jdouble incVal) {
  jclass cls = env->GetObjectClass(obj); // prendre la classe
  jfieldID id = env->GetFieldID(
      cls, "nativeObject",
      "J"); // prendre l'identifiant du champ de l'attribut NativeObject
  jlong pointerVal = env->GetLongField(obj, id); // prendre la valeur de
                                                 // l'attribut NativeObject,
                                                 // donc la valeur du pointeur

  JCompter *jCompt = reinterpret_cast<JCompter *>(pointerVal);
  jCompt->increment(incVal);
}
