#include <jni.h>
#include <string>
#include <android/log.h>

#define APPNAME "MyApp"

extern "C"
JNIEXPORT jstring JNICALL
Java_app_ndk_demo_ndkapp_MainActivity_stringFromJNI(JNIEnv *env, jobject) {
    std::string hello = "Hello from Android NDK - C++\n";
    hello.append("some additional details appended...");
    printf("------------------------------------------");
    __android_log_print(ANDROID_LOG_VERBOSE, APPNAME, "The value of 1 + 1 is %d", 1+1);
    return env->NewStringUTF(hello.c_str());
}

