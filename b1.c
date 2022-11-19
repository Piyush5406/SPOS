#include<jni.h>
#include<stdio.h>
#include "B1.h"

JNIEXPORT int JNICALL java_B1_add(JNIEnv*env,jobject obj,jint a,jint b){
    printf("%d + %d = %d",a,b,(a+b));
    return;
}
JNIEXPORT int JNICALL java_B1_sub(JNIEnv*env,jobject obj,jint a,jint b){
    printf("%d - %d = %d",a,b,(a-b));
    return;
}
JNIEXPORT int JNICALL java_B1_mul(JNIEnv*env,jobject obj,jint a,jint b){
    printf("%d * %d = %d",a,b,(a*b));
    return;
}
JNIEXPORT int JNICALL java_B1_add(JNIEnv*env,jobject obj,jint a,jint b){
    printf("%d / %d = %d",a,b,(a/b));
    return;
}
