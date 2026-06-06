#include <imgui_ImFontAtlas.h>

//@line:45

        #include "_common.h"
        #define THIS ((ImFontAtlas*)STRUCT_PTR)

        jmethodID jImFontAtlasCreateAlpha8PixelsMID;
        jmethodID jImFontAtlasCreateRgba32PixelsMID;
     JNIEXPORT void JNICALL Java_imgui_ImFontAtlas_nInit(JNIEnv* env, jclass clazz) {


//@line:53

        jclass jImFontAtlasClass = env->FindClass("imgui/moulberry90/ImFontAtlas");
        jImFontAtlasCreateAlpha8PixelsMID = env->GetMethodID(jImFontAtlasClass, "createAlpha8Pixels", "(I)Ljava/nio/ByteBuffer;");
        jImFontAtlasCreateRgba32PixelsMID = env->GetMethodID(jImFontAtlasClass, "createRgba32Pixels", "(I)Ljava/nio/ByteBuffer;");
    

}

JNIEXPORT jlong JNICALL Java_imgui_ImFontAtlas_nCreate(JNIEnv* env, jobject object) {


//@line:59

        return (uintptr_t)(new ImFontConfig());
    

}

JNIEXPORT jlong JNICALL Java_imgui_ImFontAtlas_nAddFont(JNIEnv* env, jobject object, jlong imFontConfig) {


//@line:67

        return (uintptr_t)THIS->AddFont(reinterpret_cast<ImFontConfig*>(imFontConfig));
    

}

JNIEXPORT jlong JNICALL Java_imgui_ImFontAtlas_nAddFontDefault__(JNIEnv* env, jobject object) {


//@line:79

        return (uintptr_t)THIS->AddFontDefault();
    

}

JNIEXPORT jlong JNICALL Java_imgui_ImFontAtlas_nAddFontDefault__J(JNIEnv* env, jobject object, jlong imFontConfig) {


//@line:83

        return (uintptr_t)THIS->AddFontDefault(reinterpret_cast<ImFontConfig*>(imFontConfig));
    

}

JNIEXPORT jlong JNICALL Java_imgui_ImFontAtlas_nAddFontDefaultVector__(JNIEnv* env, jobject object) {


//@line:101

        return (uintptr_t)THIS->AddFontDefaultVector();
    

}

JNIEXPORT jlong JNICALL Java_imgui_ImFontAtlas_nAddFontDefaultVector__J(JNIEnv* env, jobject object, jlong imFontConfig) {


//@line:105

        return (uintptr_t)THIS->AddFontDefaultVector(reinterpret_cast<ImFontConfig*>(imFontConfig));
    

}

JNIEXPORT jlong JNICALL Java_imgui_ImFontAtlas_nAddFontDefaultBitmap__(JNIEnv* env, jobject object) {


//@line:125

        return (uintptr_t)THIS->AddFontDefaultBitmap();
    

}

JNIEXPORT jlong JNICALL Java_imgui_ImFontAtlas_nAddFontDefaultBitmap__J(JNIEnv* env, jobject object, jlong imFontConfig) {


//@line:129

        return (uintptr_t)THIS->AddFontDefaultBitmap(reinterpret_cast<ImFontConfig*>(imFontConfig));
    

}

JNIEXPORT jlong JNICALL Java_imgui_ImFontAtlas_nAddFontFromFileTTF__Ljava_lang_String_2F(JNIEnv* env, jobject object, jstring obj_filename, jfloat sizePixels) {

//@line:149

        auto filename = obj_filename == NULL ? NULL : (char*)env->GetStringUTFChars(obj_filename, JNI_FALSE);
        auto _result = (uintptr_t)THIS->AddFontFromFileTTF(filename, sizePixels);
        if (filename != NULL) env->ReleaseStringUTFChars(obj_filename, filename);
        return _result;
    
}

JNIEXPORT jlong JNICALL Java_imgui_ImFontAtlas_nAddFontFromFileTTF__Ljava_lang_String_2FJ(JNIEnv* env, jobject object, jstring obj_filename, jfloat sizePixels, jlong fontConfig) {

//@line:156

        auto filename = obj_filename == NULL ? NULL : (char*)env->GetStringUTFChars(obj_filename, JNI_FALSE);
        auto _result = (uintptr_t)THIS->AddFontFromFileTTF(filename, sizePixels, reinterpret_cast<ImFontConfig*>(fontConfig));
        if (filename != NULL) env->ReleaseStringUTFChars(obj_filename, filename);
        return _result;
    
}

JNIEXPORT jlong JNICALL Java_imgui_ImFontAtlas_nAddFontFromFileTTF__Ljava_lang_String_2FJ_3S(JNIEnv* env, jobject object, jstring obj_filename, jfloat sizePixels, jlong fontConfig, jshortArray obj_glyphRanges) {

//@line:163

        auto filename = obj_filename == NULL ? NULL : (char*)env->GetStringUTFChars(obj_filename, JNI_FALSE);
        auto glyphRanges = obj_glyphRanges == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_glyphRanges, JNI_FALSE);
        auto _result = (uintptr_t)THIS->AddFontFromFileTTF(filename, sizePixels, reinterpret_cast<ImFontConfig*>(fontConfig), (ImWchar*)&glyphRanges[0]);
        if (filename != NULL) env->ReleaseStringUTFChars(obj_filename, filename);
        if (glyphRanges != NULL) env->ReleasePrimitiveArrayCritical(obj_glyphRanges, glyphRanges, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jlong JNICALL Java_imgui_ImFontAtlas_nAddFontFromFileTTF__Ljava_lang_String_2F_3S(JNIEnv* env, jobject object, jstring obj_filename, jfloat sizePixels, jshortArray obj_glyphRanges) {

//@line:172

        auto filename = obj_filename == NULL ? NULL : (char*)env->GetStringUTFChars(obj_filename, JNI_FALSE);
        auto glyphRanges = obj_glyphRanges == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_glyphRanges, JNI_FALSE);
        auto _result = (uintptr_t)THIS->AddFontFromFileTTF(filename, sizePixels, NULL, (ImWchar*)&glyphRanges[0]);
        if (filename != NULL) env->ReleaseStringUTFChars(obj_filename, filename);
        if (glyphRanges != NULL) env->ReleasePrimitiveArrayCritical(obj_glyphRanges, glyphRanges, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jlong JNICALL Java_imgui_ImFontAtlas_nAddFontFromMemoryTTF___3BF(JNIEnv* env, jobject object, jbyteArray obj_fontData, jfloat sizePixels) {

//@line:213

        auto fontData = obj_fontData == NULL ? NULL : (char*)env->GetPrimitiveArrayCritical(obj_fontData, JNI_FALSE);
        auto _result = (uintptr_t)THIS->AddFontFromMemoryTTF(&fontData[0], (int)env->GetArrayLength(obj_fontData), sizePixels);
        if (fontData != NULL) env->ReleasePrimitiveArrayCritical(obj_fontData, fontData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jlong JNICALL Java_imgui_ImFontAtlas_nAddFontFromMemoryTTF___3BFJ(JNIEnv* env, jobject object, jbyteArray obj_fontData, jfloat sizePixels, jlong fontConfig) {

//@line:220

        auto fontData = obj_fontData == NULL ? NULL : (char*)env->GetPrimitiveArrayCritical(obj_fontData, JNI_FALSE);
        auto _result = (uintptr_t)THIS->AddFontFromMemoryTTF(&fontData[0], (int)env->GetArrayLength(obj_fontData), sizePixels, reinterpret_cast<ImFontConfig*>(fontConfig));
        if (fontData != NULL) env->ReleasePrimitiveArrayCritical(obj_fontData, fontData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jlong JNICALL Java_imgui_ImFontAtlas_nAddFontFromMemoryTTF___3BFJ_3S(JNIEnv* env, jobject object, jbyteArray obj_fontData, jfloat sizePixels, jlong fontConfig, jshortArray obj_glyphRanges) {

//@line:227

        auto fontData = obj_fontData == NULL ? NULL : (char*)env->GetPrimitiveArrayCritical(obj_fontData, JNI_FALSE);
        auto glyphRanges = obj_glyphRanges == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_glyphRanges, JNI_FALSE);
        auto _result = (uintptr_t)THIS->AddFontFromMemoryTTF(&fontData[0], (int)env->GetArrayLength(obj_fontData), sizePixels, reinterpret_cast<ImFontConfig*>(fontConfig), (ImWchar*)&glyphRanges[0]);
        if (fontData != NULL) env->ReleasePrimitiveArrayCritical(obj_fontData, fontData, JNI_FALSE);
        if (glyphRanges != NULL) env->ReleasePrimitiveArrayCritical(obj_glyphRanges, glyphRanges, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jlong JNICALL Java_imgui_ImFontAtlas_nAddFontFromMemoryTTF___3BF_3S(JNIEnv* env, jobject object, jbyteArray obj_fontData, jfloat sizePixels, jshortArray obj_glyphRanges) {

//@line:236

        auto fontData = obj_fontData == NULL ? NULL : (char*)env->GetPrimitiveArrayCritical(obj_fontData, JNI_FALSE);
        auto glyphRanges = obj_glyphRanges == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_glyphRanges, JNI_FALSE);
        auto _result = (uintptr_t)THIS->AddFontFromMemoryTTF(&fontData[0], (int)env->GetArrayLength(obj_fontData), sizePixels, NULL, (ImWchar*)&glyphRanges[0]);
        if (fontData != NULL) env->ReleasePrimitiveArrayCritical(obj_fontData, fontData, JNI_FALSE);
        if (glyphRanges != NULL) env->ReleasePrimitiveArrayCritical(obj_glyphRanges, glyphRanges, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jlong JNICALL Java_imgui_ImFontAtlas_nAddFontFromMemoryTTF___3BIF(JNIEnv* env, jobject object, jbyteArray obj_fontData, jint fontDataSize, jfloat sizePixels) {

//@line:277

        auto fontData = obj_fontData == NULL ? NULL : (char*)env->GetPrimitiveArrayCritical(obj_fontData, JNI_FALSE);
        auto _result = (uintptr_t)THIS->AddFontFromMemoryTTF(&fontData[0], fontDataSize, sizePixels);
        if (fontData != NULL) env->ReleasePrimitiveArrayCritical(obj_fontData, fontData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jlong JNICALL Java_imgui_ImFontAtlas_nAddFontFromMemoryTTF___3BIFJ(JNIEnv* env, jobject object, jbyteArray obj_fontData, jint fontDataSize, jfloat sizePixels, jlong fontConfig) {

//@line:284

        auto fontData = obj_fontData == NULL ? NULL : (char*)env->GetPrimitiveArrayCritical(obj_fontData, JNI_FALSE);
        auto _result = (uintptr_t)THIS->AddFontFromMemoryTTF(&fontData[0], fontDataSize, sizePixels, reinterpret_cast<ImFontConfig*>(fontConfig));
        if (fontData != NULL) env->ReleasePrimitiveArrayCritical(obj_fontData, fontData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jlong JNICALL Java_imgui_ImFontAtlas_nAddFontFromMemoryTTF___3BIFJ_3S(JNIEnv* env, jobject object, jbyteArray obj_fontData, jint fontDataSize, jfloat sizePixels, jlong fontConfig, jshortArray obj_glyphRanges) {

//@line:291

        auto fontData = obj_fontData == NULL ? NULL : (char*)env->GetPrimitiveArrayCritical(obj_fontData, JNI_FALSE);
        auto glyphRanges = obj_glyphRanges == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_glyphRanges, JNI_FALSE);
        auto _result = (uintptr_t)THIS->AddFontFromMemoryTTF(&fontData[0], fontDataSize, sizePixels, reinterpret_cast<ImFontConfig*>(fontConfig), (ImWchar*)&glyphRanges[0]);
        if (fontData != NULL) env->ReleasePrimitiveArrayCritical(obj_fontData, fontData, JNI_FALSE);
        if (glyphRanges != NULL) env->ReleasePrimitiveArrayCritical(obj_glyphRanges, glyphRanges, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jlong JNICALL Java_imgui_ImFontAtlas_nAddFontFromMemoryTTF___3BIF_3S(JNIEnv* env, jobject object, jbyteArray obj_fontData, jint fontDataSize, jfloat sizePixels, jshortArray obj_glyphRanges) {

//@line:300

        auto fontData = obj_fontData == NULL ? NULL : (char*)env->GetPrimitiveArrayCritical(obj_fontData, JNI_FALSE);
        auto glyphRanges = obj_glyphRanges == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_glyphRanges, JNI_FALSE);
        auto _result = (uintptr_t)THIS->AddFontFromMemoryTTF(&fontData[0], fontDataSize, sizePixels, NULL, (ImWchar*)&glyphRanges[0]);
        if (fontData != NULL) env->ReleasePrimitiveArrayCritical(obj_fontData, fontData, JNI_FALSE);
        if (glyphRanges != NULL) env->ReleasePrimitiveArrayCritical(obj_glyphRanges, glyphRanges, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jlong JNICALL Java_imgui_ImFontAtlas_nAddFontFromMemoryCompressedTTF___3BF(JNIEnv* env, jobject object, jbyteArray obj_compressedFontData, jfloat sizePixels) {

//@line:337

        auto compressedFontData = obj_compressedFontData == NULL ? NULL : (char*)env->GetPrimitiveArrayCritical(obj_compressedFontData, JNI_FALSE);
        auto _result = (uintptr_t)THIS->AddFontFromMemoryCompressedTTF(&compressedFontData[0], (int)env->GetArrayLength(obj_compressedFontData), sizePixels);
        if (compressedFontData != NULL) env->ReleasePrimitiveArrayCritical(obj_compressedFontData, compressedFontData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jlong JNICALL Java_imgui_ImFontAtlas_nAddFontFromMemoryCompressedTTF___3BFJ(JNIEnv* env, jobject object, jbyteArray obj_compressedFontData, jfloat sizePixels, jlong imFontConfig) {

//@line:344

        auto compressedFontData = obj_compressedFontData == NULL ? NULL : (char*)env->GetPrimitiveArrayCritical(obj_compressedFontData, JNI_FALSE);
        auto _result = (uintptr_t)THIS->AddFontFromMemoryCompressedTTF(&compressedFontData[0], (int)env->GetArrayLength(obj_compressedFontData), sizePixels, reinterpret_cast<ImFontConfig*>(imFontConfig));
        if (compressedFontData != NULL) env->ReleasePrimitiveArrayCritical(obj_compressedFontData, compressedFontData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jlong JNICALL Java_imgui_ImFontAtlas_nAddFontFromMemoryCompressedTTF___3BFJ_3S(JNIEnv* env, jobject object, jbyteArray obj_compressedFontData, jfloat sizePixels, jlong imFontConfig, jshortArray obj_glyphRanges) {

//@line:351

        auto compressedFontData = obj_compressedFontData == NULL ? NULL : (char*)env->GetPrimitiveArrayCritical(obj_compressedFontData, JNI_FALSE);
        auto glyphRanges = obj_glyphRanges == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_glyphRanges, JNI_FALSE);
        auto _result = (uintptr_t)THIS->AddFontFromMemoryCompressedTTF(&compressedFontData[0], (int)env->GetArrayLength(obj_compressedFontData), sizePixels, reinterpret_cast<ImFontConfig*>(imFontConfig), (ImWchar*)&glyphRanges[0]);
        if (compressedFontData != NULL) env->ReleasePrimitiveArrayCritical(obj_compressedFontData, compressedFontData, JNI_FALSE);
        if (glyphRanges != NULL) env->ReleasePrimitiveArrayCritical(obj_glyphRanges, glyphRanges, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jlong JNICALL Java_imgui_ImFontAtlas_nAddFontFromMemoryCompressedTTF___3BF_3S(JNIEnv* env, jobject object, jbyteArray obj_compressedFontData, jfloat sizePixels, jshortArray obj_glyphRanges) {

//@line:360

        auto compressedFontData = obj_compressedFontData == NULL ? NULL : (char*)env->GetPrimitiveArrayCritical(obj_compressedFontData, JNI_FALSE);
        auto glyphRanges = obj_glyphRanges == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_glyphRanges, JNI_FALSE);
        auto _result = (uintptr_t)THIS->AddFontFromMemoryCompressedTTF(&compressedFontData[0], (int)env->GetArrayLength(obj_compressedFontData), sizePixels, NULL, (ImWchar*)&glyphRanges[0]);
        if (compressedFontData != NULL) env->ReleasePrimitiveArrayCritical(obj_compressedFontData, compressedFontData, JNI_FALSE);
        if (glyphRanges != NULL) env->ReleasePrimitiveArrayCritical(obj_glyphRanges, glyphRanges, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jlong JNICALL Java_imgui_ImFontAtlas_nAddFontFromMemoryCompressedTTF___3BIF(JNIEnv* env, jobject object, jbyteArray obj_compressedFontData, jint compressedFontDataSize, jfloat sizePixels) {

//@line:397

        auto compressedFontData = obj_compressedFontData == NULL ? NULL : (char*)env->GetPrimitiveArrayCritical(obj_compressedFontData, JNI_FALSE);
        auto _result = (uintptr_t)THIS->AddFontFromMemoryCompressedTTF(&compressedFontData[0], compressedFontDataSize, sizePixels);
        if (compressedFontData != NULL) env->ReleasePrimitiveArrayCritical(obj_compressedFontData, compressedFontData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jlong JNICALL Java_imgui_ImFontAtlas_nAddFontFromMemoryCompressedTTF___3BIFJ(JNIEnv* env, jobject object, jbyteArray obj_compressedFontData, jint compressedFontDataSize, jfloat sizePixels, jlong imFontConfig) {

//@line:404

        auto compressedFontData = obj_compressedFontData == NULL ? NULL : (char*)env->GetPrimitiveArrayCritical(obj_compressedFontData, JNI_FALSE);
        auto _result = (uintptr_t)THIS->AddFontFromMemoryCompressedTTF(&compressedFontData[0], compressedFontDataSize, sizePixels, reinterpret_cast<ImFontConfig*>(imFontConfig));
        if (compressedFontData != NULL) env->ReleasePrimitiveArrayCritical(obj_compressedFontData, compressedFontData, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jlong JNICALL Java_imgui_ImFontAtlas_nAddFontFromMemoryCompressedTTF___3BIFJ_3S(JNIEnv* env, jobject object, jbyteArray obj_compressedFontData, jint compressedFontDataSize, jfloat sizePixels, jlong imFontConfig, jshortArray obj_glyphRanges) {

//@line:411

        auto compressedFontData = obj_compressedFontData == NULL ? NULL : (char*)env->GetPrimitiveArrayCritical(obj_compressedFontData, JNI_FALSE);
        auto glyphRanges = obj_glyphRanges == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_glyphRanges, JNI_FALSE);
        auto _result = (uintptr_t)THIS->AddFontFromMemoryCompressedTTF(&compressedFontData[0], compressedFontDataSize, sizePixels, reinterpret_cast<ImFontConfig*>(imFontConfig), (ImWchar*)&glyphRanges[0]);
        if (compressedFontData != NULL) env->ReleasePrimitiveArrayCritical(obj_compressedFontData, compressedFontData, JNI_FALSE);
        if (glyphRanges != NULL) env->ReleasePrimitiveArrayCritical(obj_glyphRanges, glyphRanges, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jlong JNICALL Java_imgui_ImFontAtlas_nAddFontFromMemoryCompressedTTF___3BIF_3S(JNIEnv* env, jobject object, jbyteArray obj_compressedFontData, jint compressedFontDataSize, jfloat sizePixels, jshortArray obj_glyphRanges) {

//@line:420

        auto compressedFontData = obj_compressedFontData == NULL ? NULL : (char*)env->GetPrimitiveArrayCritical(obj_compressedFontData, JNI_FALSE);
        auto glyphRanges = obj_glyphRanges == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_glyphRanges, JNI_FALSE);
        auto _result = (uintptr_t)THIS->AddFontFromMemoryCompressedTTF(&compressedFontData[0], compressedFontDataSize, sizePixels, NULL, (ImWchar*)&glyphRanges[0]);
        if (compressedFontData != NULL) env->ReleasePrimitiveArrayCritical(obj_compressedFontData, compressedFontData, JNI_FALSE);
        if (glyphRanges != NULL) env->ReleasePrimitiveArrayCritical(obj_glyphRanges, glyphRanges, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jlong JNICALL Java_imgui_ImFontAtlas_nAddFontFromMemoryCompressedBase85TTF__Ljava_lang_String_2FJ(JNIEnv* env, jobject object, jstring obj_compressedFontDataBase85, jfloat sizePixels, jlong fontConfig) {

//@line:443

        auto compressedFontDataBase85 = obj_compressedFontDataBase85 == NULL ? NULL : (char*)env->GetStringUTFChars(obj_compressedFontDataBase85, JNI_FALSE);
        auto _result = (uintptr_t)THIS->AddFontFromMemoryCompressedBase85TTF(compressedFontDataBase85, sizePixels, reinterpret_cast<ImFontConfig*>(fontConfig));
        if (compressedFontDataBase85 != NULL) env->ReleaseStringUTFChars(obj_compressedFontDataBase85, compressedFontDataBase85);
        return _result;
    
}

JNIEXPORT jlong JNICALL Java_imgui_ImFontAtlas_nAddFontFromMemoryCompressedBase85TTF__Ljava_lang_String_2FJ_3S(JNIEnv* env, jobject object, jstring obj_compressedFontDataBase85, jfloat sizePixels, jlong fontConfig, jshortArray obj_glyphRanges) {

//@line:450

        auto compressedFontDataBase85 = obj_compressedFontDataBase85 == NULL ? NULL : (char*)env->GetStringUTFChars(obj_compressedFontDataBase85, JNI_FALSE);
        auto glyphRanges = obj_glyphRanges == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_glyphRanges, JNI_FALSE);
        auto _result = (uintptr_t)THIS->AddFontFromMemoryCompressedBase85TTF(compressedFontDataBase85, sizePixels, reinterpret_cast<ImFontConfig*>(fontConfig), (ImWchar*)&glyphRanges[0]);
        if (compressedFontDataBase85 != NULL) env->ReleaseStringUTFChars(obj_compressedFontDataBase85, compressedFontDataBase85);
        if (glyphRanges != NULL) env->ReleasePrimitiveArrayCritical(obj_glyphRanges, glyphRanges, JNI_FALSE);
        return _result;
    
}

JNIEXPORT void JNICALL Java_imgui_ImFontAtlas_nClearInputData(JNIEnv* env, jobject object) {


//@line:466

        THIS->ClearInputData();
    

}

JNIEXPORT void JNICALL Java_imgui_ImFontAtlas_nClearTexData(JNIEnv* env, jobject object) {


//@line:477

        THIS->ClearTexData();
    

}

JNIEXPORT void JNICALL Java_imgui_ImFontAtlas_nClearFonts(JNIEnv* env, jobject object) {


//@line:488

        THIS->ClearFonts();
    

}

JNIEXPORT void JNICALL Java_imgui_ImFontAtlas_nClear(JNIEnv* env, jobject object) {


//@line:499

        THIS->Clear();
    

}


//@line:509

        #ifdef IMGUI_ENABLE_FREETYPE
        #include "misc/freetype/imgui_freetype.h"
        #endif
     JNIEXPORT void JNICALL Java_imgui_ImFontAtlas_setFreeTypeRenderer(JNIEnv* env, jobject object, jboolean enabled) {


//@line:525

        #ifdef IMGUI_ENABLE_FREETYPE
        extern const ImFontLoader* ImFontAtlasGetFontLoaderForStbTruetype();
        if (enabled) {
            THIS->SetFontLoader(ImGuiFreeType::GetFontLoader());
        } else {
            THIS->SetFontLoader(ImFontAtlasGetFontLoaderForStbTruetype());
        }
        #endif
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImFontAtlas_nBuild(JNIEnv* env, jobject object) {


//@line:543

        return THIS->Build();
    

}

JNIEXPORT void JNICALL Java_imgui_ImFontAtlas_getTexDataAsAlpha8(JNIEnv* env, jobject object, jintArray obj_outWidth, jintArray obj_outHeight, jintArray obj_outBytesPerPixel) {
	int* outWidth = (int*)env->GetPrimitiveArrayCritical(obj_outWidth, 0);
	int* outHeight = (int*)env->GetPrimitiveArrayCritical(obj_outHeight, 0);
	int* outBytesPerPixel = (int*)env->GetPrimitiveArrayCritical(obj_outBytesPerPixel, 0);


//@line:571

        unsigned char* pixels;
        THIS->GetTexDataAsAlpha8(&pixels, &outWidth[0], &outHeight[0], &outBytesPerPixel[0]);
        int size = outWidth[0] * outHeight[0] * outBytesPerPixel[0];
        jobject jBuffer = env->CallObjectMethod(object, jImFontAtlasCreateAlpha8PixelsMID, size);
        char* buffer = (char*)env->GetDirectBufferAddress(jBuffer);
        memcpy(buffer, pixels, size);
    
	env->ReleasePrimitiveArrayCritical(obj_outWidth, outWidth, 0);
	env->ReleasePrimitiveArrayCritical(obj_outHeight, outHeight, 0);
	env->ReleasePrimitiveArrayCritical(obj_outBytesPerPixel, outBytesPerPixel, 0);

}

JNIEXPORT void JNICALL Java_imgui_ImFontAtlas_nGetTexDataAsRGBA32(JNIEnv* env, jobject object, jintArray obj_outWidth, jintArray obj_outHeight, jintArray obj_outBytesPerPixel) {
	int* outWidth = (int*)env->GetPrimitiveArrayCritical(obj_outWidth, 0);
	int* outHeight = (int*)env->GetPrimitiveArrayCritical(obj_outHeight, 0);
	int* outBytesPerPixel = (int*)env->GetPrimitiveArrayCritical(obj_outBytesPerPixel, 0);


//@line:604

        unsigned char* pixels;
        THIS->GetTexDataAsRGBA32(&pixels, &outWidth[0], &outHeight[0], &outBytesPerPixel[0]);
        int size = outWidth[0] * outHeight[0] * outBytesPerPixel[0];
        jobject jBuffer = env->CallObjectMethod(object, jImFontAtlasCreateRgba32PixelsMID, size);
        char* buffer = (char*)env->GetDirectBufferAddress(jBuffer);
        memcpy(buffer, pixels, size);
    
	env->ReleasePrimitiveArrayCritical(obj_outWidth, outWidth, 0);
	env->ReleasePrimitiveArrayCritical(obj_outHeight, outHeight, 0);
	env->ReleasePrimitiveArrayCritical(obj_outBytesPerPixel, outBytesPerPixel, 0);

}

JNIEXPORT jboolean JNICALL Java_imgui_ImFontAtlas_nIsBuilt(JNIEnv* env, jobject object) {


//@line:617

        return THIS->IsBuilt();
    

}

JNIEXPORT void JNICALL Java_imgui_ImFontAtlas_nSetTexID(JNIEnv* env, jobject object, jlong textureID) {


//@line:629

        THIS->SetTexID((ImTextureID)(uintptr_t)textureID);
    

}


//@line:641

        #define RETURN_GLYPH_2_SHORT(glyphs) \
            const ImWchar* ranges = glyphs; \
            int size = 0; \
            for (; ranges[0]; ranges += 2) \
                size += 2; \
            jshortArray jShorts = env->NewShortArray(size); \
            env->SetShortArrayRegion(jShorts, 0, size, (jshort*)glyphs); \
            return jShorts;
     JNIEXPORT jshortArray JNICALL Java_imgui_ImFontAtlas_getGlyphRangesDefault(JNIEnv* env, jobject object) {


//@line:655

        RETURN_GLYPH_2_SHORT(THIS->GetGlyphRangesDefault());
    

}

JNIEXPORT jshortArray JNICALL Java_imgui_ImFontAtlas_getGlyphRangesGreek(JNIEnv* env, jobject object) {


//@line:662

        RETURN_GLYPH_2_SHORT(THIS->GetGlyphRangesGreek());
    

}

JNIEXPORT jshortArray JNICALL Java_imgui_ImFontAtlas_getGlyphRangesKorean(JNIEnv* env, jobject object) {


//@line:669

        RETURN_GLYPH_2_SHORT(THIS->GetGlyphRangesKorean());
    

}

JNIEXPORT jshortArray JNICALL Java_imgui_ImFontAtlas_getGlyphRangesJapanese(JNIEnv* env, jobject object) {


//@line:676

        RETURN_GLYPH_2_SHORT(THIS->GetGlyphRangesJapanese());
    

}

JNIEXPORT jshortArray JNICALL Java_imgui_ImFontAtlas_getGlyphRangesChineseFull(JNIEnv* env, jobject object) {


//@line:683

        RETURN_GLYPH_2_SHORT(THIS->GetGlyphRangesChineseFull());
    

}

JNIEXPORT jshortArray JNICALL Java_imgui_ImFontAtlas_getGlyphRangesChineseSimplifiedCommon(JNIEnv* env, jobject object) {


//@line:690

        RETURN_GLYPH_2_SHORT(THIS->GetGlyphRangesChineseSimplifiedCommon());
    

}

JNIEXPORT jshortArray JNICALL Java_imgui_ImFontAtlas_getGlyphRangesCyrillic(JNIEnv* env, jobject object) {


//@line:697

        RETURN_GLYPH_2_SHORT(THIS->GetGlyphRangesCyrillic());
    

}

JNIEXPORT jshortArray JNICALL Java_imgui_ImFontAtlas_getGlyphRangesThai(JNIEnv* env, jobject object) {


//@line:704

        RETURN_GLYPH_2_SHORT(THIS->GetGlyphRangesThai());
    

}

JNIEXPORT jshortArray JNICALL Java_imgui_ImFontAtlas_getGlyphRangesVietnamese(JNIEnv* env, jobject object) {


//@line:711

        RETURN_GLYPH_2_SHORT(THIS->GetGlyphRangesVietnamese());
    

}


//@line:715

        #undef RETURN_GLYPH_2_SHORT
     JNIEXPORT jint JNICALL Java_imgui_ImFontAtlas_nAddCustomRectRegular(JNIEnv* env, jobject object, jint width, jint height) {


//@line:735

        return THIS->AddCustomRectRegular(width, height);
    

}

JNIEXPORT jint JNICALL Java_imgui_ImFontAtlas_nAddCustomRectFontGlyph__JSIIF(JNIEnv* env, jobject object, jlong imFont, jshort id, jint width, jint height, jfloat advanceX) {


//@line:760

        return THIS->AddCustomRectFontGlyph(reinterpret_cast<ImFont*>(imFont), (ImWchar)id, width, height, advanceX);
    

}

JNIEXPORT jint JNICALL Java_imgui_ImFontAtlas_nAddCustomRectFontGlyph__JSIIFFF(JNIEnv* env, jobject object, jlong imFont, jshort id, jint width, jint height, jfloat advanceX, jfloat offsetX, jfloat offsetY) {

//@line:764

        ImVec2 offset = ImVec2(offsetX, offsetY);
        auto _result = THIS->AddCustomRectFontGlyph(reinterpret_cast<ImFont*>(imFont), (ImWchar)id, width, height, advanceX, offset);
        return _result;
    
}

JNIEXPORT jint JNICALL Java_imgui_ImFontAtlas_nGetFlags(JNIEnv* env, jobject object) {


//@line:811

        return THIS->Flags;
    

}

JNIEXPORT void JNICALL Java_imgui_ImFontAtlas_nSetFlags(JNIEnv* env, jobject object, jint value) {


//@line:815

        THIS->Flags = value;
    

}

JNIEXPORT jint JNICALL Java_imgui_ImFontAtlas_nGetTexMinWidth(JNIEnv* env, jobject object) {


//@line:837

        return THIS->TexMinWidth;
    

}

JNIEXPORT void JNICALL Java_imgui_ImFontAtlas_nSetTexMinWidth(JNIEnv* env, jobject object, jint value) {


//@line:841

        THIS->TexMinWidth = value;
    

}

JNIEXPORT jint JNICALL Java_imgui_ImFontAtlas_nGetTexMinHeight(JNIEnv* env, jobject object) {


//@line:859

        return THIS->TexMinHeight;
    

}

JNIEXPORT void JNICALL Java_imgui_ImFontAtlas_nSetTexMinHeight(JNIEnv* env, jobject object, jint value) {


//@line:863

        THIS->TexMinHeight = value;
    

}

JNIEXPORT jint JNICALL Java_imgui_ImFontAtlas_nGetTexMaxWidth(JNIEnv* env, jobject object) {


//@line:885

        return THIS->TexMaxWidth;
    

}

JNIEXPORT void JNICALL Java_imgui_ImFontAtlas_nSetTexMaxWidth(JNIEnv* env, jobject object, jint value) {


//@line:889

        THIS->TexMaxWidth = value;
    

}

JNIEXPORT jint JNICALL Java_imgui_ImFontAtlas_nGetTexMaxHeight(JNIEnv* env, jobject object) {


//@line:907

        return THIS->TexMaxHeight;
    

}

JNIEXPORT void JNICALL Java_imgui_ImFontAtlas_nSetTexMaxHeight(JNIEnv* env, jobject object, jint value) {


//@line:911

        THIS->TexMaxHeight = value;
    

}

JNIEXPORT jint JNICALL Java_imgui_ImFontAtlas_nGetTexGlyphPadding(JNIEnv* env, jobject object) {


//@line:931

        return THIS->TexGlyphPadding;
    

}

JNIEXPORT void JNICALL Java_imgui_ImFontAtlas_nSetTexGlyphPadding(JNIEnv* env, jobject object, jint value) {


//@line:935

        THIS->TexGlyphPadding = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImFontAtlas_nGetLocked(JNIEnv* env, jobject object) {


//@line:953

        return THIS->Locked;
    

}

JNIEXPORT void JNICALL Java_imgui_ImFontAtlas_nSetLocked(JNIEnv* env, jobject object, jboolean value) {


//@line:957

        THIS->Locked = value;
    

}


//@line:961

        #undef THIS
     