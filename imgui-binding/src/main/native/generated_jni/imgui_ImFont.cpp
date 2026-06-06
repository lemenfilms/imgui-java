#include <imgui_ImFont.h>

//@line:26

        #include "_common.h"
        #define THIS ((ImFont*)STRUCT_PTR)
     JNIEXPORT jlong JNICALL Java_imgui_ImFont_nCreate(JNIEnv* env, jobject object) {


//@line:31

        return (uintptr_t)(new ImFont());
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImFont_nGetLegacySize(JNIEnv* env, jobject object) {


//@line:51

        return THIS->LegacySize;
    

}

JNIEXPORT void JNICALL Java_imgui_ImFont_nSetLegacySize(JNIEnv* env, jobject object, jfloat value) {


//@line:55

        THIS->LegacySize = value;
    

}

JNIEXPORT jshort JNICALL Java_imgui_ImFont_nGetEllipsisChar(JNIEnv* env, jobject object) {


//@line:73

        return THIS->EllipsisChar;
    

}

JNIEXPORT void JNICALL Java_imgui_ImFont_nSetEllipsisChar(JNIEnv* env, jobject object, jshort value) {


//@line:77

        THIS->EllipsisChar = value;
    

}

JNIEXPORT jshort JNICALL Java_imgui_ImFont_nGetFallbackChar(JNIEnv* env, jobject object) {


//@line:95

        return THIS->FallbackChar;
    

}

JNIEXPORT void JNICALL Java_imgui_ImFont_nSetFallbackChar(JNIEnv* env, jobject object, jshort value) {


//@line:99

        THIS->FallbackChar = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImFont_nGetScale(JNIEnv* env, jobject object) {


//@line:119

        return THIS->Scale;
    

}

JNIEXPORT void JNICALL Java_imgui_ImFont_nSetScale(JNIEnv* env, jobject object, jfloat value) {


//@line:123

        THIS->Scale = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImFont_nIsLoaded(JNIEnv* env, jobject object) {


//@line:133

        return THIS->IsLoaded();
    

}

JNIEXPORT jstring JNICALL Java_imgui_ImFont_nGetDebugName(JNIEnv* env, jobject object) {


//@line:141

        return env->NewStringUTF(THIS->GetDebugName());
    

}

JNIEXPORT void JNICALL Java_imgui_ImFont_nCalcTextSizeA__Limgui_ImVec2_2FFFLjava_lang_String_2(JNIEnv* env, jobject object, jobject dst, jfloat size, jfloat maxWidth, jfloat wrapWidth, jstring obj_textBegin) {

//@line:213

        auto textBegin = obj_textBegin == NULL ? NULL : (char*)env->GetStringUTFChars(obj_textBegin, JNI_FALSE);
        Jni::ImVec2Cpy(env, THIS->CalcTextSizeA(size, maxWidth, wrapWidth, textBegin), dst);
        if (textBegin != NULL) env->ReleaseStringUTFChars(obj_textBegin, textBegin);
    
}

JNIEXPORT jfloat JNICALL Java_imgui_ImFont_nCalcTextSizeAX__FFFLjava_lang_String_2(JNIEnv* env, jobject object, jfloat size, jfloat maxWidth, jfloat wrapWidth, jstring obj_textBegin) {

//@line:219

        auto textBegin = obj_textBegin == NULL ? NULL : (char*)env->GetStringUTFChars(obj_textBegin, JNI_FALSE);
        auto _result = THIS->CalcTextSizeA(size, maxWidth, wrapWidth, textBegin).x;
        if (textBegin != NULL) env->ReleaseStringUTFChars(obj_textBegin, textBegin);
        return _result;
    
}

JNIEXPORT jfloat JNICALL Java_imgui_ImFont_nCalcTextSizeAY__FFFLjava_lang_String_2(JNIEnv* env, jobject object, jfloat size, jfloat maxWidth, jfloat wrapWidth, jstring obj_textBegin) {

//@line:226

        auto textBegin = obj_textBegin == NULL ? NULL : (char*)env->GetStringUTFChars(obj_textBegin, JNI_FALSE);
        auto _result = THIS->CalcTextSizeA(size, maxWidth, wrapWidth, textBegin).y;
        if (textBegin != NULL) env->ReleaseStringUTFChars(obj_textBegin, textBegin);
        return _result;
    
}

JNIEXPORT void JNICALL Java_imgui_ImFont_nCalcTextSizeA__Limgui_ImVec2_2FFFLjava_lang_String_2Ljava_lang_String_2(JNIEnv* env, jobject object, jobject dst, jfloat size, jfloat maxWidth, jfloat wrapWidth, jstring obj_textBegin, jstring obj_textEnd) {

//@line:233

        auto textBegin = obj_textBegin == NULL ? NULL : (char*)env->GetStringUTFChars(obj_textBegin, JNI_FALSE);
        auto textEnd = obj_textEnd == NULL ? NULL : (char*)env->GetStringUTFChars(obj_textEnd, JNI_FALSE);
        Jni::ImVec2Cpy(env, THIS->CalcTextSizeA(size, maxWidth, wrapWidth, textBegin, textEnd), dst);
        if (textBegin != NULL) env->ReleaseStringUTFChars(obj_textBegin, textBegin);
        if (textEnd != NULL) env->ReleaseStringUTFChars(obj_textEnd, textEnd);
    
}

JNIEXPORT jfloat JNICALL Java_imgui_ImFont_nCalcTextSizeAX__FFFLjava_lang_String_2Ljava_lang_String_2(JNIEnv* env, jobject object, jfloat size, jfloat maxWidth, jfloat wrapWidth, jstring obj_textBegin, jstring obj_textEnd) {

//@line:241

        auto textBegin = obj_textBegin == NULL ? NULL : (char*)env->GetStringUTFChars(obj_textBegin, JNI_FALSE);
        auto textEnd = obj_textEnd == NULL ? NULL : (char*)env->GetStringUTFChars(obj_textEnd, JNI_FALSE);
        auto _result = THIS->CalcTextSizeA(size, maxWidth, wrapWidth, textBegin, textEnd).x;
        if (textBegin != NULL) env->ReleaseStringUTFChars(obj_textBegin, textBegin);
        if (textEnd != NULL) env->ReleaseStringUTFChars(obj_textEnd, textEnd);
        return _result;
    
}

JNIEXPORT jfloat JNICALL Java_imgui_ImFont_nCalcTextSizeAY__FFFLjava_lang_String_2Ljava_lang_String_2(JNIEnv* env, jobject object, jfloat size, jfloat maxWidth, jfloat wrapWidth, jstring obj_textBegin, jstring obj_textEnd) {

//@line:250

        auto textBegin = obj_textBegin == NULL ? NULL : (char*)env->GetStringUTFChars(obj_textBegin, JNI_FALSE);
        auto textEnd = obj_textEnd == NULL ? NULL : (char*)env->GetStringUTFChars(obj_textEnd, JNI_FALSE);
        auto _result = THIS->CalcTextSizeA(size, maxWidth, wrapWidth, textBegin, textEnd).y;
        if (textBegin != NULL) env->ReleaseStringUTFChars(obj_textBegin, textBegin);
        if (textEnd != NULL) env->ReleaseStringUTFChars(obj_textEnd, textEnd);
        return _result;
    
}

JNIEXPORT jstring JNICALL Java_imgui_ImFont_nCalcWordWrapPositionA(JNIEnv* env, jobject object, jfloat scale, jstring obj_text, jstring obj_textEnd, jfloat wrapWidth) {

//@line:269

        auto text = obj_text == NULL ? NULL : (char*)env->GetStringUTFChars(obj_text, JNI_FALSE);
        auto textEnd = obj_textEnd == NULL ? NULL : (char*)env->GetStringUTFChars(obj_textEnd, JNI_FALSE);
        auto _result = env->NewStringUTF(THIS->CalcWordWrapPositionA(scale, text, textEnd, wrapWidth));
        if (text != NULL) env->ReleaseStringUTFChars(obj_text, text);
        if (textEnd != NULL) env->ReleaseStringUTFChars(obj_textEnd, textEnd);
        return _result;
    
}

JNIEXPORT void JNICALL Java_imgui_ImFont_nRenderChar(JNIEnv* env, jobject object, jlong drawList, jfloat size, jfloat posX, jfloat posY, jint col, jint c) {

//@line:286

        ImVec2 pos = ImVec2(posX, posY);
        THIS->RenderChar(reinterpret_cast<ImDrawList*>(drawList), size, pos, col, (ImWchar)c);
    
}

JNIEXPORT void JNICALL Java_imgui_ImFont_nRenderText__JFFFIFFFFLjava_lang_String_2Ljava_lang_String_2(JNIEnv* env, jobject object, jlong drawList, jfloat size, jfloat posX, jfloat posY, jint col, jfloat clipRectX, jfloat clipRectY, jfloat clipRectZ, jfloat clipRectW, jstring obj_textBegin, jstring obj_textEnd) {

//@line:347

        auto textBegin = obj_textBegin == NULL ? NULL : (char*)env->GetStringUTFChars(obj_textBegin, JNI_FALSE);
        auto textEnd = obj_textEnd == NULL ? NULL : (char*)env->GetStringUTFChars(obj_textEnd, JNI_FALSE);
        ImVec2 pos = ImVec2(posX, posY);
        ImVec4 clipRect = ImVec4(clipRectX, clipRectY, clipRectZ, clipRectW);
        THIS->RenderText(reinterpret_cast<ImDrawList*>(drawList), size, pos, col, clipRect, textBegin, textEnd);
        if (textBegin != NULL) env->ReleaseStringUTFChars(obj_textBegin, textBegin);
        if (textEnd != NULL) env->ReleaseStringUTFChars(obj_textEnd, textEnd);
    
}

JNIEXPORT void JNICALL Java_imgui_ImFont_nRenderText__JFFFIFFFFLjava_lang_String_2Ljava_lang_String_2F(JNIEnv* env, jobject object, jlong drawList, jfloat size, jfloat posX, jfloat posY, jint col, jfloat clipRectX, jfloat clipRectY, jfloat clipRectZ, jfloat clipRectW, jstring obj_textBegin, jstring obj_textEnd, jfloat wrapWidth) {

//@line:357

        auto textBegin = obj_textBegin == NULL ? NULL : (char*)env->GetStringUTFChars(obj_textBegin, JNI_FALSE);
        auto textEnd = obj_textEnd == NULL ? NULL : (char*)env->GetStringUTFChars(obj_textEnd, JNI_FALSE);
        ImVec2 pos = ImVec2(posX, posY);
        ImVec4 clipRect = ImVec4(clipRectX, clipRectY, clipRectZ, clipRectW);
        THIS->RenderText(reinterpret_cast<ImDrawList*>(drawList), size, pos, col, clipRect, textBegin, textEnd, wrapWidth);
        if (textBegin != NULL) env->ReleaseStringUTFChars(obj_textBegin, textBegin);
        if (textEnd != NULL) env->ReleaseStringUTFChars(obj_textEnd, textEnd);
    
}

JNIEXPORT void JNICALL Java_imgui_ImFont_nRenderText__JFFFIFFFFLjava_lang_String_2Ljava_lang_String_2FI(JNIEnv* env, jobject object, jlong drawList, jfloat size, jfloat posX, jfloat posY, jint col, jfloat clipRectX, jfloat clipRectY, jfloat clipRectZ, jfloat clipRectW, jstring obj_textBegin, jstring obj_textEnd, jfloat wrapWidth, jint flags) {

//@line:367

        auto textBegin = obj_textBegin == NULL ? NULL : (char*)env->GetStringUTFChars(obj_textBegin, JNI_FALSE);
        auto textEnd = obj_textEnd == NULL ? NULL : (char*)env->GetStringUTFChars(obj_textEnd, JNI_FALSE);
        ImVec2 pos = ImVec2(posX, posY);
        ImVec4 clipRect = ImVec4(clipRectX, clipRectY, clipRectZ, clipRectW);
        THIS->RenderText(reinterpret_cast<ImDrawList*>(drawList), size, pos, col, clipRect, textBegin, textEnd, wrapWidth, flags);
        if (textBegin != NULL) env->ReleaseStringUTFChars(obj_textBegin, textBegin);
        if (textEnd != NULL) env->ReleaseStringUTFChars(obj_textEnd, textEnd);
    
}

JNIEXPORT void JNICALL Java_imgui_ImFont_nRenderText__JFFFIFFFFLjava_lang_String_2Ljava_lang_String_2I(JNIEnv* env, jobject object, jlong drawList, jfloat size, jfloat posX, jfloat posY, jint col, jfloat clipRectX, jfloat clipRectY, jfloat clipRectZ, jfloat clipRectW, jstring obj_textBegin, jstring obj_textEnd, jint flags) {

//@line:377

        auto textBegin = obj_textBegin == NULL ? NULL : (char*)env->GetStringUTFChars(obj_textBegin, JNI_FALSE);
        auto textEnd = obj_textEnd == NULL ? NULL : (char*)env->GetStringUTFChars(obj_textEnd, JNI_FALSE);
        ImVec2 pos = ImVec2(posX, posY);
        ImVec4 clipRect = ImVec4(clipRectX, clipRectY, clipRectZ, clipRectW);
        THIS->RenderText(reinterpret_cast<ImDrawList*>(drawList), size, pos, col, clipRect, textBegin, textEnd, 0.0f, flags);
        if (textBegin != NULL) env->ReleaseStringUTFChars(obj_textBegin, textBegin);
        if (textEnd != NULL) env->ReleaseStringUTFChars(obj_textEnd, textEnd);
    
}


//@line:387

        #undef THIS
     