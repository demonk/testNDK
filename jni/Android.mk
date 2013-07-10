LOCAL_PATH:=$(call my-dir)
include $(CLEAR_VARS)
LOCAL_MODULE:=mylib
LOCAL_SRC_FILES:=cn_itrunner_ndk_test3_MainActivity.c
include $(BUILD_SHARED_LIBRARY)

