/*******************************************************************************
 * Copyright (c) 2015 Low Latency Trading Limited  :  Author Richard Rose
 * Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at	http://www.apache.org/licenses/LICENSE-2.0
 * Unless required by applicable law or agreed to in writing,  software distributed under the License 
 * is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and limitations under the License.
 *******************************************************************************/
/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_rr_core_os_NativeHooksImpl */

#ifndef _Included_com_rr_core_os_NativeHooksImpl
#define _Included_com_rr_core_os_NativeHooksImpl
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_rr_core_os_NativeHooksImpl
 * Method:    jniCalibrateTicks
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_rr_core_os_NativeHooksImpl_jniCalibrateTicks
  (JNIEnv *, jclass);

/*
 * Class:     com_rr_core_os_NativeHooksImpl
 * Method:    jniSetPriority
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_rr_core_os_NativeHooksImpl_jniSetPriority
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_rr_core_os_NativeHooksImpl
 * Method:    jniSleep
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_rr_core_os_NativeHooksImpl_jniSleep
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_rr_core_os_NativeHooksImpl
 * Method:    jniSleepMicros
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_rr_core_os_NativeHooksImpl_jniSleepMicros
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_rr_core_os_NativeHooksImpl
 * Method:    jniSetProcessMaxPriority
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_rr_core_os_NativeHooksImpl_jniSetProcessMaxPriority
  (JNIEnv *, jclass);

/*
 * Class:     com_rr_core_os_NativeHooksImpl
 * Method:    jniNanoTimeRDTSC
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_rr_core_os_NativeHooksImpl_jniNanoTimeRDTSC
  (JNIEnv *, jclass);

/*
 * Class:     com_rr_core_os_NativeHooksImpl
 * Method:    jniNanoTimeMonotonicRaw
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_rr_core_os_NativeHooksImpl_jniNanoTimeMonotonicRaw
  (JNIEnv *, jclass);

/*
 * Class:     com_rr_core_os_NativeHooksImpl
 * Method:    jniNanoRDTSCStart
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_rr_core_os_NativeHooksImpl_jniNanoRDTSCStart
  (JNIEnv *, jclass);

/*
 * Class:     com_rr_core_os_NativeHooksImpl
 * Method:    jniNanoRDTSCStop
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_rr_core_os_NativeHooksImpl_jniNanoRDTSCStop
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
