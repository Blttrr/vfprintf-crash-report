#include <jni.h>
#include <string>
#include <sstream>

extern "C"
jstring
Java_com_example_blot_ndkcrash_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {

    std::stringstream sstream;
    static int i = 0;

    sstream << ++i;

    return env->NewStringUTF(sstream.str().c_str());
}
