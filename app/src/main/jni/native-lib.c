#include <jni.h>

JNIEXPORT jstring JNICALL
Java_com_example_cmake_1ndkstudy_MainActivity_stringFromJNI(JNIEnv *env, jobject instance) {

    // TODO


    return (*env)->NewStringUTF(env, "你好");
}