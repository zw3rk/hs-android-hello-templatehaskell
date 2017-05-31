#include <jni.h>
#include <string>

extern "C" {

extern void hs_init(int * argc, char ** argv[]);
extern char* gitrev(void);

JNIEXPORT void
JNICALL
Java_com_zw3rk_hellotemplatehaskell_MainActivityKt_initHS(
        JNIEnv *env,
        jclass /* this */) {
    hs_init(NULL, NULL);
    return;
}

JNIEXPORT jstring
JNICALL
Java_com_zw3rk_hellotemplatehaskell_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    return env->NewStringUTF(gitrev());
}

}