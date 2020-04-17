/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class in_bugr_jni_FaceEngine */

#ifndef _Included_in_bugr_jni_FaceEngine
#define _Included_in_bugr_jni_FaceEngine
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     in_bugr_jni_FaceEngine
 * Method:    init
 * Signature: (Ljava/lang/String;II)Z
 */
JNIEXPORT jboolean JNICALL Java_in_bugr_jni_FaceEngine_init
        (JNIEnv *, jobject, jstring, jint, jint, jint, jint);
/*
 * Class:     in_bugr_jni_FaceEngine
 * Method:    detectFace
 * Signature: (Lin/bugr/jni/model/ImageData;)Lin/bugr/jni/model/FaceInfoArray;
 */
JNIEXPORT jobject JNICALL Java_in_bugr_jni_FaceEngine_detectFace
        (JNIEnv *, jobject, jobject);

/*
 * Class:     in_bugr_jni_FaceEngine
 * Method:    detectPoints
 * Signature: (Lin/bugr/jni/model/ImageData;Lin/bugr/jni/model/Rect;)Lin/bugr/jni/model/PointFloatArray;
 */
JNIEXPORT jobject JNICALL Java_in_bugr_jni_FaceEngine_detectPoints
        (JNIEnv *, jobject, jobject, jobject);

/*
 * Class:     in_bugr_jni_FaceEngine
 * Method:    compare
 * Signature: (Lin/bugr/jni/model/ImageData;Lin/bugr/jni/model/Rect;Lin/bugr/jni/model/ImageData;Lin/bugr/jni/model/Rect;)F
 */
JNIEXPORT jfloat JNICALL Java_in_bugr_jni_FaceEngine_compare
        (JNIEnv *, jobject, jobject, jobject, jobject, jobject);


/*
 * Class:     in_bugr_jni_FaceEngine
 * Method:    compareByCroppedFace
 * Signature: (Lin/bugr/jni/model/ImageData;Lin/bugr/jni/model/ImageData;)F
 */
JNIEXPORT jfloat JNICALL Java_in_bugr_jni_FaceEngine_compareByCroppedFace
        (JNIEnv *, jobject, jobject, jobject);

/*
 * Class:     in_bugr_jni_FaceEngine
 * Method:    crop
 * Signature: (Lin/bugr/jni/model/ImageData;Lin/bugr/jni/model/PointFloatArray;)Lin/bugr/jni/model/ImageData;
 */
JNIEXPORT jobject JNICALL Java_in_bugr_jni_FaceEngine_crop
        (JNIEnv *, jobject, jobject, jobject);

/*
 * Class:     in_bugr_jni_FaceEngine
 * Method:    registerByCroppedFace
 * Signature: (Lin/bugr/jni/model/ImageData;)I
 */
JNIEXPORT jint JNICALL Java_in_bugr_jni_FaceEngine_registerByCroppedFace
        (JNIEnv *, jobject, jobject);

/*
 * Class:     in_bugr_jni_FaceEngine
 * Method:    delete
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_in_bugr_jni_FaceEngine_delete
        (JNIEnv *, jobject, jint);

/*
 * Class:     in_bugr_jni_FaceEngine
 * Method:    queryByCroppedFace
 * Signature: (Lin/bugr/jni/model/ImageData;)Lin/bugr/jni/model/QueryResult;
 */
JNIEXPORT jobject JNICALL Java_in_bugr_jni_FaceEngine_queryByCroppedFace
        (JNIEnv *, jobject, jobject);

/*
 * Class:     in_bugr_jni_FaceEngine
 * Method:    queryTopByCroppedFace
 * Signature: (Lin/bugr/jni/model/ImageData;I)Lin/bugr/jni/model/QueryResultArray;
 */
JNIEXPORT jobject JNICALL Java_in_bugr_jni_FaceEngine_queryTopByCroppedFace
        (JNIEnv *, jobject, jobject, jint);

/*
 * Class:     in_bugr_jni_FaceEngine
 * Method:    queryAboveByCroppedFace
 * Signature: (Lin/bugr/jni/model/ImageData;FI)Lin/bugr/jni/model/QueryResultArray;
 */
JNIEXPORT jobject JNICALL Java_in_bugr_jni_FaceEngine_queryAboveByCroppedFace
        (JNIEnv *, jobject, jobject, jfloat, jint);

/*
 * Class:     in_bugr_jni_FaceEngine
 * Method:    count
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_in_bugr_jni_FaceEngine_count
        (JNIEnv *, jobject);

/*
 * Class:     in_bugr_jni_FaceEngine
 * Method:    clear
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_in_bugr_jni_FaceEngine_clear
        (JNIEnv *, jobject);

/*
 * Class:     in_bugr_jni_FaceEngine
 * Method:    save
 * Signature: ()Lin/bugr/jni/model/FaceDataBaseData;
 */
JNIEXPORT jobject JNICALL Java_in_bugr_jni_FaceEngine_save
        (JNIEnv *, jobject);

/*
 * Class:     in_bugr_jni_FaceEngine
 * Method:    load
 * Signature: (Lin/bugr/jni/model/FaceDataBaseData;)Z
 */
JNIEXPORT jboolean JNICALL Java_in_bugr_jni_FaceEngine_load
        (JNIEnv *, jobject, jobject);

/*
 * Class:     in_bugr_jni_FaceEngine
 * Method:    set
 * Signature: (ID)V
 */
JNIEXPORT void JNICALL Java_in_bugr_jni_FaceEngine_set
        (JNIEnv *, jobject, jint, jdouble);

/*
 * Class:     in_bugr_jni_FaceEngine
 * Method:    get
 * Signature: (I)D
 */
JNIEXPORT jdouble JNICALL Java_in_bugr_jni_FaceEngine_get
        (JNIEnv *, jobject, jint);

/*
 * Class:     in_bugr_jni_FaceEngine
 * Method:    destroy
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_in_bugr_jni_FaceEngine_destroy
        (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
