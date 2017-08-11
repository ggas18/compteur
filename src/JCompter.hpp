#include <jni.h> // pour JNIenv et jobject

#include "Compter.h"
class JCompter : public Compter {

private:
  JNIEnv *_env;
  jobject _obj;

public:
  JCompter(JNIEnv *env, jobject obj) : Compter() {
    // instancier l'attribut env
    this->_env = env;
    // créer une reference globale vers l'objet pour qu'on puisse l'acceder
    // après
    this->_obj = env->NewGlobalRef(obj);
  }
};
