#include <jni.h>
#include <android/log.h>


void fun() {
    __android_log_print(ANDROID_LOG_DEBUG, "dummy", "hello");
}
