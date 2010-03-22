/*
 *  Licensed to the Apache Software Foundation (ASF) under one or more
 *  contributor license agreements.  See the NOTICE file distributed with
 *  this work for additional information regarding copyright ownership.
 *  The ASF licenses this file to You under the Apache License, Version 2.0
 *  (the "License"); you may not use this file except in compliance with
 *  the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

/*
 * THE FILE HAS BEEN AUTOGENERATED BY THE IJH TOOL.
 * Please be aware that all changes made to this file manually
 * will be overwritten by the tool if it runs again.
 */

#include <jni.h>


/* Header for class org.apache.harmony.niochar.charset.ISO_8859_1 */

#ifndef _ORG_APACHE_HARMONY_NIOCHAR_CHARSET_ISO_8859_1_H
#define _ORG_APACHE_HARMONY_NIOCHAR_CHARSET_ISO_8859_1_H

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif

#endif /* _ORG_APACHE_HARMONY_NIOCHAR_CHARSET_ISO_8859_1_H */


/* Header for class org.apache.harmony.niochar.charset.ISO_8859_1$Decoder */

#ifndef _ORG_APACHE_HARMONY_NIOCHAR_CHARSET_ISO_8859_1_DECODER_H
#define _ORG_APACHE_HARMONY_NIOCHAR_CHARSET_ISO_8859_1_DECODER_H

#ifdef __cplusplus
extern "C" {
#endif


/* Static final fields */

#undef org_apache_harmony_niochar_charset_ISO_8859_1_Decoder_INIT
#define org_apache_harmony_niochar_charset_ISO_8859_1_Decoder_INIT 0L

#undef org_apache_harmony_niochar_charset_ISO_8859_1_Decoder_ONGOING
#define org_apache_harmony_niochar_charset_ISO_8859_1_Decoder_ONGOING 1L

#undef org_apache_harmony_niochar_charset_ISO_8859_1_Decoder_END
#define org_apache_harmony_niochar_charset_ISO_8859_1_Decoder_END 2L

#undef org_apache_harmony_niochar_charset_ISO_8859_1_Decoder_FLUSH
#define org_apache_harmony_niochar_charset_ISO_8859_1_Decoder_FLUSH 3L


/* Native methods */

/*
 * Method: org.apache.harmony.niochar.charset.ISO_8859_1$Decoder.nDecode([CIIJI)I
 */
JNIEXPORT jint JNICALL
Java_org_apache_harmony_niochar_charset_ISO_18859_11_00024Decoder_nDecode(JNIEnv *, jobject, 
    jcharArray, jint, jint, jlong, jint);


#ifdef __cplusplus
}
#endif

#endif /* _ORG_APACHE_HARMONY_NIOCHAR_CHARSET_ISO_8859_1_DECODER_H */


/* Header for class org.apache.harmony.niochar.charset.ISO_8859_1$Encoder */

#ifndef _ORG_APACHE_HARMONY_NIOCHAR_CHARSET_ISO_8859_1_ENCODER_H
#define _ORG_APACHE_HARMONY_NIOCHAR_CHARSET_ISO_8859_1_ENCODER_H

#ifdef __cplusplus
extern "C" {
#endif


/* Static final fields */

#undef org_apache_harmony_niochar_charset_ISO_8859_1_Encoder_INIT
#define org_apache_harmony_niochar_charset_ISO_8859_1_Encoder_INIT 0L

#undef org_apache_harmony_niochar_charset_ISO_8859_1_Encoder_ONGOING
#define org_apache_harmony_niochar_charset_ISO_8859_1_Encoder_ONGOING 1L

#undef org_apache_harmony_niochar_charset_ISO_8859_1_Encoder_END
#define org_apache_harmony_niochar_charset_ISO_8859_1_Encoder_END 2L

#undef org_apache_harmony_niochar_charset_ISO_8859_1_Encoder_FLUSH
#define org_apache_harmony_niochar_charset_ISO_8859_1_Encoder_FLUSH 3L


/* Native methods */

/*
 * Method: org.apache.harmony.niochar.charset.ISO_8859_1$Encoder.nEncode(JI[CI[I)V
 */
JNIEXPORT void JNICALL
Java_org_apache_harmony_niochar_charset_ISO_18859_11_00024Encoder_nEncode(JNIEnv *, jobject, 
    jlong, jint, jcharArray, jint, jintArray);


#ifdef __cplusplus
}
#endif

#endif /* _ORG_APACHE_HARMONY_NIOCHAR_CHARSET_ISO_8859_1_ENCODER_H */

