#include "cn_itrunner_ndk_test3_MainActivity.h"

JNIEXPORT jstring Java_cn_itrunner_ndk_1test3_MainActivity_getData(JNIEnv *pEnv,
		jobject pThis) {
	return (*pEnv)->NewStringUTF(pEnv, "HelloWorld! I am from JNI !");
}

jint JNI_Onload(JavaVM* vm, void* reserved) {
}

//jint JNI_OnUnload(JavaVM* vm, void* reserved) {
//
//}
