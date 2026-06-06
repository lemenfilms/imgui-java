#include <imgui_extension_imguiknobs_ImGuiKnobs.h>

//@line:14

        #include "_imguiknobs.h"
     JNIEXPORT jboolean JNICALL Java_imgui_extension_imguiknobs_ImGuiKnobs_nKnob__Ljava_lang_String_2_3FFF(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_pValue, jfloat vMin, jfloat vMax) {

//@line:354

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pValue = obj_pValue == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_pValue, JNI_FALSE);
        auto _result = ImGuiKnobs::Knob(label, (pValue != NULL ? &pValue[0] : NULL), vMin, vMax);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pValue != NULL) env->ReleasePrimitiveArrayCritical(obj_pValue, pValue, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_imguiknobs_ImGuiKnobs_nKnob__Ljava_lang_String_2_3FFFF(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_pValue, jfloat vMin, jfloat vMax, jfloat speed) {

//@line:363

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pValue = obj_pValue == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_pValue, JNI_FALSE);
        auto _result = ImGuiKnobs::Knob(label, (pValue != NULL ? &pValue[0] : NULL), vMin, vMax, speed);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pValue != NULL) env->ReleasePrimitiveArrayCritical(obj_pValue, pValue, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_imguiknobs_ImGuiKnobs_nKnob__Ljava_lang_String_2_3FFFFLjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_pValue, jfloat vMin, jfloat vMax, jfloat speed, jstring obj_format) {

//@line:372

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pValue = obj_pValue == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_pValue, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGuiKnobs::Knob(label, (pValue != NULL ? &pValue[0] : NULL), vMin, vMax, speed, format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pValue != NULL) env->ReleasePrimitiveArrayCritical(obj_pValue, pValue, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_imguiknobs_ImGuiKnobs_nKnob__Ljava_lang_String_2_3FFFFLjava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_pValue, jfloat vMin, jfloat vMax, jfloat speed, jstring obj_format, jint variant) {

//@line:383

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pValue = obj_pValue == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_pValue, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGuiKnobs::Knob(label, (pValue != NULL ? &pValue[0] : NULL), vMin, vMax, speed, format, variant);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pValue != NULL) env->ReleasePrimitiveArrayCritical(obj_pValue, pValue, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_imguiknobs_ImGuiKnobs_nKnob__Ljava_lang_String_2_3FFFFLjava_lang_String_2IF(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_pValue, jfloat vMin, jfloat vMax, jfloat speed, jstring obj_format, jint variant, jfloat size) {

//@line:394

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pValue = obj_pValue == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_pValue, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGuiKnobs::Knob(label, (pValue != NULL ? &pValue[0] : NULL), vMin, vMax, speed, format, variant, size);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pValue != NULL) env->ReleasePrimitiveArrayCritical(obj_pValue, pValue, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_imguiknobs_ImGuiKnobs_nKnob__Ljava_lang_String_2_3FFFFLjava_lang_String_2IFI(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_pValue, jfloat vMin, jfloat vMax, jfloat speed, jstring obj_format, jint variant, jfloat size, jint flags) {

//@line:405

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pValue = obj_pValue == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_pValue, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGuiKnobs::Knob(label, (pValue != NULL ? &pValue[0] : NULL), vMin, vMax, speed, format, variant, size, flags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pValue != NULL) env->ReleasePrimitiveArrayCritical(obj_pValue, pValue, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_imguiknobs_ImGuiKnobs_nKnob__Ljava_lang_String_2_3FFFFLjava_lang_String_2IFII(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_pValue, jfloat vMin, jfloat vMax, jfloat speed, jstring obj_format, jint variant, jfloat size, jint flags, jint steps) {

//@line:416

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pValue = obj_pValue == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_pValue, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGuiKnobs::Knob(label, (pValue != NULL ? &pValue[0] : NULL), vMin, vMax, speed, format, variant, size, flags, steps);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pValue != NULL) env->ReleasePrimitiveArrayCritical(obj_pValue, pValue, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_imguiknobs_ImGuiKnobs_nKnob__Ljava_lang_String_2_3FFFLjava_lang_String_2IFII(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_pValue, jfloat vMin, jfloat vMax, jstring obj_format, jint variant, jfloat size, jint flags, jint steps) {

//@line:427

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pValue = obj_pValue == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_pValue, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGuiKnobs::Knob(label, (pValue != NULL ? &pValue[0] : NULL), vMin, vMax, 0, format, variant, size, flags, steps);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pValue != NULL) env->ReleasePrimitiveArrayCritical(obj_pValue, pValue, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_imguiknobs_ImGuiKnobs_nKnob__Ljava_lang_String_2_3FFFIFII(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_pValue, jfloat vMin, jfloat vMax, jint variant, jfloat size, jint flags, jint steps) {

//@line:438

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pValue = obj_pValue == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_pValue, JNI_FALSE);
        auto _result = ImGuiKnobs::Knob(label, (pValue != NULL ? &pValue[0] : NULL), vMin, vMax, 0, "%.3f", variant, size, flags, steps);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pValue != NULL) env->ReleasePrimitiveArrayCritical(obj_pValue, pValue, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_imguiknobs_ImGuiKnobs_nKnob__Ljava_lang_String_2_3FFFFIFII(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_pValue, jfloat vMin, jfloat vMax, jfloat speed, jint variant, jfloat size, jint flags, jint steps) {

//@line:447

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pValue = obj_pValue == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_pValue, JNI_FALSE);
        auto _result = ImGuiKnobs::Knob(label, (pValue != NULL ? &pValue[0] : NULL), vMin, vMax, speed, "%.3f", variant, size, flags, steps);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pValue != NULL) env->ReleasePrimitiveArrayCritical(obj_pValue, pValue, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_imguiknobs_ImGuiKnobs_nKnob__Ljava_lang_String_2_3FFFFFII(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_pValue, jfloat vMin, jfloat vMax, jfloat speed, jfloat size, jint flags, jint steps) {

//@line:456

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pValue = obj_pValue == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_pValue, JNI_FALSE);
        auto _result = ImGuiKnobs::Knob(label, (pValue != NULL ? &pValue[0] : NULL), vMin, vMax, speed, "%.3f", ImGuiKnobVariant_Tick, size, flags, steps);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pValue != NULL) env->ReleasePrimitiveArrayCritical(obj_pValue, pValue, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_imguiknobs_ImGuiKnobs_nKnob__Ljava_lang_String_2_3FFFFII(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_pValue, jfloat vMin, jfloat vMax, jfloat speed, jint flags, jint steps) {

//@line:465

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pValue = obj_pValue == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_pValue, JNI_FALSE);
        auto _result = ImGuiKnobs::Knob(label, (pValue != NULL ? &pValue[0] : NULL), vMin, vMax, speed, "%.3f", ImGuiKnobVariant_Tick, 0, flags, steps);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pValue != NULL) env->ReleasePrimitiveArrayCritical(obj_pValue, pValue, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_imguiknobs_ImGuiKnobs_nKnob__Ljava_lang_String_2_3FFFFI(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_pValue, jfloat vMin, jfloat vMax, jfloat speed, jint steps) {

//@line:474

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pValue = obj_pValue == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_pValue, JNI_FALSE);
        auto _result = ImGuiKnobs::Knob(label, (pValue != NULL ? &pValue[0] : NULL), vMin, vMax, speed, "%.3f", ImGuiKnobVariant_Tick, 0, 0, steps);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pValue != NULL) env->ReleasePrimitiveArrayCritical(obj_pValue, pValue, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_imguiknobs_ImGuiKnobs_nKnob__Ljava_lang_String_2_3FFFFLjava_lang_String_2FII(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_pValue, jfloat vMin, jfloat vMax, jfloat speed, jstring obj_format, jfloat size, jint flags, jint steps) {

//@line:483

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pValue = obj_pValue == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_pValue, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGuiKnobs::Knob(label, (pValue != NULL ? &pValue[0] : NULL), vMin, vMax, speed, format, ImGuiKnobVariant_Tick, size, flags, steps);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pValue != NULL) env->ReleasePrimitiveArrayCritical(obj_pValue, pValue, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_imguiknobs_ImGuiKnobs_nKnob__Ljava_lang_String_2_3FFFFLjava_lang_String_2III(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_pValue, jfloat vMin, jfloat vMax, jfloat speed, jstring obj_format, jint variant, jint flags, jint steps) {

//@line:494

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pValue = obj_pValue == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_pValue, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGuiKnobs::Knob(label, (pValue != NULL ? &pValue[0] : NULL), vMin, vMax, speed, format, variant, 0, flags, steps);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pValue != NULL) env->ReleasePrimitiveArrayCritical(obj_pValue, pValue, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_imguiknobs_ImGuiKnobs_nKnob__Ljava_lang_String_2_3FFFFLjava_lang_String_2II(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_pValue, jfloat vMin, jfloat vMax, jfloat speed, jstring obj_format, jint variant, jint steps) {

//@line:505

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pValue = obj_pValue == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_pValue, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGuiKnobs::Knob(label, (pValue != NULL ? &pValue[0] : NULL), vMin, vMax, speed, format, variant, 0, 0, steps);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pValue != NULL) env->ReleasePrimitiveArrayCritical(obj_pValue, pValue, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_imguiknobs_ImGuiKnobs_nKnob__Ljava_lang_String_2_3III(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_pValue, jint vMin, jint vMax) {

//@line:852

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pValue = obj_pValue == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_pValue, JNI_FALSE);
        auto _result = ImGuiKnobs::KnobInt(label, (pValue != NULL ? &pValue[0] : NULL), vMin, vMax);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pValue != NULL) env->ReleasePrimitiveArrayCritical(obj_pValue, pValue, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_imguiknobs_ImGuiKnobs_nKnob__Ljava_lang_String_2_3IIIF(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_pValue, jint vMin, jint vMax, jfloat speed) {

//@line:861

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pValue = obj_pValue == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_pValue, JNI_FALSE);
        auto _result = ImGuiKnobs::KnobInt(label, (pValue != NULL ? &pValue[0] : NULL), vMin, vMax, speed);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pValue != NULL) env->ReleasePrimitiveArrayCritical(obj_pValue, pValue, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_imguiknobs_ImGuiKnobs_nKnob__Ljava_lang_String_2_3IIIFLjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_pValue, jint vMin, jint vMax, jfloat speed, jstring obj_format) {

//@line:870

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pValue = obj_pValue == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_pValue, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGuiKnobs::KnobInt(label, (pValue != NULL ? &pValue[0] : NULL), vMin, vMax, speed, format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pValue != NULL) env->ReleasePrimitiveArrayCritical(obj_pValue, pValue, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_imguiknobs_ImGuiKnobs_nKnob__Ljava_lang_String_2_3IIIFLjava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_pValue, jint vMin, jint vMax, jfloat speed, jstring obj_format, jint variant) {

//@line:881

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pValue = obj_pValue == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_pValue, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGuiKnobs::KnobInt(label, (pValue != NULL ? &pValue[0] : NULL), vMin, vMax, speed, format, variant);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pValue != NULL) env->ReleasePrimitiveArrayCritical(obj_pValue, pValue, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_imguiknobs_ImGuiKnobs_nKnob__Ljava_lang_String_2_3IIIFLjava_lang_String_2IF(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_pValue, jint vMin, jint vMax, jfloat speed, jstring obj_format, jint variant, jfloat size) {

//@line:892

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pValue = obj_pValue == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_pValue, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGuiKnobs::KnobInt(label, (pValue != NULL ? &pValue[0] : NULL), vMin, vMax, speed, format, variant, size);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pValue != NULL) env->ReleasePrimitiveArrayCritical(obj_pValue, pValue, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_imguiknobs_ImGuiKnobs_nKnob__Ljava_lang_String_2_3IIIFLjava_lang_String_2IFI(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_pValue, jint vMin, jint vMax, jfloat speed, jstring obj_format, jint variant, jfloat size, jint flags) {

//@line:903

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pValue = obj_pValue == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_pValue, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGuiKnobs::KnobInt(label, (pValue != NULL ? &pValue[0] : NULL), vMin, vMax, speed, format, variant, size, flags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pValue != NULL) env->ReleasePrimitiveArrayCritical(obj_pValue, pValue, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_imguiknobs_ImGuiKnobs_nKnob__Ljava_lang_String_2_3IIIFLjava_lang_String_2IFII(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_pValue, jint vMin, jint vMax, jfloat speed, jstring obj_format, jint variant, jfloat size, jint flags, jint steps) {

//@line:914

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pValue = obj_pValue == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_pValue, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGuiKnobs::KnobInt(label, (pValue != NULL ? &pValue[0] : NULL), vMin, vMax, speed, format, variant, size, flags, steps);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pValue != NULL) env->ReleasePrimitiveArrayCritical(obj_pValue, pValue, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_imguiknobs_ImGuiKnobs_nKnob__Ljava_lang_String_2_3IIILjava_lang_String_2IFII(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_pValue, jint vMin, jint vMax, jstring obj_format, jint variant, jfloat size, jint flags, jint steps) {

//@line:925

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pValue = obj_pValue == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_pValue, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGuiKnobs::KnobInt(label, (pValue != NULL ? &pValue[0] : NULL), vMin, vMax, 0, format, variant, size, flags, steps);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pValue != NULL) env->ReleasePrimitiveArrayCritical(obj_pValue, pValue, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_imguiknobs_ImGuiKnobs_nKnob__Ljava_lang_String_2_3IIIIFII(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_pValue, jint vMin, jint vMax, jint variant, jfloat size, jint flags, jint steps) {

//@line:936

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pValue = obj_pValue == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_pValue, JNI_FALSE);
        auto _result = ImGuiKnobs::KnobInt(label, (pValue != NULL ? &pValue[0] : NULL), vMin, vMax, 0, "%i", variant, size, flags, steps);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pValue != NULL) env->ReleasePrimitiveArrayCritical(obj_pValue, pValue, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_imguiknobs_ImGuiKnobs_nKnob__Ljava_lang_String_2_3IIIFIFII(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_pValue, jint vMin, jint vMax, jfloat speed, jint variant, jfloat size, jint flags, jint steps) {

//@line:945

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pValue = obj_pValue == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_pValue, JNI_FALSE);
        auto _result = ImGuiKnobs::KnobInt(label, (pValue != NULL ? &pValue[0] : NULL), vMin, vMax, speed, "%i", variant, size, flags, steps);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pValue != NULL) env->ReleasePrimitiveArrayCritical(obj_pValue, pValue, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_imguiknobs_ImGuiKnobs_nKnob__Ljava_lang_String_2_3IIIFFII(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_pValue, jint vMin, jint vMax, jfloat speed, jfloat size, jint flags, jint steps) {

//@line:954

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pValue = obj_pValue == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_pValue, JNI_FALSE);
        auto _result = ImGuiKnobs::KnobInt(label, (pValue != NULL ? &pValue[0] : NULL), vMin, vMax, speed, "%i", ImGuiKnobVariant_Tick, size, flags, steps);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pValue != NULL) env->ReleasePrimitiveArrayCritical(obj_pValue, pValue, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_imguiknobs_ImGuiKnobs_nKnob__Ljava_lang_String_2_3IIIFII(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_pValue, jint vMin, jint vMax, jfloat speed, jint flags, jint steps) {

//@line:963

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pValue = obj_pValue == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_pValue, JNI_FALSE);
        auto _result = ImGuiKnobs::KnobInt(label, (pValue != NULL ? &pValue[0] : NULL), vMin, vMax, speed, "%i", ImGuiKnobVariant_Tick, 0, flags, steps);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pValue != NULL) env->ReleasePrimitiveArrayCritical(obj_pValue, pValue, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_imguiknobs_ImGuiKnobs_nKnob__Ljava_lang_String_2_3IIIFI(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_pValue, jint vMin, jint vMax, jfloat speed, jint steps) {

//@line:972

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pValue = obj_pValue == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_pValue, JNI_FALSE);
        auto _result = ImGuiKnobs::KnobInt(label, (pValue != NULL ? &pValue[0] : NULL), vMin, vMax, speed, "%i", ImGuiKnobVariant_Tick, 0, 0, steps);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pValue != NULL) env->ReleasePrimitiveArrayCritical(obj_pValue, pValue, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_imguiknobs_ImGuiKnobs_nKnob__Ljava_lang_String_2_3IIIFLjava_lang_String_2FII(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_pValue, jint vMin, jint vMax, jfloat speed, jstring obj_format, jfloat size, jint flags, jint steps) {

//@line:981

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pValue = obj_pValue == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_pValue, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGuiKnobs::KnobInt(label, (pValue != NULL ? &pValue[0] : NULL), vMin, vMax, speed, format, ImGuiKnobVariant_Tick, size, flags, steps);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pValue != NULL) env->ReleasePrimitiveArrayCritical(obj_pValue, pValue, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_imguiknobs_ImGuiKnobs_nKnob__Ljava_lang_String_2_3IIIFLjava_lang_String_2III(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_pValue, jint vMin, jint vMax, jfloat speed, jstring obj_format, jint variant, jint flags, jint steps) {

//@line:992

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pValue = obj_pValue == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_pValue, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGuiKnobs::KnobInt(label, (pValue != NULL ? &pValue[0] : NULL), vMin, vMax, speed, format, variant, 0, flags, steps);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pValue != NULL) env->ReleasePrimitiveArrayCritical(obj_pValue, pValue, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_imguiknobs_ImGuiKnobs_nKnob__Ljava_lang_String_2_3IIIFLjava_lang_String_2II(JNIEnv* env, jclass clazz, jstring obj_label, jintArray obj_pValue, jint vMin, jint vMax, jfloat speed, jstring obj_format, jint variant, jint steps) {

//@line:1003

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto pValue = obj_pValue == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_pValue, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImGuiKnobs::KnobInt(label, (pValue != NULL ? &pValue[0] : NULL), vMin, vMax, speed, format, variant, 0, 0, steps);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (pValue != NULL) env->ReleasePrimitiveArrayCritical(obj_pValue, pValue, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

