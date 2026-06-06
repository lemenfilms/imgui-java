#include <imgui_extension_implot_ImPlot.h>

//@line:15

        #include "_implot.h"
     JNIEXPORT jlong JNICALL Java_imgui_extension_implot_ImPlot_nCreateContext(JNIEnv* env, jclass clazz) {


//@line:30

        return (uintptr_t)ImPlot::CreateContext();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nDestroyContext__(JNIEnv* env, jclass clazz) {


//@line:48

        ImPlot::DestroyContext();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nDestroyContext__J(JNIEnv* env, jclass clazz, jlong ctx) {


//@line:52

        ImPlot::DestroyContext(reinterpret_cast<ImPlotContext*>(ctx));
    

}

JNIEXPORT jlong JNICALL Java_imgui_extension_implot_ImPlot_nGetCurrentContext(JNIEnv* env, jclass clazz) {


//@line:63

        return (uintptr_t)ImPlot::GetCurrentContext();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nSetCurrentContext(JNIEnv* env, jclass clazz, jlong ctx) {


//@line:74

        ImPlot::SetCurrentContext(reinterpret_cast<ImPlotContext*>(ctx));
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nSetImGuiContext(JNIEnv* env, jclass clazz, jlong ctx) {


//@line:82

        ImPlot::SetImGuiContext(reinterpret_cast<ImGuiContext*>(ctx));
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_implot_ImPlot_nBeginPlot__Ljava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_titleId) {

//@line:131

        auto titleId = obj_titleId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_titleId, JNI_FALSE);
        auto _result = ImPlot::BeginPlot(titleId);
        if (titleId != NULL) env->ReleaseStringUTFChars(obj_titleId, titleId);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_implot_ImPlot_nBeginPlot__Ljava_lang_String_2FF(JNIEnv* env, jclass clazz, jstring obj_titleId, jfloat sizeX, jfloat sizeY) {

//@line:138

        auto titleId = obj_titleId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_titleId, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        auto _result = ImPlot::BeginPlot(titleId, size);
        if (titleId != NULL) env->ReleaseStringUTFChars(obj_titleId, titleId);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_implot_ImPlot_nBeginPlot__Ljava_lang_String_2FFI(JNIEnv* env, jclass clazz, jstring obj_titleId, jfloat sizeX, jfloat sizeY, jint flags) {

//@line:146

        auto titleId = obj_titleId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_titleId, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        auto _result = ImPlot::BeginPlot(titleId, size, flags);
        if (titleId != NULL) env->ReleaseStringUTFChars(obj_titleId, titleId);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_implot_ImPlot_nBeginPlot__Ljava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_titleId, jint flags) {

//@line:154

        auto titleId = obj_titleId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_titleId, JNI_FALSE);
        auto _result = ImPlot::BeginPlot(titleId, ImVec2(-1,0), flags);
        if (titleId != NULL) env->ReleaseStringUTFChars(obj_titleId, titleId);
        return _result;
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nEndPlot(JNIEnv* env, jclass clazz) {


//@line:169

        ImPlot::EndPlot();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_implot_ImPlot_nBeginSubplots__Ljava_lang_String_2IIFF(JNIEnv* env, jclass clazz, jstring obj_titleID, jint rows, jint cols, jfloat sizeX, jfloat sizeY) {

//@line:263

        auto titleID = obj_titleID == NULL ? NULL : (char*)env->GetStringUTFChars(obj_titleID, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        auto _result = ImPlot::BeginSubplots(titleID, rows, cols, size);
        if (titleID != NULL) env->ReleaseStringUTFChars(obj_titleID, titleID);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_implot_ImPlot_nBeginSubplots__Ljava_lang_String_2IIFFI(JNIEnv* env, jclass clazz, jstring obj_titleID, jint rows, jint cols, jfloat sizeX, jfloat sizeY, jint flags) {

//@line:271

        auto titleID = obj_titleID == NULL ? NULL : (char*)env->GetStringUTFChars(obj_titleID, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        auto _result = ImPlot::BeginSubplots(titleID, rows, cols, size, flags);
        if (titleID != NULL) env->ReleaseStringUTFChars(obj_titleID, titleID);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_implot_ImPlot_nBeginSubplots__Ljava_lang_String_2IIFFI_3F(JNIEnv* env, jclass clazz, jstring obj_titleID, jint rows, jint cols, jfloat sizeX, jfloat sizeY, jint flags, jfloatArray obj_rowRatios) {

//@line:279

        auto titleID = obj_titleID == NULL ? NULL : (char*)env->GetStringUTFChars(obj_titleID, JNI_FALSE);
        auto rowRatios = obj_rowRatios == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_rowRatios, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        auto _result = ImPlot::BeginSubplots(titleID, rows, cols, size, flags, &rowRatios[0]);
        if (titleID != NULL) env->ReleaseStringUTFChars(obj_titleID, titleID);
        if (rowRatios != NULL) env->ReleasePrimitiveArrayCritical(obj_rowRatios, rowRatios, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_implot_ImPlot_nBeginSubplots__Ljava_lang_String_2IIFFI_3F_3F(JNIEnv* env, jclass clazz, jstring obj_titleID, jint rows, jint cols, jfloat sizeX, jfloat sizeY, jint flags, jfloatArray obj_rowRatios, jfloatArray obj_colRatios) {

//@line:289

        auto titleID = obj_titleID == NULL ? NULL : (char*)env->GetStringUTFChars(obj_titleID, JNI_FALSE);
        auto rowRatios = obj_rowRatios == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_rowRatios, JNI_FALSE);
        auto colRatios = obj_colRatios == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_colRatios, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        auto _result = ImPlot::BeginSubplots(titleID, rows, cols, size, flags, &rowRatios[0], &colRatios[0]);
        if (titleID != NULL) env->ReleaseStringUTFChars(obj_titleID, titleID);
        if (rowRatios != NULL) env->ReleasePrimitiveArrayCritical(obj_rowRatios, rowRatios, JNI_FALSE);
        if (colRatios != NULL) env->ReleasePrimitiveArrayCritical(obj_colRatios, colRatios, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_implot_ImPlot_nBeginSubplots__Ljava_lang_String_2IIFF_3F_3F(JNIEnv* env, jclass clazz, jstring obj_titleID, jint rows, jint cols, jfloat sizeX, jfloat sizeY, jfloatArray obj_rowRatios, jfloatArray obj_colRatios) {

//@line:301

        auto titleID = obj_titleID == NULL ? NULL : (char*)env->GetStringUTFChars(obj_titleID, JNI_FALSE);
        auto rowRatios = obj_rowRatios == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_rowRatios, JNI_FALSE);
        auto colRatios = obj_colRatios == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_colRatios, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        auto _result = ImPlot::BeginSubplots(titleID, rows, cols, size, ImPlotSubplotFlags_None, &rowRatios[0], &colRatios[0]);
        if (titleID != NULL) env->ReleaseStringUTFChars(obj_titleID, titleID);
        if (rowRatios != NULL) env->ReleasePrimitiveArrayCritical(obj_rowRatios, rowRatios, JNI_FALSE);
        if (colRatios != NULL) env->ReleasePrimitiveArrayCritical(obj_colRatios, colRatios, JNI_FALSE);
        return _result;
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nEndSubplots(JNIEnv* env, jclass clazz) {


//@line:321

        ImPlot::EndSubplots();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nSetupAxis__I(JNIEnv* env, jclass clazz, jint axis) {


//@line:386

        ImPlot::SetupAxis(axis);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nSetupAxis__ILjava_lang_String_2(JNIEnv* env, jclass clazz, jint axis, jstring obj_label) {

//@line:390

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        ImPlot::SetupAxis(axis, label);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nSetupAxis__ILjava_lang_String_2I(JNIEnv* env, jclass clazz, jint axis, jstring obj_label, jint flags) {

//@line:396

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        ImPlot::SetupAxis(axis, label, flags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nSetupAxis__II(JNIEnv* env, jclass clazz, jint axis, jint flags) {


//@line:402

        ImPlot::SetupAxis(axis, NULL, flags);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nSetupAxisLimits__IDD(JNIEnv* env, jclass clazz, jint axis, jdouble vMin, jdouble vMax) {


//@line:422

        ImPlot::SetupAxisLimits(axis, vMin, vMax);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nSetupAxisLimits__IDDI(JNIEnv* env, jclass clazz, jint axis, jdouble vMin, jdouble vMax, jint cond) {


//@line:426

        ImPlot::SetupAxisLimits(axis, vMin, vMax, cond);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nSetupAxisLinks(JNIEnv* env, jclass clazz, jint axis, jdoubleArray obj_linkMin, jdoubleArray obj_linkMax) {

//@line:438

        auto linkMin = obj_linkMin == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_linkMin, JNI_FALSE);
        auto linkMax = obj_linkMax == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_linkMax, JNI_FALSE);
        ImPlot::SetupAxisLinks(axis, (linkMin != NULL ? &linkMin[0] : NULL), (linkMax != NULL ? &linkMax[0] : NULL));
        if (linkMin != NULL) env->ReleasePrimitiveArrayCritical(obj_linkMin, linkMin, JNI_FALSE);
        if (linkMax != NULL) env->ReleasePrimitiveArrayCritical(obj_linkMax, linkMax, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nSetupAxisFormat(JNIEnv* env, jclass clazz, jint axis, jstring obj_fmt) {

//@line:454

        auto fmt = obj_fmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_fmt, JNI_FALSE);
        ImPlot::SetupAxisFormat(axis, fmt);
        if (fmt != NULL) env->ReleaseStringUTFChars(obj_fmt, fmt);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nSetupAxisTicks__I_3DI(JNIEnv* env, jclass clazz, jint axis, jdoubleArray obj_values, jint nTicks) {

//@line:494

        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::SetupAxisTicks(axis, &values[0], nTicks);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nSetupAxisTicks__I_3DI_3Ljava_lang_String_2I(JNIEnv* env, jclass clazz, jint axis, jdoubleArray obj_values, jint nTicks, jobjectArray obj_labels, jint labelsCount) {

//@line:500

        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        const char* labels[labelsCount];
        for (int i = 0; i < labelsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labels, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labels[i] = rawStr;
        };
        ImPlot::SetupAxisTicks(axis, &values[0], nTicks, labels);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        for (int i = 0; i < labelsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labels, i);
            env->ReleaseStringUTFChars(str, labels[i]);
        };
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nSetupAxisTicks__I_3DI_3Ljava_lang_String_2IZ(JNIEnv* env, jclass clazz, jint axis, jdoubleArray obj_values, jint nTicks, jobjectArray obj_labels, jint labelsCount, jboolean keepDefault) {

//@line:516

        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        const char* labels[labelsCount];
        for (int i = 0; i < labelsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labels, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labels[i] = rawStr;
        };
        ImPlot::SetupAxisTicks(axis, &values[0], nTicks, labels, keepDefault);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        for (int i = 0; i < labelsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labels, i);
            env->ReleaseStringUTFChars(str, labels[i]);
        };
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nSetupAxisTicks__I_3DIZ(JNIEnv* env, jclass clazz, jint axis, jdoubleArray obj_values, jint nTicks, jboolean keepDefault) {

//@line:532

        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::SetupAxisTicks(axis, &values[0], nTicks, NULL, keepDefault);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nSetupAxisTicks__IDDI(JNIEnv* env, jclass clazz, jint axis, jdouble vMin, jdouble vMax, jint nTicks) {


//@line:570

        ImPlot::SetupAxisTicks(axis, vMin, vMax, nTicks);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nSetupAxisTicks__IDDI_3Ljava_lang_String_2I(JNIEnv* env, jclass clazz, jint axis, jdouble vMin, jdouble vMax, jint nTicks, jobjectArray obj_labels, jint labelsCount) {

//@line:574

        const char* labels[labelsCount];
        for (int i = 0; i < labelsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labels, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labels[i] = rawStr;
        };
        ImPlot::SetupAxisTicks(axis, vMin, vMax, nTicks, labels);
        for (int i = 0; i < labelsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labels, i);
            env->ReleaseStringUTFChars(str, labels[i]);
        };
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nSetupAxisTicks__IDDI_3Ljava_lang_String_2IZ(JNIEnv* env, jclass clazz, jint axis, jdouble vMin, jdouble vMax, jint nTicks, jobjectArray obj_labels, jint labelsCount, jboolean keepDefault) {

//@line:588

        const char* labels[labelsCount];
        for (int i = 0; i < labelsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labels, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labels[i] = rawStr;
        };
        ImPlot::SetupAxisTicks(axis, vMin, vMax, nTicks, labels, keepDefault);
        for (int i = 0; i < labelsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labels, i);
            env->ReleaseStringUTFChars(str, labels[i]);
        };
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nSetupAxisTicks__IDDIZ(JNIEnv* env, jclass clazz, jint axis, jdouble vMin, jdouble vMax, jint nTicks, jboolean keepDefault) {


//@line:602

        ImPlot::SetupAxisTicks(axis, vMin, vMax, nTicks, NULL, keepDefault);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nSetupAxisScale(JNIEnv* env, jclass clazz, jint axis, jint scale) {


//@line:613

        ImPlot::SetupAxisScale(axis, scale);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nSetupAxisLimitsConstraints(JNIEnv* env, jclass clazz, jint axis, jdouble vMin, jdouble vMax) {


//@line:624

        ImPlot::SetupAxisLimitsConstraints(axis, vMin, vMax);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nSetupAxisZoomConstraints(JNIEnv* env, jclass clazz, jint axis, jdouble vMin, jdouble vMax) {


//@line:635

        ImPlot::SetupAxisZoomConstraints(axis, vMin, vMax);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nSetupAxes__Ljava_lang_String_2Ljava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_xLabel, jstring obj_yLabel) {

//@line:660

        auto xLabel = obj_xLabel == NULL ? NULL : (char*)env->GetStringUTFChars(obj_xLabel, JNI_FALSE);
        auto yLabel = obj_yLabel == NULL ? NULL : (char*)env->GetStringUTFChars(obj_yLabel, JNI_FALSE);
        ImPlot::SetupAxes(xLabel, yLabel);
        if (xLabel != NULL) env->ReleaseStringUTFChars(obj_xLabel, xLabel);
        if (yLabel != NULL) env->ReleaseStringUTFChars(obj_yLabel, yLabel);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nSetupAxes__Ljava_lang_String_2Ljava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_xLabel, jstring obj_yLabel, jint xFlags) {

//@line:668

        auto xLabel = obj_xLabel == NULL ? NULL : (char*)env->GetStringUTFChars(obj_xLabel, JNI_FALSE);
        auto yLabel = obj_yLabel == NULL ? NULL : (char*)env->GetStringUTFChars(obj_yLabel, JNI_FALSE);
        ImPlot::SetupAxes(xLabel, yLabel, xFlags);
        if (xLabel != NULL) env->ReleaseStringUTFChars(obj_xLabel, xLabel);
        if (yLabel != NULL) env->ReleaseStringUTFChars(obj_yLabel, yLabel);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nSetupAxes__Ljava_lang_String_2Ljava_lang_String_2II(JNIEnv* env, jclass clazz, jstring obj_xLabel, jstring obj_yLabel, jint xFlags, jint yFlags) {

//@line:676

        auto xLabel = obj_xLabel == NULL ? NULL : (char*)env->GetStringUTFChars(obj_xLabel, JNI_FALSE);
        auto yLabel = obj_yLabel == NULL ? NULL : (char*)env->GetStringUTFChars(obj_yLabel, JNI_FALSE);
        ImPlot::SetupAxes(xLabel, yLabel, xFlags, yFlags);
        if (xLabel != NULL) env->ReleaseStringUTFChars(obj_xLabel, xLabel);
        if (yLabel != NULL) env->ReleaseStringUTFChars(obj_yLabel, yLabel);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nSetupAxesLimits__DDDD(JNIEnv* env, jclass clazz, jdouble xMin, jdouble xMax, jdouble yMin, jdouble yMax) {


//@line:700

        ImPlot::SetupAxesLimits(xMin, xMax, yMin, yMax);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nSetupAxesLimits__DDDDI(JNIEnv* env, jclass clazz, jdouble xMin, jdouble xMax, jdouble yMin, jdouble yMax, jint cond) {


//@line:704

        ImPlot::SetupAxesLimits(xMin, xMax, yMin, yMax, cond);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nSetupLegend__I(JNIEnv* env, jclass clazz, jint location) {


//@line:722

        ImPlot::SetupLegend(location);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nSetupLegend__II(JNIEnv* env, jclass clazz, jint location, jint flags) {


//@line:726

        ImPlot::SetupLegend(location, flags);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nSetupMouseText__I(JNIEnv* env, jclass clazz, jint location) {


//@line:744

        ImPlot::SetupMouseText(location);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nSetupMouseText__II(JNIEnv* env, jclass clazz, jint location, jint flags) {


//@line:748

        ImPlot::SetupMouseText(location, flags);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nSetupFinish(JNIEnv* env, jclass clazz) {


//@line:761

        ImPlot::SetupFinish();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nSetNextAxisLimits__IDD(JNIEnv* env, jclass clazz, jint axis, jdouble vMin, jdouble vMax) {


//@line:802

        ImPlot::SetNextAxisLimits(axis, vMin, vMax);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nSetNextAxisLimits__IDDI(JNIEnv* env, jclass clazz, jint axis, jdouble vMin, jdouble vMax, jint cond) {


//@line:806

        ImPlot::SetNextAxisLimits(axis, vMin, vMax, cond);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nSetNextAxisLinks(JNIEnv* env, jclass clazz, jint axis, jdoubleArray obj_linkMin, jdoubleArray obj_linkMax) {

//@line:818

        auto linkMin = obj_linkMin == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_linkMin, JNI_FALSE);
        auto linkMax = obj_linkMax == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_linkMax, JNI_FALSE);
        ImPlot::SetNextAxisLinks(axis, (linkMin != NULL ? &linkMin[0] : NULL), (linkMax != NULL ? &linkMax[0] : NULL));
        if (linkMin != NULL) env->ReleasePrimitiveArrayCritical(obj_linkMin, linkMin, JNI_FALSE);
        if (linkMax != NULL) env->ReleasePrimitiveArrayCritical(obj_linkMax, linkMax, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nSetNextAxisToFit(JNIEnv* env, jclass clazz, jint axis) {


//@line:833

        ImPlot::SetNextAxisToFit(axis);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nSetNextAxesLimits__DDDD(JNIEnv* env, jclass clazz, jdouble xMin, jdouble xMax, jdouble yMin, jdouble yMax) {


//@line:853

        ImPlot::SetNextAxesLimits(xMin, xMax, yMin, yMax);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nSetNextAxesLimits__DDDDI(JNIEnv* env, jclass clazz, jdouble xMin, jdouble xMax, jdouble yMin, jdouble yMax, jint cond) {


//@line:857

        ImPlot::SetNextAxesLimits(xMin, xMax, yMin, yMax, cond);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nSetNextAxesToFit(JNIEnv* env, jclass clazz) {


//@line:868

        ImPlot::SetNextAxesToFit();
    

}


//@line:924

        // For a proper type conversion, since C++ doesn't have a "long" type.
        #define long ImS64
        #define LEN(arg) (int)env->GetArrayLength(obj_##arg)
     JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotLine__Ljava_lang_String_2_3S(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values) {

//@line:960

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotLine__Ljava_lang_String_2_3SD(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jdouble xscale) {

//@line:968

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], LEN(values), xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotLine__Ljava_lang_String_2_3SDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jdouble xscale, jdouble xstart) {

//@line:976

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], LEN(values), xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotLine__Ljava_lang_String_2_3SDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jdouble xscale, jdouble xstart, jlong spec) {

//@line:984

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], LEN(values), xscale, xstart, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotLine__Ljava_lang_String_2_3I(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values) {

//@line:1020

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotLine__Ljava_lang_String_2_3ID(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jdouble xscale) {

//@line:1028

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], LEN(values), xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotLine__Ljava_lang_String_2_3IDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jdouble xscale, jdouble xstart) {

//@line:1036

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], LEN(values), xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotLine__Ljava_lang_String_2_3IDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jdouble xscale, jdouble xstart, jlong spec) {

//@line:1044

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], LEN(values), xscale, xstart, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotLine__Ljava_lang_String_2_3J(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values) {

//@line:1080

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotLine__Ljava_lang_String_2_3JD(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jdouble xscale) {

//@line:1088

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], LEN(values), xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotLine__Ljava_lang_String_2_3JDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jdouble xscale, jdouble xstart) {

//@line:1096

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], LEN(values), xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotLine__Ljava_lang_String_2_3JDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jdouble xscale, jdouble xstart, jlong spec) {

//@line:1104

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], LEN(values), xscale, xstart, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotLine__Ljava_lang_String_2_3F(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values) {

//@line:1140

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotLine__Ljava_lang_String_2_3FD(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jdouble xscale) {

//@line:1148

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], LEN(values), xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotLine__Ljava_lang_String_2_3FDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jdouble xscale, jdouble xstart) {

//@line:1156

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], LEN(values), xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotLine__Ljava_lang_String_2_3FDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jdouble xscale, jdouble xstart, jlong spec) {

//@line:1164

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], LEN(values), xscale, xstart, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotLine__Ljava_lang_String_2_3D(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values) {

//@line:1200

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotLine__Ljava_lang_String_2_3DD(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jdouble xscale) {

//@line:1208

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], LEN(values), xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotLine__Ljava_lang_String_2_3DDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jdouble xscale, jdouble xstart) {

//@line:1216

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], LEN(values), xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotLine__Ljava_lang_String_2_3DDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jdouble xscale, jdouble xstart, jlong spec) {

//@line:1224

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], LEN(values), xscale, xstart, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotLineV__Ljava_lang_String_2_3SI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint count) {

//@line:1260

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotLineV__Ljava_lang_String_2_3SID(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint count, jdouble xscale) {

//@line:1268

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], count, xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotLineV__Ljava_lang_String_2_3SIDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint count, jdouble xscale, jdouble xstart) {

//@line:1276

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], count, xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotLineV__Ljava_lang_String_2_3SIDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint count, jdouble xscale, jdouble xstart, jlong spec) {

//@line:1284

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], count, xscale, xstart, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotLineV__Ljava_lang_String_2_3II(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint count) {

//@line:1320

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotLineV__Ljava_lang_String_2_3IID(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint count, jdouble xscale) {

//@line:1328

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], count, xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotLineV__Ljava_lang_String_2_3IIDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint count, jdouble xscale, jdouble xstart) {

//@line:1336

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], count, xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotLineV__Ljava_lang_String_2_3IIDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint count, jdouble xscale, jdouble xstart, jlong spec) {

//@line:1344

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], count, xscale, xstart, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotLineV__Ljava_lang_String_2_3JI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint count) {

//@line:1380

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotLineV__Ljava_lang_String_2_3JID(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint count, jdouble xscale) {

//@line:1388

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], count, xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotLineV__Ljava_lang_String_2_3JIDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint count, jdouble xscale, jdouble xstart) {

//@line:1396

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], count, xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotLineV__Ljava_lang_String_2_3JIDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint count, jdouble xscale, jdouble xstart, jlong spec) {

//@line:1404

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], count, xscale, xstart, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotLineV__Ljava_lang_String_2_3FI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint count) {

//@line:1440

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotLineV__Ljava_lang_String_2_3FID(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint count, jdouble xscale) {

//@line:1448

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], count, xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotLineV__Ljava_lang_String_2_3FIDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint count, jdouble xscale, jdouble xstart) {

//@line:1456

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], count, xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotLineV__Ljava_lang_String_2_3FIDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint count, jdouble xscale, jdouble xstart, jlong spec) {

//@line:1464

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], count, xscale, xstart, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotLineV__Ljava_lang_String_2_3DI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint count) {

//@line:1500

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotLineV__Ljava_lang_String_2_3DID(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint count, jdouble xscale) {

//@line:1508

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], count, xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotLineV__Ljava_lang_String_2_3DIDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint count, jdouble xscale, jdouble xstart) {

//@line:1516

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], count, xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotLineV__Ljava_lang_String_2_3DIDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint count, jdouble xscale, jdouble xstart, jlong spec) {

//@line:1524

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], count, xscale, xstart, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotLine__Ljava_lang_String_2_3S_3S(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys) {

//@line:1548

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotLine(labelId, &xs[0], &ys[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotLine__Ljava_lang_String_2_3S_3SJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jlong spec) {

//@line:1558

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotLine(labelId, &xs[0], &ys[0], LEN(xs), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotLine__Ljava_lang_String_2_3I_3I(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys) {

//@line:1582

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotLine(labelId, &xs[0], &ys[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotLine__Ljava_lang_String_2_3I_3IJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jlong spec) {

//@line:1592

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotLine(labelId, &xs[0], &ys[0], LEN(xs), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotLine__Ljava_lang_String_2_3J_3J(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys) {

//@line:1616

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotLine(labelId, &xs[0], &ys[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotLine__Ljava_lang_String_2_3J_3JJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jlong spec) {

//@line:1626

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotLine(labelId, &xs[0], &ys[0], LEN(xs), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotLine__Ljava_lang_String_2_3F_3F(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys) {

//@line:1650

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotLine(labelId, &xs[0], &ys[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotLine__Ljava_lang_String_2_3F_3FJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jlong spec) {

//@line:1660

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotLine(labelId, &xs[0], &ys[0], LEN(xs), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotLine__Ljava_lang_String_2_3D_3D(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys) {

//@line:1684

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotLine(labelId, &xs[0], &ys[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotLine__Ljava_lang_String_2_3D_3DJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jlong spec) {

//@line:1694

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotLine(labelId, &xs[0], &ys[0], LEN(xs), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotLineV__Ljava_lang_String_2_3S_3SI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jint count) {

//@line:1718

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotLine(labelId, &xs[0], &ys[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotLineV__Ljava_lang_String_2_3S_3SIJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jint count, jlong spec) {

//@line:1728

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotLine(labelId, &xs[0], &ys[0], count, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotLineV__Ljava_lang_String_2_3I_3II(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jint count) {

//@line:1752

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotLine(labelId, &xs[0], &ys[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotLineV__Ljava_lang_String_2_3I_3IIJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jint count, jlong spec) {

//@line:1762

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotLine(labelId, &xs[0], &ys[0], count, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotLineV__Ljava_lang_String_2_3J_3JI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jint count) {

//@line:1786

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotLine(labelId, &xs[0], &ys[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotLineV__Ljava_lang_String_2_3J_3JIJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jint count, jlong spec) {

//@line:1796

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotLine(labelId, &xs[0], &ys[0], count, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotLineV__Ljava_lang_String_2_3F_3FI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jint count) {

//@line:1820

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotLine(labelId, &xs[0], &ys[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotLineV__Ljava_lang_String_2_3F_3FIJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jint count, jlong spec) {

//@line:1830

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotLine(labelId, &xs[0], &ys[0], count, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotLineV__Ljava_lang_String_2_3D_3DI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jint count) {

//@line:1854

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotLine(labelId, &xs[0], &ys[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotLineV__Ljava_lang_String_2_3D_3DIJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jint count, jlong spec) {

//@line:1864

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotLine(labelId, &xs[0], &ys[0], count, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotScatter__Ljava_lang_String_2_3S(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values) {

//@line:1904

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotScatter__Ljava_lang_String_2_3SD(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jdouble xscale) {

//@line:1912

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], LEN(values), xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotScatter__Ljava_lang_String_2_3SDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jdouble xscale, jdouble xstart) {

//@line:1920

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], LEN(values), xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotScatter__Ljava_lang_String_2_3SDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jdouble xscale, jdouble xstart, jlong spec) {

//@line:1928

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], LEN(values), xscale, xstart, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotScatter__Ljava_lang_String_2_3I(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values) {

//@line:1964

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotScatter__Ljava_lang_String_2_3ID(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jdouble xscale) {

//@line:1972

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], LEN(values), xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotScatter__Ljava_lang_String_2_3IDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jdouble xscale, jdouble xstart) {

//@line:1980

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], LEN(values), xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotScatter__Ljava_lang_String_2_3IDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jdouble xscale, jdouble xstart, jlong spec) {

//@line:1988

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], LEN(values), xscale, xstart, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotScatter__Ljava_lang_String_2_3J(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values) {

//@line:2024

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotScatter__Ljava_lang_String_2_3JD(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jdouble xscale) {

//@line:2032

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], LEN(values), xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotScatter__Ljava_lang_String_2_3JDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jdouble xscale, jdouble xstart) {

//@line:2040

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], LEN(values), xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotScatter__Ljava_lang_String_2_3JDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jdouble xscale, jdouble xstart, jlong spec) {

//@line:2048

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], LEN(values), xscale, xstart, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotScatter__Ljava_lang_String_2_3F(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values) {

//@line:2084

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotScatter__Ljava_lang_String_2_3FD(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jdouble xscale) {

//@line:2092

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], LEN(values), xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotScatter__Ljava_lang_String_2_3FDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jdouble xscale, jdouble xstart) {

//@line:2100

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], LEN(values), xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotScatter__Ljava_lang_String_2_3FDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jdouble xscale, jdouble xstart, jlong spec) {

//@line:2108

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], LEN(values), xscale, xstart, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotScatter__Ljava_lang_String_2_3D(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values) {

//@line:2144

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotScatter__Ljava_lang_String_2_3DD(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jdouble xscale) {

//@line:2152

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], LEN(values), xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotScatter__Ljava_lang_String_2_3DDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jdouble xscale, jdouble xstart) {

//@line:2160

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], LEN(values), xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotScatter__Ljava_lang_String_2_3DDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jdouble xscale, jdouble xstart, jlong spec) {

//@line:2168

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], LEN(values), xscale, xstart, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotScatterV__Ljava_lang_String_2_3SI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint count) {

//@line:2204

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotScatterV__Ljava_lang_String_2_3SID(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint count, jdouble xscale) {

//@line:2212

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], count, xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotScatterV__Ljava_lang_String_2_3SIDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint count, jdouble xscale, jdouble xstart) {

//@line:2220

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], count, xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotScatterV__Ljava_lang_String_2_3SIDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint count, jdouble xscale, jdouble xstart, jlong spec) {

//@line:2228

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], count, xscale, xstart, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotScatterV__Ljava_lang_String_2_3II(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint count) {

//@line:2264

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotScatterV__Ljava_lang_String_2_3IID(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint count, jdouble xscale) {

//@line:2272

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], count, xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotScatterV__Ljava_lang_String_2_3IIDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint count, jdouble xscale, jdouble xstart) {

//@line:2280

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], count, xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotScatterV__Ljava_lang_String_2_3IIDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint count, jdouble xscale, jdouble xstart, jlong spec) {

//@line:2288

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], count, xscale, xstart, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotScatterV__Ljava_lang_String_2_3JI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint count) {

//@line:2324

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotScatterV__Ljava_lang_String_2_3JID(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint count, jdouble xscale) {

//@line:2332

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], count, xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotScatterV__Ljava_lang_String_2_3JIDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint count, jdouble xscale, jdouble xstart) {

//@line:2340

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], count, xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotScatterV__Ljava_lang_String_2_3JIDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint count, jdouble xscale, jdouble xstart, jlong spec) {

//@line:2348

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], count, xscale, xstart, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotScatterV__Ljava_lang_String_2_3FI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint count) {

//@line:2384

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotScatterV__Ljava_lang_String_2_3FID(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint count, jdouble xscale) {

//@line:2392

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], count, xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotScatterV__Ljava_lang_String_2_3FIDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint count, jdouble xscale, jdouble xstart) {

//@line:2400

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], count, xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotScatterV__Ljava_lang_String_2_3FIDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint count, jdouble xscale, jdouble xstart, jlong spec) {

//@line:2408

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], count, xscale, xstart, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotScatterV__Ljava_lang_String_2_3DI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint count) {

//@line:2444

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotScatterV__Ljava_lang_String_2_3DID(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint count, jdouble xscale) {

//@line:2452

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], count, xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotScatterV__Ljava_lang_String_2_3DIDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint count, jdouble xscale, jdouble xstart) {

//@line:2460

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], count, xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotScatterV__Ljava_lang_String_2_3DIDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint count, jdouble xscale, jdouble xstart, jlong spec) {

//@line:2468

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], count, xscale, xstart, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotScatter__Ljava_lang_String_2_3S_3S(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys) {

//@line:2492

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &xs[0], &ys[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotScatter__Ljava_lang_String_2_3S_3SJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jlong spec) {

//@line:2502

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &xs[0], &ys[0], LEN(xs), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotScatter__Ljava_lang_String_2_3I_3I(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys) {

//@line:2526

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &xs[0], &ys[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotScatter__Ljava_lang_String_2_3I_3IJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jlong spec) {

//@line:2536

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &xs[0], &ys[0], LEN(xs), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotScatter__Ljava_lang_String_2_3J_3J(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys) {

//@line:2560

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &xs[0], &ys[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotScatter__Ljava_lang_String_2_3J_3JJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jlong spec) {

//@line:2570

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &xs[0], &ys[0], LEN(xs), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotScatter__Ljava_lang_String_2_3F_3F(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys) {

//@line:2594

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &xs[0], &ys[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotScatter__Ljava_lang_String_2_3F_3FJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jlong spec) {

//@line:2604

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &xs[0], &ys[0], LEN(xs), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotScatter__Ljava_lang_String_2_3D_3D(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys) {

//@line:2628

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &xs[0], &ys[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotScatter__Ljava_lang_String_2_3D_3DJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jlong spec) {

//@line:2638

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &xs[0], &ys[0], LEN(xs), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotScatterV__Ljava_lang_String_2_3S_3SI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jint count) {

//@line:2662

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &xs[0], &ys[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotScatterV__Ljava_lang_String_2_3S_3SIJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jint count, jlong spec) {

//@line:2672

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &xs[0], &ys[0], count, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotScatterV__Ljava_lang_String_2_3I_3II(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jint count) {

//@line:2696

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &xs[0], &ys[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotScatterV__Ljava_lang_String_2_3I_3IIJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jint count, jlong spec) {

//@line:2706

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &xs[0], &ys[0], count, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotScatterV__Ljava_lang_String_2_3J_3JI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jint count) {

//@line:2730

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &xs[0], &ys[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotScatterV__Ljava_lang_String_2_3J_3JIJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jint count, jlong spec) {

//@line:2740

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &xs[0], &ys[0], count, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotScatterV__Ljava_lang_String_2_3F_3FI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jint count) {

//@line:2764

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &xs[0], &ys[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotScatterV__Ljava_lang_String_2_3F_3FIJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jint count, jlong spec) {

//@line:2774

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &xs[0], &ys[0], count, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotScatterV__Ljava_lang_String_2_3D_3DI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jint count) {

//@line:2798

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &xs[0], &ys[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotScatterV__Ljava_lang_String_2_3D_3DIJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jint count, jlong spec) {

//@line:2808

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &xs[0], &ys[0], count, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStairs__Ljava_lang_String_2_3S(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values) {

//@line:2848

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStairs__Ljava_lang_String_2_3SD(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jdouble xscale) {

//@line:2856

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], LEN(values), xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStairs__Ljava_lang_String_2_3SDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jdouble xscale, jdouble xstart) {

//@line:2864

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], LEN(values), xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStairs__Ljava_lang_String_2_3SDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jdouble xscale, jdouble xstart, jlong spec) {

//@line:2872

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], LEN(values), xscale, xstart, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStairs__Ljava_lang_String_2_3I(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values) {

//@line:2908

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStairs__Ljava_lang_String_2_3ID(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jdouble xscale) {

//@line:2916

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], LEN(values), xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStairs__Ljava_lang_String_2_3IDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jdouble xscale, jdouble xstart) {

//@line:2924

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], LEN(values), xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStairs__Ljava_lang_String_2_3IDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jdouble xscale, jdouble xstart, jlong spec) {

//@line:2932

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], LEN(values), xscale, xstart, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStairs__Ljava_lang_String_2_3J(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values) {

//@line:2968

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStairs__Ljava_lang_String_2_3JD(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jdouble xscale) {

//@line:2976

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], LEN(values), xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStairs__Ljava_lang_String_2_3JDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jdouble xscale, jdouble xstart) {

//@line:2984

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], LEN(values), xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStairs__Ljava_lang_String_2_3JDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jdouble xscale, jdouble xstart, jlong spec) {

//@line:2992

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], LEN(values), xscale, xstart, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStairs__Ljava_lang_String_2_3F(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values) {

//@line:3028

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStairs__Ljava_lang_String_2_3FD(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jdouble xscale) {

//@line:3036

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], LEN(values), xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStairs__Ljava_lang_String_2_3FDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jdouble xscale, jdouble xstart) {

//@line:3044

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], LEN(values), xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStairs__Ljava_lang_String_2_3FDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jdouble xscale, jdouble xstart, jlong spec) {

//@line:3052

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], LEN(values), xscale, xstart, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStairs__Ljava_lang_String_2_3D(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values) {

//@line:3088

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStairs__Ljava_lang_String_2_3DD(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jdouble xscale) {

//@line:3096

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], LEN(values), xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStairs__Ljava_lang_String_2_3DDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jdouble xscale, jdouble xstart) {

//@line:3104

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], LEN(values), xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStairs__Ljava_lang_String_2_3DDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jdouble xscale, jdouble xstart, jlong spec) {

//@line:3112

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], LEN(values), xscale, xstart, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStairsV__Ljava_lang_String_2_3SI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint count) {

//@line:3148

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStairsV__Ljava_lang_String_2_3SID(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint count, jdouble xscale) {

//@line:3156

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], count, xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStairsV__Ljava_lang_String_2_3SIDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint count, jdouble xscale, jdouble xstart) {

//@line:3164

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], count, xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStairsV__Ljava_lang_String_2_3SIDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint count, jdouble xscale, jdouble xstart, jlong spec) {

//@line:3172

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], count, xscale, xstart, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStairsV__Ljava_lang_String_2_3II(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint count) {

//@line:3208

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStairsV__Ljava_lang_String_2_3IID(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint count, jdouble xscale) {

//@line:3216

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], count, xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStairsV__Ljava_lang_String_2_3IIDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint count, jdouble xscale, jdouble xstart) {

//@line:3224

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], count, xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStairsV__Ljava_lang_String_2_3IIDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint count, jdouble xscale, jdouble xstart, jlong spec) {

//@line:3232

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], count, xscale, xstart, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStairsV__Ljava_lang_String_2_3JI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint count) {

//@line:3268

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStairsV__Ljava_lang_String_2_3JID(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint count, jdouble xscale) {

//@line:3276

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], count, xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStairsV__Ljava_lang_String_2_3JIDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint count, jdouble xscale, jdouble xstart) {

//@line:3284

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], count, xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStairsV__Ljava_lang_String_2_3JIDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint count, jdouble xscale, jdouble xstart, jlong spec) {

//@line:3292

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], count, xscale, xstart, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStairsV__Ljava_lang_String_2_3FI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint count) {

//@line:3328

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStairsV__Ljava_lang_String_2_3FID(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint count, jdouble xscale) {

//@line:3336

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], count, xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStairsV__Ljava_lang_String_2_3FIDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint count, jdouble xscale, jdouble xstart) {

//@line:3344

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], count, xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStairsV__Ljava_lang_String_2_3FIDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint count, jdouble xscale, jdouble xstart, jlong spec) {

//@line:3352

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], count, xscale, xstart, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStairsV__Ljava_lang_String_2_3DI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint count) {

//@line:3388

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStairsV__Ljava_lang_String_2_3DID(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint count, jdouble xscale) {

//@line:3396

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], count, xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStairsV__Ljava_lang_String_2_3DIDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint count, jdouble xscale, jdouble xstart) {

//@line:3404

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], count, xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStairsV__Ljava_lang_String_2_3DIDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint count, jdouble xscale, jdouble xstart, jlong spec) {

//@line:3412

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], count, xscale, xstart, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStairs__Ljava_lang_String_2_3S_3S(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys) {

//@line:3436

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &xs[0], &ys[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStairs__Ljava_lang_String_2_3S_3SJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jlong spec) {

//@line:3446

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &xs[0], &ys[0], LEN(xs), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStairs__Ljava_lang_String_2_3I_3I(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys) {

//@line:3470

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &xs[0], &ys[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStairs__Ljava_lang_String_2_3I_3IJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jlong spec) {

//@line:3480

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &xs[0], &ys[0], LEN(xs), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStairs__Ljava_lang_String_2_3J_3J(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys) {

//@line:3504

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &xs[0], &ys[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStairs__Ljava_lang_String_2_3J_3JJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jlong spec) {

//@line:3514

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &xs[0], &ys[0], LEN(xs), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStairs__Ljava_lang_String_2_3F_3F(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys) {

//@line:3538

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &xs[0], &ys[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStairs__Ljava_lang_String_2_3F_3FJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jlong spec) {

//@line:3548

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &xs[0], &ys[0], LEN(xs), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStairs__Ljava_lang_String_2_3D_3D(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys) {

//@line:3572

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &xs[0], &ys[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStairs__Ljava_lang_String_2_3D_3DJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jlong spec) {

//@line:3582

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &xs[0], &ys[0], LEN(xs), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStairsV__Ljava_lang_String_2_3S_3SI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jint count) {

//@line:3606

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &xs[0], &ys[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStairsV__Ljava_lang_String_2_3S_3SIJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jint count, jlong spec) {

//@line:3616

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &xs[0], &ys[0], count, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStairsV__Ljava_lang_String_2_3I_3II(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jint count) {

//@line:3640

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &xs[0], &ys[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStairsV__Ljava_lang_String_2_3I_3IIJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jint count, jlong spec) {

//@line:3650

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &xs[0], &ys[0], count, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStairsV__Ljava_lang_String_2_3J_3JI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jint count) {

//@line:3674

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &xs[0], &ys[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStairsV__Ljava_lang_String_2_3J_3JIJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jint count, jlong spec) {

//@line:3684

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &xs[0], &ys[0], count, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStairsV__Ljava_lang_String_2_3F_3FI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jint count) {

//@line:3708

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &xs[0], &ys[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStairsV__Ljava_lang_String_2_3F_3FIJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jint count, jlong spec) {

//@line:3718

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &xs[0], &ys[0], count, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStairsV__Ljava_lang_String_2_3D_3DI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jint count) {

//@line:3742

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &xs[0], &ys[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStairsV__Ljava_lang_String_2_3D_3DIJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jint count, jlong spec) {

//@line:3752

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &xs[0], &ys[0], count, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3S(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values) {

//@line:3799

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3SD(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jdouble yRef) {

//@line:3807

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], LEN(values), yRef);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3SDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jdouble yRef, jdouble xscale) {

//@line:3815

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], LEN(values), yRef, xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3SDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jdouble yRef, jdouble xscale, jdouble xstart) {

//@line:3823

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], LEN(values), yRef, xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3SDDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jdouble yRef, jdouble xscale, jdouble xstart, jlong spec) {

//@line:3831

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], LEN(values), yRef, xscale, xstart, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3I(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values) {

//@line:3874

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3ID(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jdouble yRef) {

//@line:3882

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], LEN(values), yRef);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3IDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jdouble yRef, jdouble xscale) {

//@line:3890

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], LEN(values), yRef, xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3IDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jdouble yRef, jdouble xscale, jdouble xstart) {

//@line:3898

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], LEN(values), yRef, xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3IDDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jdouble yRef, jdouble xscale, jdouble xstart, jlong spec) {

//@line:3906

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], LEN(values), yRef, xscale, xstart, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3J(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values) {

//@line:3949

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3JD(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jdouble yRef) {

//@line:3957

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], LEN(values), yRef);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3JDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jdouble yRef, jdouble xscale) {

//@line:3965

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], LEN(values), yRef, xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3JDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jdouble yRef, jdouble xscale, jdouble xstart) {

//@line:3973

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], LEN(values), yRef, xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3JDDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jdouble yRef, jdouble xscale, jdouble xstart, jlong spec) {

//@line:3981

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], LEN(values), yRef, xscale, xstart, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3F(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values) {

//@line:4024

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3FD(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jdouble yRef) {

//@line:4032

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], LEN(values), yRef);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3FDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jdouble yRef, jdouble xscale) {

//@line:4040

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], LEN(values), yRef, xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3FDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jdouble yRef, jdouble xscale, jdouble xstart) {

//@line:4048

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], LEN(values), yRef, xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3FDDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jdouble yRef, jdouble xscale, jdouble xstart, jlong spec) {

//@line:4056

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], LEN(values), yRef, xscale, xstart, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3D(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values) {

//@line:4099

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3DD(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jdouble yRef) {

//@line:4107

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], LEN(values), yRef);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3DDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jdouble yRef, jdouble xscale) {

//@line:4115

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], LEN(values), yRef, xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3DDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jdouble yRef, jdouble xscale, jdouble xstart) {

//@line:4123

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], LEN(values), yRef, xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3DDDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jdouble yRef, jdouble xscale, jdouble xstart, jlong spec) {

//@line:4131

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], LEN(values), yRef, xscale, xstart, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3SI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint count) {

//@line:4174

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3SID(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint count, jdouble yRef) {

//@line:4182

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], count, yRef);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3SIDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint count, jdouble yRef, jdouble xscale) {

//@line:4190

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], count, yRef, xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3SIDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint count, jdouble yRef, jdouble xscale, jdouble xstart) {

//@line:4198

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], count, yRef, xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3SIDDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint count, jdouble yRef, jdouble xscale, jdouble xstart, jlong spec) {

//@line:4206

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], count, yRef, xscale, xstart, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3II(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint count) {

//@line:4249

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3IID(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint count, jdouble yRef) {

//@line:4257

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], count, yRef);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3IIDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint count, jdouble yRef, jdouble xscale) {

//@line:4265

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], count, yRef, xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3IIDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint count, jdouble yRef, jdouble xscale, jdouble xstart) {

//@line:4273

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], count, yRef, xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3IIDDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint count, jdouble yRef, jdouble xscale, jdouble xstart, jlong spec) {

//@line:4281

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], count, yRef, xscale, xstart, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3JI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint count) {

//@line:4324

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3JID(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint count, jdouble yRef) {

//@line:4332

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], count, yRef);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3JIDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint count, jdouble yRef, jdouble xscale) {

//@line:4340

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], count, yRef, xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3JIDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint count, jdouble yRef, jdouble xscale, jdouble xstart) {

//@line:4348

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], count, yRef, xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3JIDDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint count, jdouble yRef, jdouble xscale, jdouble xstart, jlong spec) {

//@line:4356

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], count, yRef, xscale, xstart, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3FI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint count) {

//@line:4399

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3FID(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint count, jdouble yRef) {

//@line:4407

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], count, yRef);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3FIDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint count, jdouble yRef, jdouble xscale) {

//@line:4415

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], count, yRef, xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3FIDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint count, jdouble yRef, jdouble xscale, jdouble xstart) {

//@line:4423

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], count, yRef, xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3FIDDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint count, jdouble yRef, jdouble xscale, jdouble xstart, jlong spec) {

//@line:4431

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], count, yRef, xscale, xstart, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3DI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint count) {

//@line:4474

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3DID(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint count, jdouble yRef) {

//@line:4482

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], count, yRef);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3DIDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint count, jdouble yRef, jdouble xscale) {

//@line:4490

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], count, yRef, xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3DIDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint count, jdouble yRef, jdouble xscale, jdouble xstart) {

//@line:4498

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], count, yRef, xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3DIDDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint count, jdouble yRef, jdouble xscale, jdouble xstart, jlong spec) {

//@line:4506

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], count, yRef, xscale, xstart, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3S_3S(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys) {

//@line:4537

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3S_3SD(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jdouble yRef) {

//@line:4547

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys[0], LEN(xs), yRef);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3S_3SDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jdouble yRef, jlong spec) {

//@line:4557

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys[0], LEN(xs), yRef, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3I_3I(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys) {

//@line:4588

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3I_3ID(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jdouble yRef) {

//@line:4598

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys[0], LEN(xs), yRef);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3I_3IDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jdouble yRef, jlong spec) {

//@line:4608

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys[0], LEN(xs), yRef, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3J_3J(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys) {

//@line:4639

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3J_3JD(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jdouble yRef) {

//@line:4649

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys[0], LEN(xs), yRef);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3J_3JDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jdouble yRef, jlong spec) {

//@line:4659

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys[0], LEN(xs), yRef, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3F_3F(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys) {

//@line:4690

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3F_3FD(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jdouble yRef) {

//@line:4700

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys[0], LEN(xs), yRef);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3F_3FDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jdouble yRef, jlong spec) {

//@line:4710

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys[0], LEN(xs), yRef, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3D_3D(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys) {

//@line:4741

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3D_3DD(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jdouble yRef) {

//@line:4751

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys[0], LEN(xs), yRef);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3D_3DDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jdouble yRef, jlong spec) {

//@line:4761

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys[0], LEN(xs), yRef, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3S_3SI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jint count) {

//@line:4792

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3S_3SID(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jint count, jdouble yRef) {

//@line:4802

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys[0], count, yRef);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3S_3SIDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jint count, jdouble yRef, jlong spec) {

//@line:4812

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys[0], count, yRef, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3I_3II(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jint count) {

//@line:4843

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3I_3IID(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jint count, jdouble yRef) {

//@line:4853

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys[0], count, yRef);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3I_3IIDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jint count, jdouble yRef, jlong spec) {

//@line:4863

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys[0], count, yRef, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3J_3JI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jint count) {

//@line:4894

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3J_3JID(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jint count, jdouble yRef) {

//@line:4904

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys[0], count, yRef);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3J_3JIDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jint count, jdouble yRef, jlong spec) {

//@line:4914

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys[0], count, yRef, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3F_3FI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jint count) {

//@line:4945

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3F_3FID(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jint count, jdouble yRef) {

//@line:4955

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys[0], count, yRef);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3F_3FIDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jint count, jdouble yRef, jlong spec) {

//@line:4965

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys[0], count, yRef, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3D_3DI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jint count) {

//@line:4996

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3D_3DID(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jint count, jdouble yRef) {

//@line:5006

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys[0], count, yRef);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3D_3DIDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jint count, jdouble yRef, jlong spec) {

//@line:5016

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys[0], count, yRef, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3S_3S_3S(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys1, jshortArray obj_ys2) {

//@line:5042

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys1 = obj_ys1 == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys1, JNI_FALSE);
        auto ys2 = obj_ys2 == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys2, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys1[0], &ys2[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys1 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys1, ys1, JNI_FALSE);
        if (ys2 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys2, ys2, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3S_3S_3SJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys1, jshortArray obj_ys2, jlong spec) {

//@line:5054

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys1 = obj_ys1 == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys1, JNI_FALSE);
        auto ys2 = obj_ys2 == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys2, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys1[0], &ys2[0], LEN(xs), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys1 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys1, ys1, JNI_FALSE);
        if (ys2 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys2, ys2, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3I_3I_3I(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys1, jintArray obj_ys2) {

//@line:5080

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys1 = obj_ys1 == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys1, JNI_FALSE);
        auto ys2 = obj_ys2 == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys2, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys1[0], &ys2[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys1 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys1, ys1, JNI_FALSE);
        if (ys2 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys2, ys2, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3I_3I_3IJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys1, jintArray obj_ys2, jlong spec) {

//@line:5092

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys1 = obj_ys1 == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys1, JNI_FALSE);
        auto ys2 = obj_ys2 == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys2, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys1[0], &ys2[0], LEN(xs), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys1 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys1, ys1, JNI_FALSE);
        if (ys2 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys2, ys2, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3J_3J_3J(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys1, jlongArray obj_ys2) {

//@line:5118

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys1 = obj_ys1 == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys1, JNI_FALSE);
        auto ys2 = obj_ys2 == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys2, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys1[0], &ys2[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys1 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys1, ys1, JNI_FALSE);
        if (ys2 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys2, ys2, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3J_3J_3JJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys1, jlongArray obj_ys2, jlong spec) {

//@line:5130

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys1 = obj_ys1 == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys1, JNI_FALSE);
        auto ys2 = obj_ys2 == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys2, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys1[0], &ys2[0], LEN(xs), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys1 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys1, ys1, JNI_FALSE);
        if (ys2 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys2, ys2, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3F_3F_3F(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys1, jfloatArray obj_ys2) {

//@line:5156

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys1 = obj_ys1 == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys1, JNI_FALSE);
        auto ys2 = obj_ys2 == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys2, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys1[0], &ys2[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys1 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys1, ys1, JNI_FALSE);
        if (ys2 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys2, ys2, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3F_3F_3FJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys1, jfloatArray obj_ys2, jlong spec) {

//@line:5168

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys1 = obj_ys1 == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys1, JNI_FALSE);
        auto ys2 = obj_ys2 == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys2, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys1[0], &ys2[0], LEN(xs), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys1 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys1, ys1, JNI_FALSE);
        if (ys2 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys2, ys2, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3D_3D_3D(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys1, jdoubleArray obj_ys2) {

//@line:5194

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys1 = obj_ys1 == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys1, JNI_FALSE);
        auto ys2 = obj_ys2 == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys2, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys1[0], &ys2[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys1 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys1, ys1, JNI_FALSE);
        if (ys2 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys2, ys2, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3D_3D_3DJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys1, jdoubleArray obj_ys2, jlong spec) {

//@line:5206

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys1 = obj_ys1 == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys1, JNI_FALSE);
        auto ys2 = obj_ys2 == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys2, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys1[0], &ys2[0], LEN(xs), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys1 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys1, ys1, JNI_FALSE);
        if (ys2 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys2, ys2, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3S_3S_3SI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys1, jshortArray obj_ys2, jint count) {

//@line:5232

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys1 = obj_ys1 == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys1, JNI_FALSE);
        auto ys2 = obj_ys2 == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys2, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys1[0], &ys2[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys1 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys1, ys1, JNI_FALSE);
        if (ys2 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys2, ys2, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3S_3S_3SIJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys1, jshortArray obj_ys2, jint count, jlong spec) {

//@line:5244

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys1 = obj_ys1 == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys1, JNI_FALSE);
        auto ys2 = obj_ys2 == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys2, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys1[0], &ys2[0], count, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys1 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys1, ys1, JNI_FALSE);
        if (ys2 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys2, ys2, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3I_3I_3II(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys1, jintArray obj_ys2, jint count) {

//@line:5270

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys1 = obj_ys1 == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys1, JNI_FALSE);
        auto ys2 = obj_ys2 == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys2, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys1[0], &ys2[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys1 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys1, ys1, JNI_FALSE);
        if (ys2 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys2, ys2, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3I_3I_3IIJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys1, jintArray obj_ys2, jint count, jlong spec) {

//@line:5282

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys1 = obj_ys1 == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys1, JNI_FALSE);
        auto ys2 = obj_ys2 == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys2, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys1[0], &ys2[0], count, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys1 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys1, ys1, JNI_FALSE);
        if (ys2 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys2, ys2, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3J_3J_3JI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys1, jlongArray obj_ys2, jint count) {

//@line:5308

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys1 = obj_ys1 == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys1, JNI_FALSE);
        auto ys2 = obj_ys2 == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys2, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys1[0], &ys2[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys1 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys1, ys1, JNI_FALSE);
        if (ys2 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys2, ys2, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3J_3J_3JIJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys1, jlongArray obj_ys2, jint count, jlong spec) {

//@line:5320

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys1 = obj_ys1 == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys1, JNI_FALSE);
        auto ys2 = obj_ys2 == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys2, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys1[0], &ys2[0], count, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys1 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys1, ys1, JNI_FALSE);
        if (ys2 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys2, ys2, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3F_3F_3FI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys1, jfloatArray obj_ys2, jint count) {

//@line:5346

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys1 = obj_ys1 == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys1, JNI_FALSE);
        auto ys2 = obj_ys2 == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys2, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys1[0], &ys2[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys1 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys1, ys1, JNI_FALSE);
        if (ys2 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys2, ys2, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3F_3F_3FIJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys1, jfloatArray obj_ys2, jint count, jlong spec) {

//@line:5358

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys1 = obj_ys1 == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys1, JNI_FALSE);
        auto ys2 = obj_ys2 == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys2, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys1[0], &ys2[0], count, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys1 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys1, ys1, JNI_FALSE);
        if (ys2 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys2, ys2, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3D_3D_3DI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys1, jdoubleArray obj_ys2, jint count) {

//@line:5384

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys1 = obj_ys1 == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys1, JNI_FALSE);
        auto ys2 = obj_ys2 == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys2, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys1[0], &ys2[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys1 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys1, ys1, JNI_FALSE);
        if (ys2 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys2, ys2, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3D_3D_3DIJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys1, jdoubleArray obj_ys2, jint count, jlong spec) {

//@line:5396

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys1 = obj_ys1 == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys1, JNI_FALSE);
        auto ys2 = obj_ys2 == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys2, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys1[0], &ys2[0], count, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys1 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys1, ys1, JNI_FALSE);
        if (ys2 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys2, ys2, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBars__Ljava_lang_String_2_3S(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values) {

//@line:5438

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBars__Ljava_lang_String_2_3SD(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jdouble barSize) {

//@line:5446

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], LEN(values), barSize);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBars__Ljava_lang_String_2_3SDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jdouble barSize, jdouble shift) {

//@line:5454

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], LEN(values), barSize, shift);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBars__Ljava_lang_String_2_3SDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jdouble barSize, jdouble shift, jlong spec) {

//@line:5462

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], LEN(values), barSize, shift, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBars__Ljava_lang_String_2_3I(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values) {

//@line:5498

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBars__Ljava_lang_String_2_3ID(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jdouble barSize) {

//@line:5506

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], LEN(values), barSize);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBars__Ljava_lang_String_2_3IDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jdouble barSize, jdouble shift) {

//@line:5514

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], LEN(values), barSize, shift);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBars__Ljava_lang_String_2_3IDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jdouble barSize, jdouble shift, jlong spec) {

//@line:5522

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], LEN(values), barSize, shift, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBars__Ljava_lang_String_2_3J(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values) {

//@line:5558

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBars__Ljava_lang_String_2_3JD(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jdouble barSize) {

//@line:5566

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], LEN(values), barSize);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBars__Ljava_lang_String_2_3JDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jdouble barSize, jdouble shift) {

//@line:5574

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], LEN(values), barSize, shift);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBars__Ljava_lang_String_2_3JDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jdouble barSize, jdouble shift, jlong spec) {

//@line:5582

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], LEN(values), barSize, shift, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBars__Ljava_lang_String_2_3F(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values) {

//@line:5618

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBars__Ljava_lang_String_2_3FD(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jdouble barSize) {

//@line:5626

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], LEN(values), barSize);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBars__Ljava_lang_String_2_3FDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jdouble barSize, jdouble shift) {

//@line:5634

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], LEN(values), barSize, shift);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBars__Ljava_lang_String_2_3FDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jdouble barSize, jdouble shift, jlong spec) {

//@line:5642

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], LEN(values), barSize, shift, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBars__Ljava_lang_String_2_3D(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values) {

//@line:5678

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBars__Ljava_lang_String_2_3DD(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jdouble barSize) {

//@line:5686

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], LEN(values), barSize);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBars__Ljava_lang_String_2_3DDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jdouble barSize, jdouble shift) {

//@line:5694

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], LEN(values), barSize, shift);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBars__Ljava_lang_String_2_3DDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jdouble barSize, jdouble shift, jlong spec) {

//@line:5702

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], LEN(values), barSize, shift, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3SI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint count) {

//@line:5738

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3SID(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint count, jdouble barSize) {

//@line:5746

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], count, barSize);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3SIDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint count, jdouble barSize, jdouble shift) {

//@line:5754

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], count, barSize, shift);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3SIDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint count, jdouble barSize, jdouble shift, jlong spec) {

//@line:5762

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], count, barSize, shift, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3II(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint count) {

//@line:5798

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3IID(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint count, jdouble barSize) {

//@line:5806

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], count, barSize);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3IIDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint count, jdouble barSize, jdouble shift) {

//@line:5814

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], count, barSize, shift);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3IIDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint count, jdouble barSize, jdouble shift, jlong spec) {

//@line:5822

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], count, barSize, shift, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3JI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint count) {

//@line:5858

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3JID(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint count, jdouble barSize) {

//@line:5866

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], count, barSize);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3JIDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint count, jdouble barSize, jdouble shift) {

//@line:5874

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], count, barSize, shift);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3JIDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint count, jdouble barSize, jdouble shift, jlong spec) {

//@line:5882

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], count, barSize, shift, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3FI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint count) {

//@line:5918

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3FID(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint count, jdouble barSize) {

//@line:5926

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], count, barSize);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3FIDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint count, jdouble barSize, jdouble shift) {

//@line:5934

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], count, barSize, shift);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3FIDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint count, jdouble barSize, jdouble shift, jlong spec) {

//@line:5942

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], count, barSize, shift, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3DI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint count) {

//@line:5978

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3DID(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint count, jdouble barSize) {

//@line:5986

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], count, barSize);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3DIDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint count, jdouble barSize, jdouble shift) {

//@line:5994

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], count, barSize, shift);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3DIDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint count, jdouble barSize, jdouble shift, jlong spec) {

//@line:6002

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], count, barSize, shift, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBars__Ljava_lang_String_2_3S_3S(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys) {

//@line:6026

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotBars(labelId, &xs[0], &ys[0], LEN(xs), 0.67);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBars__Ljava_lang_String_2_3S_3SJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jlong spec) {

//@line:6036

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotBars(labelId, &xs[0], &ys[0], LEN(xs), 0.67, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBars__Ljava_lang_String_2_3I_3I(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys) {

//@line:6060

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotBars(labelId, &xs[0], &ys[0], LEN(xs), 0.67);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBars__Ljava_lang_String_2_3I_3IJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jlong spec) {

//@line:6070

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotBars(labelId, &xs[0], &ys[0], LEN(xs), 0.67, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBars__Ljava_lang_String_2_3J_3J(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys) {

//@line:6094

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotBars(labelId, &xs[0], &ys[0], LEN(xs), 0.67);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBars__Ljava_lang_String_2_3J_3JJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jlong spec) {

//@line:6104

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotBars(labelId, &xs[0], &ys[0], LEN(xs), 0.67, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBars__Ljava_lang_String_2_3F_3F(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys) {

//@line:6128

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotBars(labelId, &xs[0], &ys[0], LEN(xs), 0.67);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBars__Ljava_lang_String_2_3F_3FJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jlong spec) {

//@line:6138

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotBars(labelId, &xs[0], &ys[0], LEN(xs), 0.67, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBars__Ljava_lang_String_2_3D_3D(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys) {

//@line:6162

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotBars(labelId, &xs[0], &ys[0], LEN(xs), 0.67);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBars__Ljava_lang_String_2_3D_3DJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jlong spec) {

//@line:6172

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotBars(labelId, &xs[0], &ys[0], LEN(xs), 0.67, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3S_3SD(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jdouble barSize) {

//@line:6196

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotBars(labelId, &xs[0], &ys[0], LEN(xs), barSize);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3S_3SDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jdouble barSize, jlong spec) {

//@line:6206

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotBars(labelId, &xs[0], &ys[0], LEN(xs), barSize, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3I_3ID(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jdouble barSize) {

//@line:6230

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotBars(labelId, &xs[0], &ys[0], LEN(xs), barSize);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3I_3IDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jdouble barSize, jlong spec) {

//@line:6240

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotBars(labelId, &xs[0], &ys[0], LEN(xs), barSize, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3J_3JD(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jdouble barSize) {

//@line:6264

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotBars(labelId, &xs[0], &ys[0], LEN(xs), barSize);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3J_3JDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jdouble barSize, jlong spec) {

//@line:6274

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotBars(labelId, &xs[0], &ys[0], LEN(xs), barSize, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3F_3FD(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jdouble barSize) {

//@line:6298

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotBars(labelId, &xs[0], &ys[0], LEN(xs), barSize);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3F_3FDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jdouble barSize, jlong spec) {

//@line:6308

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotBars(labelId, &xs[0], &ys[0], LEN(xs), barSize, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3D_3DD(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jdouble barSize) {

//@line:6332

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotBars(labelId, &xs[0], &ys[0], LEN(xs), barSize);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3D_3DDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jdouble barSize, jlong spec) {

//@line:6342

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotBars(labelId, &xs[0], &ys[0], LEN(xs), barSize, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3S_3SID(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jint count, jdouble barSize) {

//@line:6366

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotBars(labelId, &xs[0], &ys[0], count, barSize);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3S_3SIDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jint count, jdouble barSize, jlong spec) {

//@line:6376

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotBars(labelId, &xs[0], &ys[0], count, barSize, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3I_3IID(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jint count, jdouble barSize) {

//@line:6400

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotBars(labelId, &xs[0], &ys[0], count, barSize);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3I_3IIDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jint count, jdouble barSize, jlong spec) {

//@line:6410

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotBars(labelId, &xs[0], &ys[0], count, barSize, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3J_3JID(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jint count, jdouble barSize) {

//@line:6434

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotBars(labelId, &xs[0], &ys[0], count, barSize);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3J_3JIDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jint count, jdouble barSize, jlong spec) {

//@line:6444

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotBars(labelId, &xs[0], &ys[0], count, barSize, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3F_3FID(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jint count, jdouble barSize) {

//@line:6468

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotBars(labelId, &xs[0], &ys[0], count, barSize);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3F_3FIDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jint count, jdouble barSize, jlong spec) {

//@line:6478

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotBars(labelId, &xs[0], &ys[0], count, barSize, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3D_3DID(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jint count, jdouble barSize) {

//@line:6502

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotBars(labelId, &xs[0], &ys[0], count, barSize);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3D_3DIDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jint count, jdouble barSize, jlong spec) {

//@line:6512

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotBars(labelId, &xs[0], &ys[0], count, barSize, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarGroups___3Ljava_lang_String_2I_3SI(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jshortArray obj_values, jint groupCount) {

//@line:6550

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], LEN(values), groupCount);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarGroups___3Ljava_lang_String_2I_3SID(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jshortArray obj_values, jint groupCount, jdouble groupSize) {

//@line:6566

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], LEN(values), groupCount, groupSize);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarGroups___3Ljava_lang_String_2I_3SIDD(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jshortArray obj_values, jint groupCount, jdouble groupSize, jdouble shift) {

//@line:6582

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], LEN(values), groupCount, groupSize, shift);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarGroups___3Ljava_lang_String_2I_3SIDDJ(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jshortArray obj_values, jint groupCount, jdouble groupSize, jdouble shift, jlong spec) {

//@line:6598

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], LEN(values), groupCount, groupSize, shift, *reinterpret_cast<ImPlotSpec*>(spec));
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarGroups___3Ljava_lang_String_2I_3II(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jintArray obj_values, jint groupCount) {

//@line:6642

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], LEN(values), groupCount);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarGroups___3Ljava_lang_String_2I_3IID(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jintArray obj_values, jint groupCount, jdouble groupSize) {

//@line:6658

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], LEN(values), groupCount, groupSize);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarGroups___3Ljava_lang_String_2I_3IIDD(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jintArray obj_values, jint groupCount, jdouble groupSize, jdouble shift) {

//@line:6674

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], LEN(values), groupCount, groupSize, shift);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarGroups___3Ljava_lang_String_2I_3IIDDJ(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jintArray obj_values, jint groupCount, jdouble groupSize, jdouble shift, jlong spec) {

//@line:6690

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], LEN(values), groupCount, groupSize, shift, *reinterpret_cast<ImPlotSpec*>(spec));
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarGroups___3Ljava_lang_String_2I_3JI(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jlongArray obj_values, jint groupCount) {

//@line:6734

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], LEN(values), groupCount);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarGroups___3Ljava_lang_String_2I_3JID(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jlongArray obj_values, jint groupCount, jdouble groupSize) {

//@line:6750

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], LEN(values), groupCount, groupSize);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarGroups___3Ljava_lang_String_2I_3JIDD(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jlongArray obj_values, jint groupCount, jdouble groupSize, jdouble shift) {

//@line:6766

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], LEN(values), groupCount, groupSize, shift);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarGroups___3Ljava_lang_String_2I_3JIDDJ(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jlongArray obj_values, jint groupCount, jdouble groupSize, jdouble shift, jlong spec) {

//@line:6782

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], LEN(values), groupCount, groupSize, shift, *reinterpret_cast<ImPlotSpec*>(spec));
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarGroups___3Ljava_lang_String_2I_3FI(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jfloatArray obj_values, jint groupCount) {

//@line:6826

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], LEN(values), groupCount);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarGroups___3Ljava_lang_String_2I_3FID(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jfloatArray obj_values, jint groupCount, jdouble groupSize) {

//@line:6842

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], LEN(values), groupCount, groupSize);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarGroups___3Ljava_lang_String_2I_3FIDD(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jfloatArray obj_values, jint groupCount, jdouble groupSize, jdouble shift) {

//@line:6858

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], LEN(values), groupCount, groupSize, shift);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarGroups___3Ljava_lang_String_2I_3FIDDJ(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jfloatArray obj_values, jint groupCount, jdouble groupSize, jdouble shift, jlong spec) {

//@line:6874

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], LEN(values), groupCount, groupSize, shift, *reinterpret_cast<ImPlotSpec*>(spec));
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarGroups___3Ljava_lang_String_2I_3DI(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jdoubleArray obj_values, jint groupCount) {

//@line:6918

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], LEN(values), groupCount);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarGroups___3Ljava_lang_String_2I_3DID(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jdoubleArray obj_values, jint groupCount, jdouble groupSize) {

//@line:6934

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], LEN(values), groupCount, groupSize);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarGroups___3Ljava_lang_String_2I_3DIDD(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jdoubleArray obj_values, jint groupCount, jdouble groupSize, jdouble shift) {

//@line:6950

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], LEN(values), groupCount, groupSize, shift);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarGroups___3Ljava_lang_String_2I_3DIDDJ(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jdoubleArray obj_values, jint groupCount, jdouble groupSize, jdouble shift, jlong spec) {

//@line:6966

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], LEN(values), groupCount, groupSize, shift, *reinterpret_cast<ImPlotSpec*>(spec));
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarGroupsV___3Ljava_lang_String_2I_3SII(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jshortArray obj_values, jint itemCount, jint groupCount) {

//@line:7010

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], itemCount, groupCount);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarGroupsV___3Ljava_lang_String_2I_3SIID(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jshortArray obj_values, jint itemCount, jint groupCount, jdouble groupSize) {

//@line:7026

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], itemCount, groupCount, groupSize);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarGroupsV___3Ljava_lang_String_2I_3SIIDD(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jshortArray obj_values, jint itemCount, jint groupCount, jdouble groupSize, jdouble shift) {

//@line:7042

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], itemCount, groupCount, groupSize, shift);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarGroupsV___3Ljava_lang_String_2I_3SIIDDJ(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jshortArray obj_values, jint itemCount, jint groupCount, jdouble groupSize, jdouble shift, jlong spec) {

//@line:7058

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], itemCount, groupCount, groupSize, shift, *reinterpret_cast<ImPlotSpec*>(spec));
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarGroupsV___3Ljava_lang_String_2I_3III(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jintArray obj_values, jint itemCount, jint groupCount) {

//@line:7102

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], itemCount, groupCount);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarGroupsV___3Ljava_lang_String_2I_3IIID(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jintArray obj_values, jint itemCount, jint groupCount, jdouble groupSize) {

//@line:7118

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], itemCount, groupCount, groupSize);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarGroupsV___3Ljava_lang_String_2I_3IIIDD(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jintArray obj_values, jint itemCount, jint groupCount, jdouble groupSize, jdouble shift) {

//@line:7134

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], itemCount, groupCount, groupSize, shift);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarGroupsV___3Ljava_lang_String_2I_3IIIDDJ(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jintArray obj_values, jint itemCount, jint groupCount, jdouble groupSize, jdouble shift, jlong spec) {

//@line:7150

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], itemCount, groupCount, groupSize, shift, *reinterpret_cast<ImPlotSpec*>(spec));
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarGroupsV___3Ljava_lang_String_2I_3JII(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jlongArray obj_values, jint itemCount, jint groupCount) {

//@line:7194

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], itemCount, groupCount);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarGroupsV___3Ljava_lang_String_2I_3JIID(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jlongArray obj_values, jint itemCount, jint groupCount, jdouble groupSize) {

//@line:7210

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], itemCount, groupCount, groupSize);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarGroupsV___3Ljava_lang_String_2I_3JIIDD(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jlongArray obj_values, jint itemCount, jint groupCount, jdouble groupSize, jdouble shift) {

//@line:7226

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], itemCount, groupCount, groupSize, shift);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarGroupsV___3Ljava_lang_String_2I_3JIIDDJ(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jlongArray obj_values, jint itemCount, jint groupCount, jdouble groupSize, jdouble shift, jlong spec) {

//@line:7242

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], itemCount, groupCount, groupSize, shift, *reinterpret_cast<ImPlotSpec*>(spec));
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarGroupsV___3Ljava_lang_String_2I_3FII(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jfloatArray obj_values, jint itemCount, jint groupCount) {

//@line:7286

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], itemCount, groupCount);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarGroupsV___3Ljava_lang_String_2I_3FIID(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jfloatArray obj_values, jint itemCount, jint groupCount, jdouble groupSize) {

//@line:7302

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], itemCount, groupCount, groupSize);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarGroupsV___3Ljava_lang_String_2I_3FIIDD(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jfloatArray obj_values, jint itemCount, jint groupCount, jdouble groupSize, jdouble shift) {

//@line:7318

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], itemCount, groupCount, groupSize, shift);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarGroupsV___3Ljava_lang_String_2I_3FIIDDJ(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jfloatArray obj_values, jint itemCount, jint groupCount, jdouble groupSize, jdouble shift, jlong spec) {

//@line:7334

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], itemCount, groupCount, groupSize, shift, *reinterpret_cast<ImPlotSpec*>(spec));
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarGroupsV___3Ljava_lang_String_2I_3DII(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jdoubleArray obj_values, jint itemCount, jint groupCount) {

//@line:7378

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], itemCount, groupCount);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarGroupsV___3Ljava_lang_String_2I_3DIID(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jdoubleArray obj_values, jint itemCount, jint groupCount, jdouble groupSize) {

//@line:7394

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], itemCount, groupCount, groupSize);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarGroupsV___3Ljava_lang_String_2I_3DIIDD(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jdoubleArray obj_values, jint itemCount, jint groupCount, jdouble groupSize, jdouble shift) {

//@line:7410

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], itemCount, groupCount, groupSize, shift);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBarGroupsV___3Ljava_lang_String_2I_3DIIDDJ(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jdoubleArray obj_values, jint itemCount, jint groupCount, jdouble groupSize, jdouble shift, jlong spec) {

//@line:7426

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], itemCount, groupCount, groupSize, shift, *reinterpret_cast<ImPlotSpec*>(spec));
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotErrorBars__Ljava_lang_String_2_3S_3S_3S(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jshortArray obj_err) {

//@line:7456

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto err = obj_err == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_err, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &err[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (err != NULL) env->ReleasePrimitiveArrayCritical(obj_err, err, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotErrorBars__Ljava_lang_String_2_3S_3S_3SJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jshortArray obj_err, jlong spec) {

//@line:7468

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto err = obj_err == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_err, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &err[0], LEN(xs), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (err != NULL) env->ReleasePrimitiveArrayCritical(obj_err, err, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotErrorBars__Ljava_lang_String_2_3I_3I_3I(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jintArray obj_err) {

//@line:7494

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto err = obj_err == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_err, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &err[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (err != NULL) env->ReleasePrimitiveArrayCritical(obj_err, err, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotErrorBars__Ljava_lang_String_2_3I_3I_3IJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jintArray obj_err, jlong spec) {

//@line:7506

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto err = obj_err == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_err, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &err[0], LEN(xs), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (err != NULL) env->ReleasePrimitiveArrayCritical(obj_err, err, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotErrorBars__Ljava_lang_String_2_3J_3J_3J(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jlongArray obj_err) {

//@line:7532

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto err = obj_err == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_err, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &err[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (err != NULL) env->ReleasePrimitiveArrayCritical(obj_err, err, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotErrorBars__Ljava_lang_String_2_3J_3J_3JJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jlongArray obj_err, jlong spec) {

//@line:7544

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto err = obj_err == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_err, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &err[0], LEN(xs), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (err != NULL) env->ReleasePrimitiveArrayCritical(obj_err, err, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotErrorBars__Ljava_lang_String_2_3F_3F_3F(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jfloatArray obj_err) {

//@line:7570

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto err = obj_err == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_err, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &err[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (err != NULL) env->ReleasePrimitiveArrayCritical(obj_err, err, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotErrorBars__Ljava_lang_String_2_3F_3F_3FJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jfloatArray obj_err, jlong spec) {

//@line:7582

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto err = obj_err == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_err, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &err[0], LEN(xs), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (err != NULL) env->ReleasePrimitiveArrayCritical(obj_err, err, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotErrorBars__Ljava_lang_String_2_3D_3D_3D(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jdoubleArray obj_err) {

//@line:7608

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto err = obj_err == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_err, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &err[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (err != NULL) env->ReleasePrimitiveArrayCritical(obj_err, err, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotErrorBars__Ljava_lang_String_2_3D_3D_3DJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jdoubleArray obj_err, jlong spec) {

//@line:7620

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto err = obj_err == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_err, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &err[0], LEN(xs), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (err != NULL) env->ReleasePrimitiveArrayCritical(obj_err, err, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotErrorBarsV__Ljava_lang_String_2_3S_3S_3SI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jshortArray obj_err, jint count) {

//@line:7646

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto err = obj_err == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_err, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &err[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (err != NULL) env->ReleasePrimitiveArrayCritical(obj_err, err, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotErrorBarsV__Ljava_lang_String_2_3S_3S_3SIJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jshortArray obj_err, jint count, jlong spec) {

//@line:7658

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto err = obj_err == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_err, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &err[0], count, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (err != NULL) env->ReleasePrimitiveArrayCritical(obj_err, err, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotErrorBarsV__Ljava_lang_String_2_3I_3I_3II(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jintArray obj_err, jint count) {

//@line:7684

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto err = obj_err == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_err, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &err[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (err != NULL) env->ReleasePrimitiveArrayCritical(obj_err, err, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotErrorBarsV__Ljava_lang_String_2_3I_3I_3IIJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jintArray obj_err, jint count, jlong spec) {

//@line:7696

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto err = obj_err == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_err, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &err[0], count, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (err != NULL) env->ReleasePrimitiveArrayCritical(obj_err, err, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotErrorBarsV__Ljava_lang_String_2_3J_3J_3JI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jlongArray obj_err, jint count) {

//@line:7722

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto err = obj_err == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_err, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &err[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (err != NULL) env->ReleasePrimitiveArrayCritical(obj_err, err, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotErrorBarsV__Ljava_lang_String_2_3J_3J_3JIJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jlongArray obj_err, jint count, jlong spec) {

//@line:7734

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto err = obj_err == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_err, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &err[0], count, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (err != NULL) env->ReleasePrimitiveArrayCritical(obj_err, err, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotErrorBarsV__Ljava_lang_String_2_3F_3F_3FI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jfloatArray obj_err, jint count) {

//@line:7760

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto err = obj_err == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_err, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &err[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (err != NULL) env->ReleasePrimitiveArrayCritical(obj_err, err, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotErrorBarsV__Ljava_lang_String_2_3F_3F_3FIJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jfloatArray obj_err, jint count, jlong spec) {

//@line:7772

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto err = obj_err == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_err, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &err[0], count, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (err != NULL) env->ReleasePrimitiveArrayCritical(obj_err, err, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotErrorBarsV__Ljava_lang_String_2_3D_3D_3DI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jdoubleArray obj_err, jint count) {

//@line:7798

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto err = obj_err == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_err, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &err[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (err != NULL) env->ReleasePrimitiveArrayCritical(obj_err, err, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotErrorBarsV__Ljava_lang_String_2_3D_3D_3DIJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jdoubleArray obj_err, jint count, jlong spec) {

//@line:7810

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto err = obj_err == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_err, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &err[0], count, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (err != NULL) env->ReleasePrimitiveArrayCritical(obj_err, err, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotErrorBars__Ljava_lang_String_2_3S_3S_3S_3S(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jshortArray obj_neg, jshortArray obj_pos) {

//@line:7836

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto neg = obj_neg == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_neg, JNI_FALSE);
        auto pos = obj_pos == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_pos, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &neg[0], &pos[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (neg != NULL) env->ReleasePrimitiveArrayCritical(obj_neg, neg, JNI_FALSE);
        if (pos != NULL) env->ReleasePrimitiveArrayCritical(obj_pos, pos, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotErrorBars__Ljava_lang_String_2_3S_3S_3S_3SJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jshortArray obj_neg, jshortArray obj_pos, jlong spec) {

//@line:7850

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto neg = obj_neg == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_neg, JNI_FALSE);
        auto pos = obj_pos == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_pos, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &neg[0], &pos[0], LEN(xs), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (neg != NULL) env->ReleasePrimitiveArrayCritical(obj_neg, neg, JNI_FALSE);
        if (pos != NULL) env->ReleasePrimitiveArrayCritical(obj_pos, pos, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotErrorBars__Ljava_lang_String_2_3I_3I_3I_3I(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jintArray obj_neg, jintArray obj_pos) {

//@line:7878

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto neg = obj_neg == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_neg, JNI_FALSE);
        auto pos = obj_pos == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_pos, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &neg[0], &pos[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (neg != NULL) env->ReleasePrimitiveArrayCritical(obj_neg, neg, JNI_FALSE);
        if (pos != NULL) env->ReleasePrimitiveArrayCritical(obj_pos, pos, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotErrorBars__Ljava_lang_String_2_3I_3I_3I_3IJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jintArray obj_neg, jintArray obj_pos, jlong spec) {

//@line:7892

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto neg = obj_neg == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_neg, JNI_FALSE);
        auto pos = obj_pos == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_pos, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &neg[0], &pos[0], LEN(xs), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (neg != NULL) env->ReleasePrimitiveArrayCritical(obj_neg, neg, JNI_FALSE);
        if (pos != NULL) env->ReleasePrimitiveArrayCritical(obj_pos, pos, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotErrorBars__Ljava_lang_String_2_3J_3J_3J_3J(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jlongArray obj_neg, jlongArray obj_pos) {

//@line:7920

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto neg = obj_neg == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_neg, JNI_FALSE);
        auto pos = obj_pos == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_pos, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &neg[0], &pos[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (neg != NULL) env->ReleasePrimitiveArrayCritical(obj_neg, neg, JNI_FALSE);
        if (pos != NULL) env->ReleasePrimitiveArrayCritical(obj_pos, pos, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotErrorBars__Ljava_lang_String_2_3J_3J_3J_3JJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jlongArray obj_neg, jlongArray obj_pos, jlong spec) {

//@line:7934

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto neg = obj_neg == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_neg, JNI_FALSE);
        auto pos = obj_pos == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_pos, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &neg[0], &pos[0], LEN(xs), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (neg != NULL) env->ReleasePrimitiveArrayCritical(obj_neg, neg, JNI_FALSE);
        if (pos != NULL) env->ReleasePrimitiveArrayCritical(obj_pos, pos, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotErrorBars__Ljava_lang_String_2_3F_3F_3F_3F(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jfloatArray obj_neg, jfloatArray obj_pos) {

//@line:7962

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto neg = obj_neg == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_neg, JNI_FALSE);
        auto pos = obj_pos == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_pos, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &neg[0], &pos[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (neg != NULL) env->ReleasePrimitiveArrayCritical(obj_neg, neg, JNI_FALSE);
        if (pos != NULL) env->ReleasePrimitiveArrayCritical(obj_pos, pos, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotErrorBars__Ljava_lang_String_2_3F_3F_3F_3FJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jfloatArray obj_neg, jfloatArray obj_pos, jlong spec) {

//@line:7976

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto neg = obj_neg == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_neg, JNI_FALSE);
        auto pos = obj_pos == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_pos, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &neg[0], &pos[0], LEN(xs), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (neg != NULL) env->ReleasePrimitiveArrayCritical(obj_neg, neg, JNI_FALSE);
        if (pos != NULL) env->ReleasePrimitiveArrayCritical(obj_pos, pos, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotErrorBars__Ljava_lang_String_2_3D_3D_3D_3D(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jdoubleArray obj_neg, jdoubleArray obj_pos) {

//@line:8004

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto neg = obj_neg == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_neg, JNI_FALSE);
        auto pos = obj_pos == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_pos, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &neg[0], &pos[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (neg != NULL) env->ReleasePrimitiveArrayCritical(obj_neg, neg, JNI_FALSE);
        if (pos != NULL) env->ReleasePrimitiveArrayCritical(obj_pos, pos, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotErrorBars__Ljava_lang_String_2_3D_3D_3D_3DJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jdoubleArray obj_neg, jdoubleArray obj_pos, jlong spec) {

//@line:8018

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto neg = obj_neg == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_neg, JNI_FALSE);
        auto pos = obj_pos == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_pos, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &neg[0], &pos[0], LEN(xs), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (neg != NULL) env->ReleasePrimitiveArrayCritical(obj_neg, neg, JNI_FALSE);
        if (pos != NULL) env->ReleasePrimitiveArrayCritical(obj_pos, pos, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotErrorBarsV__Ljava_lang_String_2_3S_3S_3S_3SI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jshortArray obj_neg, jshortArray obj_pos, jint count) {

//@line:8046

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto neg = obj_neg == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_neg, JNI_FALSE);
        auto pos = obj_pos == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_pos, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &neg[0], &pos[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (neg != NULL) env->ReleasePrimitiveArrayCritical(obj_neg, neg, JNI_FALSE);
        if (pos != NULL) env->ReleasePrimitiveArrayCritical(obj_pos, pos, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotErrorBarsV__Ljava_lang_String_2_3S_3S_3S_3SIJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jshortArray obj_neg, jshortArray obj_pos, jint count, jlong spec) {

//@line:8060

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto neg = obj_neg == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_neg, JNI_FALSE);
        auto pos = obj_pos == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_pos, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &neg[0], &pos[0], count, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (neg != NULL) env->ReleasePrimitiveArrayCritical(obj_neg, neg, JNI_FALSE);
        if (pos != NULL) env->ReleasePrimitiveArrayCritical(obj_pos, pos, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotErrorBarsV__Ljava_lang_String_2_3I_3I_3I_3II(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jintArray obj_neg, jintArray obj_pos, jint count) {

//@line:8088

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto neg = obj_neg == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_neg, JNI_FALSE);
        auto pos = obj_pos == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_pos, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &neg[0], &pos[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (neg != NULL) env->ReleasePrimitiveArrayCritical(obj_neg, neg, JNI_FALSE);
        if (pos != NULL) env->ReleasePrimitiveArrayCritical(obj_pos, pos, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotErrorBarsV__Ljava_lang_String_2_3I_3I_3I_3IIJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jintArray obj_neg, jintArray obj_pos, jint count, jlong spec) {

//@line:8102

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto neg = obj_neg == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_neg, JNI_FALSE);
        auto pos = obj_pos == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_pos, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &neg[0], &pos[0], count, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (neg != NULL) env->ReleasePrimitiveArrayCritical(obj_neg, neg, JNI_FALSE);
        if (pos != NULL) env->ReleasePrimitiveArrayCritical(obj_pos, pos, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotErrorBarsV__Ljava_lang_String_2_3J_3J_3J_3JI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jlongArray obj_neg, jlongArray obj_pos, jint count) {

//@line:8130

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto neg = obj_neg == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_neg, JNI_FALSE);
        auto pos = obj_pos == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_pos, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &neg[0], &pos[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (neg != NULL) env->ReleasePrimitiveArrayCritical(obj_neg, neg, JNI_FALSE);
        if (pos != NULL) env->ReleasePrimitiveArrayCritical(obj_pos, pos, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotErrorBarsV__Ljava_lang_String_2_3J_3J_3J_3JIJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jlongArray obj_neg, jlongArray obj_pos, jint count, jlong spec) {

//@line:8144

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto neg = obj_neg == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_neg, JNI_FALSE);
        auto pos = obj_pos == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_pos, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &neg[0], &pos[0], count, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (neg != NULL) env->ReleasePrimitiveArrayCritical(obj_neg, neg, JNI_FALSE);
        if (pos != NULL) env->ReleasePrimitiveArrayCritical(obj_pos, pos, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotErrorBarsV__Ljava_lang_String_2_3F_3F_3F_3FI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jfloatArray obj_neg, jfloatArray obj_pos, jint count) {

//@line:8172

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto neg = obj_neg == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_neg, JNI_FALSE);
        auto pos = obj_pos == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_pos, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &neg[0], &pos[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (neg != NULL) env->ReleasePrimitiveArrayCritical(obj_neg, neg, JNI_FALSE);
        if (pos != NULL) env->ReleasePrimitiveArrayCritical(obj_pos, pos, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotErrorBarsV__Ljava_lang_String_2_3F_3F_3F_3FIJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jfloatArray obj_neg, jfloatArray obj_pos, jint count, jlong spec) {

//@line:8186

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto neg = obj_neg == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_neg, JNI_FALSE);
        auto pos = obj_pos == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_pos, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &neg[0], &pos[0], count, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (neg != NULL) env->ReleasePrimitiveArrayCritical(obj_neg, neg, JNI_FALSE);
        if (pos != NULL) env->ReleasePrimitiveArrayCritical(obj_pos, pos, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotErrorBarsV__Ljava_lang_String_2_3D_3D_3D_3DI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jdoubleArray obj_neg, jdoubleArray obj_pos, jint count) {

//@line:8214

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto neg = obj_neg == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_neg, JNI_FALSE);
        auto pos = obj_pos == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_pos, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &neg[0], &pos[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (neg != NULL) env->ReleasePrimitiveArrayCritical(obj_neg, neg, JNI_FALSE);
        if (pos != NULL) env->ReleasePrimitiveArrayCritical(obj_pos, pos, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotErrorBarsV__Ljava_lang_String_2_3D_3D_3D_3DIJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jdoubleArray obj_neg, jdoubleArray obj_pos, jint count, jlong spec) {

//@line:8228

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto neg = obj_neg == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_neg, JNI_FALSE);
        auto pos = obj_pos == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_pos, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &neg[0], &pos[0], count, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (neg != NULL) env->ReleasePrimitiveArrayCritical(obj_neg, neg, JNI_FALSE);
        if (pos != NULL) env->ReleasePrimitiveArrayCritical(obj_pos, pos, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3S(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values) {

//@line:8279

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3SD(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jdouble ref) {

//@line:8287

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], LEN(values), ref);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3SDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jdouble ref, jdouble scale) {

//@line:8295

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], LEN(values), ref, scale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3SDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jdouble ref, jdouble scale, jdouble start) {

//@line:8303

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], LEN(values), ref, scale, start);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3SDDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jdouble ref, jdouble scale, jdouble start, jlong spec) {

//@line:8311

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], LEN(values), ref, scale, start, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3I(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values) {

//@line:8354

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3ID(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jdouble ref) {

//@line:8362

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], LEN(values), ref);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3IDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jdouble ref, jdouble scale) {

//@line:8370

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], LEN(values), ref, scale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3IDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jdouble ref, jdouble scale, jdouble start) {

//@line:8378

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], LEN(values), ref, scale, start);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3IDDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jdouble ref, jdouble scale, jdouble start, jlong spec) {

//@line:8386

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], LEN(values), ref, scale, start, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3J(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values) {

//@line:8429

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3JD(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jdouble ref) {

//@line:8437

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], LEN(values), ref);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3JDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jdouble ref, jdouble scale) {

//@line:8445

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], LEN(values), ref, scale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3JDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jdouble ref, jdouble scale, jdouble start) {

//@line:8453

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], LEN(values), ref, scale, start);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3JDDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jdouble ref, jdouble scale, jdouble start, jlong spec) {

//@line:8461

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], LEN(values), ref, scale, start, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3F(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values) {

//@line:8504

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3FD(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jdouble ref) {

//@line:8512

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], LEN(values), ref);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3FDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jdouble ref, jdouble scale) {

//@line:8520

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], LEN(values), ref, scale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3FDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jdouble ref, jdouble scale, jdouble start) {

//@line:8528

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], LEN(values), ref, scale, start);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3FDDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jdouble ref, jdouble scale, jdouble start, jlong spec) {

//@line:8536

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], LEN(values), ref, scale, start, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3D(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values) {

//@line:8579

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3DD(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jdouble ref) {

//@line:8587

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], LEN(values), ref);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3DDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jdouble ref, jdouble scale) {

//@line:8595

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], LEN(values), ref, scale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3DDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jdouble ref, jdouble scale, jdouble start) {

//@line:8603

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], LEN(values), ref, scale, start);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3DDDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jdouble ref, jdouble scale, jdouble start, jlong spec) {

//@line:8611

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], LEN(values), ref, scale, start, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3SI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint count) {

//@line:8654

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3SID(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint count, jdouble ref) {

//@line:8662

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], count, ref);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3SIDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint count, jdouble ref, jdouble scale) {

//@line:8670

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], count, ref, scale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3SIDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint count, jdouble ref, jdouble scale, jdouble start) {

//@line:8678

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], count, ref, scale, start);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3SIDDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint count, jdouble ref, jdouble scale, jdouble start, jlong spec) {

//@line:8686

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], count, ref, scale, start, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3II(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint count) {

//@line:8729

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3IID(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint count, jdouble ref) {

//@line:8737

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], count, ref);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3IIDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint count, jdouble ref, jdouble scale) {

//@line:8745

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], count, ref, scale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3IIDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint count, jdouble ref, jdouble scale, jdouble start) {

//@line:8753

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], count, ref, scale, start);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3IIDDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint count, jdouble ref, jdouble scale, jdouble start, jlong spec) {

//@line:8761

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], count, ref, scale, start, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3JI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint count) {

//@line:8804

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3JID(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint count, jdouble ref) {

//@line:8812

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], count, ref);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3JIDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint count, jdouble ref, jdouble scale) {

//@line:8820

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], count, ref, scale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3JIDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint count, jdouble ref, jdouble scale, jdouble start) {

//@line:8828

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], count, ref, scale, start);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3JIDDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint count, jdouble ref, jdouble scale, jdouble start, jlong spec) {

//@line:8836

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], count, ref, scale, start, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3FI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint count) {

//@line:8879

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3FID(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint count, jdouble ref) {

//@line:8887

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], count, ref);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3FIDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint count, jdouble ref, jdouble scale) {

//@line:8895

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], count, ref, scale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3FIDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint count, jdouble ref, jdouble scale, jdouble start) {

//@line:8903

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], count, ref, scale, start);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3FIDDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint count, jdouble ref, jdouble scale, jdouble start, jlong spec) {

//@line:8911

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], count, ref, scale, start, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3DI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint count) {

//@line:8954

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3DID(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint count, jdouble ref) {

//@line:8962

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], count, ref);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3DIDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint count, jdouble ref, jdouble scale) {

//@line:8970

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], count, ref, scale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3DIDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint count, jdouble ref, jdouble scale, jdouble start) {

//@line:8978

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], count, ref, scale, start);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3DIDDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint count, jdouble ref, jdouble scale, jdouble start, jlong spec) {

//@line:8986

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], count, ref, scale, start, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3S_3S(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys) {

//@line:9017

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStems(labelId, &xs[0], &ys[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3S_3SD(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jdouble ref) {

//@line:9027

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStems(labelId, &xs[0], &ys[0], LEN(xs), ref);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3S_3SDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jdouble ref, jlong spec) {

//@line:9037

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStems(labelId, &xs[0], &ys[0], LEN(xs), ref, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3I_3I(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys) {

//@line:9068

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStems(labelId, &xs[0], &ys[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3I_3ID(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jdouble ref) {

//@line:9078

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStems(labelId, &xs[0], &ys[0], LEN(xs), ref);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3I_3IDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jdouble ref, jlong spec) {

//@line:9088

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStems(labelId, &xs[0], &ys[0], LEN(xs), ref, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3J_3J(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys) {

//@line:9119

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStems(labelId, &xs[0], &ys[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3J_3JD(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jdouble ref) {

//@line:9129

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStems(labelId, &xs[0], &ys[0], LEN(xs), ref);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3J_3JDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jdouble ref, jlong spec) {

//@line:9139

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStems(labelId, &xs[0], &ys[0], LEN(xs), ref, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3F_3F(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys) {

//@line:9170

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStems(labelId, &xs[0], &ys[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3F_3FD(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jdouble ref) {

//@line:9180

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStems(labelId, &xs[0], &ys[0], LEN(xs), ref);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3F_3FDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jdouble ref, jlong spec) {

//@line:9190

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStems(labelId, &xs[0], &ys[0], LEN(xs), ref, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3D_3D(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys) {

//@line:9221

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStems(labelId, &xs[0], &ys[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3D_3DD(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jdouble ref) {

//@line:9231

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStems(labelId, &xs[0], &ys[0], LEN(xs), ref);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3D_3DDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jdouble ref, jlong spec) {

//@line:9241

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStems(labelId, &xs[0], &ys[0], LEN(xs), ref, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3S_3SI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jint count) {

//@line:9272

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStems(labelId, &xs[0], &ys[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3S_3SID(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jint count, jdouble ref) {

//@line:9282

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStems(labelId, &xs[0], &ys[0], count, ref);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3S_3SIDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jint count, jdouble ref, jlong spec) {

//@line:9292

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStems(labelId, &xs[0], &ys[0], count, ref, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3I_3II(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jint count) {

//@line:9323

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStems(labelId, &xs[0], &ys[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3I_3IID(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jint count, jdouble ref) {

//@line:9333

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStems(labelId, &xs[0], &ys[0], count, ref);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3I_3IIDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jint count, jdouble ref, jlong spec) {

//@line:9343

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStems(labelId, &xs[0], &ys[0], count, ref, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3J_3JI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jint count) {

//@line:9374

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStems(labelId, &xs[0], &ys[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3J_3JID(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jint count, jdouble ref) {

//@line:9384

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStems(labelId, &xs[0], &ys[0], count, ref);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3J_3JIDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jint count, jdouble ref, jlong spec) {

//@line:9394

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStems(labelId, &xs[0], &ys[0], count, ref, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3F_3FI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jint count) {

//@line:9425

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStems(labelId, &xs[0], &ys[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3F_3FID(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jint count, jdouble ref) {

//@line:9435

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStems(labelId, &xs[0], &ys[0], count, ref);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3F_3FIDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jint count, jdouble ref, jlong spec) {

//@line:9445

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStems(labelId, &xs[0], &ys[0], count, ref, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3D_3DI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jint count) {

//@line:9476

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStems(labelId, &xs[0], &ys[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3D_3DID(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jint count, jdouble ref) {

//@line:9486

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStems(labelId, &xs[0], &ys[0], count, ref);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3D_3DIDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jint count, jdouble ref, jlong spec) {

//@line:9496

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStems(labelId, &xs[0], &ys[0], count, ref, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotInfLines__Ljava_lang_String_2_3S(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values) {

//@line:9520

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotInfLines(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotInfLines__Ljava_lang_String_2_3SJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jlong spec) {

//@line:9528

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotInfLines(labelId, &values[0], LEN(values), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotInfLines__Ljava_lang_String_2_3I(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values) {

//@line:9550

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotInfLines(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotInfLines__Ljava_lang_String_2_3IJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jlong spec) {

//@line:9558

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotInfLines(labelId, &values[0], LEN(values), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotInfLines__Ljava_lang_String_2_3J(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values) {

//@line:9580

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotInfLines(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotInfLines__Ljava_lang_String_2_3JJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jlong spec) {

//@line:9588

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotInfLines(labelId, &values[0], LEN(values), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotInfLines__Ljava_lang_String_2_3F(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values) {

//@line:9610

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotInfLines(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotInfLines__Ljava_lang_String_2_3FJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jlong spec) {

//@line:9618

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotInfLines(labelId, &values[0], LEN(values), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotInfLines__Ljava_lang_String_2_3D(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values) {

//@line:9640

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotInfLines(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotInfLines__Ljava_lang_String_2_3DJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jlong spec) {

//@line:9648

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotInfLines(labelId, &values[0], LEN(values), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotInfLinesV__Ljava_lang_String_2_3SI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint count) {

//@line:9670

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotInfLines(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotInfLinesV__Ljava_lang_String_2_3SIJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint count, jlong spec) {

//@line:9678

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotInfLines(labelId, &values[0], count, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotInfLinesV__Ljava_lang_String_2_3II(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint count) {

//@line:9700

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotInfLines(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotInfLinesV__Ljava_lang_String_2_3IIJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint count, jlong spec) {

//@line:9708

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotInfLines(labelId, &values[0], count, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotInfLinesV__Ljava_lang_String_2_3JI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint count) {

//@line:9730

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotInfLines(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotInfLinesV__Ljava_lang_String_2_3JIJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint count, jlong spec) {

//@line:9738

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotInfLines(labelId, &values[0], count, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotInfLinesV__Ljava_lang_String_2_3FI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint count) {

//@line:9760

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotInfLines(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotInfLinesV__Ljava_lang_String_2_3FIJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint count, jlong spec) {

//@line:9768

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotInfLines(labelId, &values[0], count, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotInfLinesV__Ljava_lang_String_2_3DI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint count) {

//@line:9790

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotInfLines(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotInfLinesV__Ljava_lang_String_2_3DIJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint count, jlong spec) {

//@line:9798

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotInfLines(labelId, &values[0], count, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotPieChart___3Ljava_lang_String_2I_3SDDD(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jshortArray obj_values, jdouble x, jdouble y, jdouble radius) {

//@line:9841

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], LEN(values), x, y, radius);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotPieChart___3Ljava_lang_String_2I_3SDDDLjava_lang_String_2(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jshortArray obj_values, jdouble x, jdouble y, jdouble radius, jstring obj_labelFmt) {

//@line:9857

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], LEN(values), x, y, radius, labelFmt);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotPieChart___3Ljava_lang_String_2I_3SDDDLjava_lang_String_2D(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jshortArray obj_values, jdouble x, jdouble y, jdouble radius, jstring obj_labelFmt, jdouble angle0) {

//@line:9875

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], LEN(values), x, y, radius, labelFmt, angle0);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotPieChart___3Ljava_lang_String_2I_3SDDDLjava_lang_String_2DJ(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jshortArray obj_values, jdouble x, jdouble y, jdouble radius, jstring obj_labelFmt, jdouble angle0, jlong spec) {

//@line:9893

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], LEN(values), x, y, radius, labelFmt, angle0, *reinterpret_cast<ImPlotSpec*>(spec));
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotPieChart___3Ljava_lang_String_2I_3SDDDDJ(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jshortArray obj_values, jdouble x, jdouble y, jdouble radius, jdouble angle0, jlong spec) {

//@line:9911

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], LEN(values), x, y, radius, "%.1f", angle0, *reinterpret_cast<ImPlotSpec*>(spec));
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotPieChart___3Ljava_lang_String_2I_3IDDD(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jintArray obj_values, jdouble x, jdouble y, jdouble radius) {

//@line:9962

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], LEN(values), x, y, radius);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotPieChart___3Ljava_lang_String_2I_3IDDDLjava_lang_String_2(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jintArray obj_values, jdouble x, jdouble y, jdouble radius, jstring obj_labelFmt) {

//@line:9978

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], LEN(values), x, y, radius, labelFmt);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotPieChart___3Ljava_lang_String_2I_3IDDDLjava_lang_String_2D(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jintArray obj_values, jdouble x, jdouble y, jdouble radius, jstring obj_labelFmt, jdouble angle0) {

//@line:9996

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], LEN(values), x, y, radius, labelFmt, angle0);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotPieChart___3Ljava_lang_String_2I_3IDDDLjava_lang_String_2DJ(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jintArray obj_values, jdouble x, jdouble y, jdouble radius, jstring obj_labelFmt, jdouble angle0, jlong spec) {

//@line:10014

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], LEN(values), x, y, radius, labelFmt, angle0, *reinterpret_cast<ImPlotSpec*>(spec));
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotPieChart___3Ljava_lang_String_2I_3IDDDDJ(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jintArray obj_values, jdouble x, jdouble y, jdouble radius, jdouble angle0, jlong spec) {

//@line:10032

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], LEN(values), x, y, radius, "%.1f", angle0, *reinterpret_cast<ImPlotSpec*>(spec));
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotPieChart___3Ljava_lang_String_2I_3JDDD(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jlongArray obj_values, jdouble x, jdouble y, jdouble radius) {

//@line:10083

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], LEN(values), x, y, radius);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotPieChart___3Ljava_lang_String_2I_3JDDDLjava_lang_String_2(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jlongArray obj_values, jdouble x, jdouble y, jdouble radius, jstring obj_labelFmt) {

//@line:10099

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], LEN(values), x, y, radius, labelFmt);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotPieChart___3Ljava_lang_String_2I_3JDDDLjava_lang_String_2D(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jlongArray obj_values, jdouble x, jdouble y, jdouble radius, jstring obj_labelFmt, jdouble angle0) {

//@line:10117

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], LEN(values), x, y, radius, labelFmt, angle0);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotPieChart___3Ljava_lang_String_2I_3JDDDLjava_lang_String_2DJ(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jlongArray obj_values, jdouble x, jdouble y, jdouble radius, jstring obj_labelFmt, jdouble angle0, jlong spec) {

//@line:10135

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], LEN(values), x, y, radius, labelFmt, angle0, *reinterpret_cast<ImPlotSpec*>(spec));
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotPieChart___3Ljava_lang_String_2I_3JDDDDJ(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jlongArray obj_values, jdouble x, jdouble y, jdouble radius, jdouble angle0, jlong spec) {

//@line:10153

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], LEN(values), x, y, radius, "%.1f", angle0, *reinterpret_cast<ImPlotSpec*>(spec));
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotPieChart___3Ljava_lang_String_2I_3FDDD(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jfloatArray obj_values, jdouble x, jdouble y, jdouble radius) {

//@line:10204

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], LEN(values), x, y, radius);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotPieChart___3Ljava_lang_String_2I_3FDDDLjava_lang_String_2(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jfloatArray obj_values, jdouble x, jdouble y, jdouble radius, jstring obj_labelFmt) {

//@line:10220

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], LEN(values), x, y, radius, labelFmt);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotPieChart___3Ljava_lang_String_2I_3FDDDLjava_lang_String_2D(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jfloatArray obj_values, jdouble x, jdouble y, jdouble radius, jstring obj_labelFmt, jdouble angle0) {

//@line:10238

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], LEN(values), x, y, radius, labelFmt, angle0);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotPieChart___3Ljava_lang_String_2I_3FDDDLjava_lang_String_2DJ(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jfloatArray obj_values, jdouble x, jdouble y, jdouble radius, jstring obj_labelFmt, jdouble angle0, jlong spec) {

//@line:10256

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], LEN(values), x, y, radius, labelFmt, angle0, *reinterpret_cast<ImPlotSpec*>(spec));
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotPieChart___3Ljava_lang_String_2I_3FDDDDJ(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jfloatArray obj_values, jdouble x, jdouble y, jdouble radius, jdouble angle0, jlong spec) {

//@line:10274

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], LEN(values), x, y, radius, "%.1f", angle0, *reinterpret_cast<ImPlotSpec*>(spec));
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotPieChart___3Ljava_lang_String_2I_3DDDD(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jdoubleArray obj_values, jdouble x, jdouble y, jdouble radius) {

//@line:10325

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], LEN(values), x, y, radius);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotPieChart___3Ljava_lang_String_2I_3DDDDLjava_lang_String_2(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jdoubleArray obj_values, jdouble x, jdouble y, jdouble radius, jstring obj_labelFmt) {

//@line:10341

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], LEN(values), x, y, radius, labelFmt);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotPieChart___3Ljava_lang_String_2I_3DDDDLjava_lang_String_2D(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jdoubleArray obj_values, jdouble x, jdouble y, jdouble radius, jstring obj_labelFmt, jdouble angle0) {

//@line:10359

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], LEN(values), x, y, radius, labelFmt, angle0);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotPieChart___3Ljava_lang_String_2I_3DDDDLjava_lang_String_2DJ(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jdoubleArray obj_values, jdouble x, jdouble y, jdouble radius, jstring obj_labelFmt, jdouble angle0, jlong spec) {

//@line:10377

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], LEN(values), x, y, radius, labelFmt, angle0, *reinterpret_cast<ImPlotSpec*>(spec));
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotPieChart___3Ljava_lang_String_2I_3DDDDDJ(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jdoubleArray obj_values, jdouble x, jdouble y, jdouble radius, jdouble angle0, jlong spec) {

//@line:10395

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], LEN(values), x, y, radius, "%.1f", angle0, *reinterpret_cast<ImPlotSpec*>(spec));
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotPieChartV___3Ljava_lang_String_2I_3SIDDD(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jshortArray obj_values, jint count, jdouble x, jdouble y, jdouble radius) {

//@line:10446

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], count, x, y, radius);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotPieChartV___3Ljava_lang_String_2I_3SIDDDLjava_lang_String_2(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jshortArray obj_values, jint count, jdouble x, jdouble y, jdouble radius, jstring obj_labelFmt) {

//@line:10462

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], count, x, y, radius, labelFmt);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotPieChartV___3Ljava_lang_String_2I_3SIDDDLjava_lang_String_2D(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jshortArray obj_values, jint count, jdouble x, jdouble y, jdouble radius, jstring obj_labelFmt, jdouble angle0) {

//@line:10480

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], count, x, y, radius, labelFmt, angle0);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotPieChartV___3Ljava_lang_String_2I_3SIDDDLjava_lang_String_2DJ(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jshortArray obj_values, jint count, jdouble x, jdouble y, jdouble radius, jstring obj_labelFmt, jdouble angle0, jlong spec) {

//@line:10498

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], count, x, y, radius, labelFmt, angle0, *reinterpret_cast<ImPlotSpec*>(spec));
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotPieChartV___3Ljava_lang_String_2I_3SIDDDDJ(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jshortArray obj_values, jint count, jdouble x, jdouble y, jdouble radius, jdouble angle0, jlong spec) {

//@line:10516

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], count, x, y, radius, "%.1f", angle0, *reinterpret_cast<ImPlotSpec*>(spec));
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotPieChartV___3Ljava_lang_String_2I_3IIDDD(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jintArray obj_values, jint count, jdouble x, jdouble y, jdouble radius) {

//@line:10567

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], count, x, y, radius);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotPieChartV___3Ljava_lang_String_2I_3IIDDDLjava_lang_String_2(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jintArray obj_values, jint count, jdouble x, jdouble y, jdouble radius, jstring obj_labelFmt) {

//@line:10583

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], count, x, y, radius, labelFmt);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotPieChartV___3Ljava_lang_String_2I_3IIDDDLjava_lang_String_2D(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jintArray obj_values, jint count, jdouble x, jdouble y, jdouble radius, jstring obj_labelFmt, jdouble angle0) {

//@line:10601

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], count, x, y, radius, labelFmt, angle0);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotPieChartV___3Ljava_lang_String_2I_3IIDDDLjava_lang_String_2DJ(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jintArray obj_values, jint count, jdouble x, jdouble y, jdouble radius, jstring obj_labelFmt, jdouble angle0, jlong spec) {

//@line:10619

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], count, x, y, radius, labelFmt, angle0, *reinterpret_cast<ImPlotSpec*>(spec));
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotPieChartV___3Ljava_lang_String_2I_3IIDDDDJ(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jintArray obj_values, jint count, jdouble x, jdouble y, jdouble radius, jdouble angle0, jlong spec) {

//@line:10637

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], count, x, y, radius, "%.1f", angle0, *reinterpret_cast<ImPlotSpec*>(spec));
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotPieChartV___3Ljava_lang_String_2I_3JIDDD(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jlongArray obj_values, jint count, jdouble x, jdouble y, jdouble radius) {

//@line:10688

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], count, x, y, radius);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotPieChartV___3Ljava_lang_String_2I_3JIDDDLjava_lang_String_2(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jlongArray obj_values, jint count, jdouble x, jdouble y, jdouble radius, jstring obj_labelFmt) {

//@line:10704

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], count, x, y, radius, labelFmt);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotPieChartV___3Ljava_lang_String_2I_3JIDDDLjava_lang_String_2D(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jlongArray obj_values, jint count, jdouble x, jdouble y, jdouble radius, jstring obj_labelFmt, jdouble angle0) {

//@line:10722

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], count, x, y, radius, labelFmt, angle0);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotPieChartV___3Ljava_lang_String_2I_3JIDDDLjava_lang_String_2DJ(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jlongArray obj_values, jint count, jdouble x, jdouble y, jdouble radius, jstring obj_labelFmt, jdouble angle0, jlong spec) {

//@line:10740

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], count, x, y, radius, labelFmt, angle0, *reinterpret_cast<ImPlotSpec*>(spec));
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotPieChartV___3Ljava_lang_String_2I_3JIDDDDJ(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jlongArray obj_values, jint count, jdouble x, jdouble y, jdouble radius, jdouble angle0, jlong spec) {

//@line:10758

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], count, x, y, radius, "%.1f", angle0, *reinterpret_cast<ImPlotSpec*>(spec));
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotPieChartV___3Ljava_lang_String_2I_3FIDDD(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jfloatArray obj_values, jint count, jdouble x, jdouble y, jdouble radius) {

//@line:10809

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], count, x, y, radius);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotPieChartV___3Ljava_lang_String_2I_3FIDDDLjava_lang_String_2(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jfloatArray obj_values, jint count, jdouble x, jdouble y, jdouble radius, jstring obj_labelFmt) {

//@line:10825

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], count, x, y, radius, labelFmt);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotPieChartV___3Ljava_lang_String_2I_3FIDDDLjava_lang_String_2D(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jfloatArray obj_values, jint count, jdouble x, jdouble y, jdouble radius, jstring obj_labelFmt, jdouble angle0) {

//@line:10843

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], count, x, y, radius, labelFmt, angle0);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotPieChartV___3Ljava_lang_String_2I_3FIDDDLjava_lang_String_2DJ(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jfloatArray obj_values, jint count, jdouble x, jdouble y, jdouble radius, jstring obj_labelFmt, jdouble angle0, jlong spec) {

//@line:10861

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], count, x, y, radius, labelFmt, angle0, *reinterpret_cast<ImPlotSpec*>(spec));
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotPieChartV___3Ljava_lang_String_2I_3FIDDDDJ(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jfloatArray obj_values, jint count, jdouble x, jdouble y, jdouble radius, jdouble angle0, jlong spec) {

//@line:10879

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], count, x, y, radius, "%.1f", angle0, *reinterpret_cast<ImPlotSpec*>(spec));
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotPieChartV___3Ljava_lang_String_2I_3DIDDD(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jdoubleArray obj_values, jint count, jdouble x, jdouble y, jdouble radius) {

//@line:10930

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], count, x, y, radius);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotPieChartV___3Ljava_lang_String_2I_3DIDDDLjava_lang_String_2(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jdoubleArray obj_values, jint count, jdouble x, jdouble y, jdouble radius, jstring obj_labelFmt) {

//@line:10946

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], count, x, y, radius, labelFmt);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotPieChartV___3Ljava_lang_String_2I_3DIDDDLjava_lang_String_2D(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jdoubleArray obj_values, jint count, jdouble x, jdouble y, jdouble radius, jstring obj_labelFmt, jdouble angle0) {

//@line:10964

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], count, x, y, radius, labelFmt, angle0);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotPieChartV___3Ljava_lang_String_2I_3DIDDDLjava_lang_String_2DJ(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jdoubleArray obj_values, jint count, jdouble x, jdouble y, jdouble radius, jstring obj_labelFmt, jdouble angle0, jlong spec) {

//@line:10982

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], count, x, y, radius, labelFmt, angle0, *reinterpret_cast<ImPlotSpec*>(spec));
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotPieChartV___3Ljava_lang_String_2I_3DIDDDDJ(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jdoubleArray obj_values, jint count, jdouble x, jdouble y, jdouble radius, jdouble angle0, jlong spec) {

//@line:11000

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], count, x, y, radius, "%.1f", angle0, *reinterpret_cast<ImPlotSpec*>(spec));
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3SII(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint rows, jint cols) {

//@line:11100

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3SIID(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint rows, jint cols, jdouble scaleMin) {

//@line:11108

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols, scaleMin);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3SIIDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint rows, jint cols, jdouble scaleMin, jdouble scaleMax) {

//@line:11116

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols, scaleMin, scaleMax);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3SIIDDLjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint rows, jint cols, jdouble scaleMin, jdouble scaleMax, jstring obj_labelFmt) {

//@line:11124

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols, scaleMin, scaleMax, labelFmt);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3SIIDDLjava_lang_String_2DD(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint rows, jint cols, jdouble scaleMin, jdouble scaleMax, jstring obj_labelFmt, jdouble boundsMinX, jdouble boundsMinY) {

//@line:11134

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols, scaleMin, scaleMax, labelFmt, ImPlotPoint(boundsMinX, boundsMinY));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3SIIDDLjava_lang_String_2DDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint rows, jint cols, jdouble scaleMin, jdouble scaleMax, jstring obj_labelFmt, jdouble boundsMinX, jdouble boundsMinY, jdouble boundsMaxX, jdouble boundsMaxY) {

//@line:11144

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols, scaleMin, scaleMax, labelFmt, ImPlotPoint(boundsMinX, boundsMinY), ImPlotPoint(boundsMaxX, boundsMaxY));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3SIIDDLjava_lang_String_2DDDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint rows, jint cols, jdouble scaleMin, jdouble scaleMax, jstring obj_labelFmt, jdouble boundsMinX, jdouble boundsMinY, jdouble boundsMaxX, jdouble boundsMaxY, jlong spec) {

//@line:11154

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols, scaleMin, scaleMax, labelFmt, ImPlotPoint(boundsMinX, boundsMinY), ImPlotPoint(boundsMaxX, boundsMaxY), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3SIIDDDDDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint rows, jint cols, jdouble scaleMin, jdouble scaleMax, jdouble boundsMinX, jdouble boundsMinY, jdouble boundsMaxX, jdouble boundsMaxY, jlong spec) {

//@line:11164

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols, scaleMin, scaleMax, "%.1f", ImPlotPoint(boundsMinX, boundsMinY), ImPlotPoint(boundsMaxX, boundsMaxY), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3III(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint rows, jint cols) {

//@line:11256

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3IIID(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint rows, jint cols, jdouble scaleMin) {

//@line:11264

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols, scaleMin);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3IIIDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint rows, jint cols, jdouble scaleMin, jdouble scaleMax) {

//@line:11272

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols, scaleMin, scaleMax);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3IIIDDLjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint rows, jint cols, jdouble scaleMin, jdouble scaleMax, jstring obj_labelFmt) {

//@line:11280

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols, scaleMin, scaleMax, labelFmt);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3IIIDDLjava_lang_String_2DD(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint rows, jint cols, jdouble scaleMin, jdouble scaleMax, jstring obj_labelFmt, jdouble boundsMinX, jdouble boundsMinY) {

//@line:11290

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols, scaleMin, scaleMax, labelFmt, ImPlotPoint(boundsMinX, boundsMinY));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3IIIDDLjava_lang_String_2DDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint rows, jint cols, jdouble scaleMin, jdouble scaleMax, jstring obj_labelFmt, jdouble boundsMinX, jdouble boundsMinY, jdouble boundsMaxX, jdouble boundsMaxY) {

//@line:11300

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols, scaleMin, scaleMax, labelFmt, ImPlotPoint(boundsMinX, boundsMinY), ImPlotPoint(boundsMaxX, boundsMaxY));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3IIIDDLjava_lang_String_2DDDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint rows, jint cols, jdouble scaleMin, jdouble scaleMax, jstring obj_labelFmt, jdouble boundsMinX, jdouble boundsMinY, jdouble boundsMaxX, jdouble boundsMaxY, jlong spec) {

//@line:11310

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols, scaleMin, scaleMax, labelFmt, ImPlotPoint(boundsMinX, boundsMinY), ImPlotPoint(boundsMaxX, boundsMaxY), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3IIIDDDDDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint rows, jint cols, jdouble scaleMin, jdouble scaleMax, jdouble boundsMinX, jdouble boundsMinY, jdouble boundsMaxX, jdouble boundsMaxY, jlong spec) {

//@line:11320

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols, scaleMin, scaleMax, "%.1f", ImPlotPoint(boundsMinX, boundsMinY), ImPlotPoint(boundsMaxX, boundsMaxY), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3JII(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint rows, jint cols) {

//@line:11412

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3JIID(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint rows, jint cols, jdouble scaleMin) {

//@line:11420

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols, scaleMin);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3JIIDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint rows, jint cols, jdouble scaleMin, jdouble scaleMax) {

//@line:11428

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols, scaleMin, scaleMax);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3JIIDDLjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint rows, jint cols, jdouble scaleMin, jdouble scaleMax, jstring obj_labelFmt) {

//@line:11436

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols, scaleMin, scaleMax, labelFmt);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3JIIDDLjava_lang_String_2DD(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint rows, jint cols, jdouble scaleMin, jdouble scaleMax, jstring obj_labelFmt, jdouble boundsMinX, jdouble boundsMinY) {

//@line:11446

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols, scaleMin, scaleMax, labelFmt, ImPlotPoint(boundsMinX, boundsMinY));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3JIIDDLjava_lang_String_2DDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint rows, jint cols, jdouble scaleMin, jdouble scaleMax, jstring obj_labelFmt, jdouble boundsMinX, jdouble boundsMinY, jdouble boundsMaxX, jdouble boundsMaxY) {

//@line:11456

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols, scaleMin, scaleMax, labelFmt, ImPlotPoint(boundsMinX, boundsMinY), ImPlotPoint(boundsMaxX, boundsMaxY));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3JIIDDLjava_lang_String_2DDDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint rows, jint cols, jdouble scaleMin, jdouble scaleMax, jstring obj_labelFmt, jdouble boundsMinX, jdouble boundsMinY, jdouble boundsMaxX, jdouble boundsMaxY, jlong spec) {

//@line:11466

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols, scaleMin, scaleMax, labelFmt, ImPlotPoint(boundsMinX, boundsMinY), ImPlotPoint(boundsMaxX, boundsMaxY), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3JIIDDDDDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint rows, jint cols, jdouble scaleMin, jdouble scaleMax, jdouble boundsMinX, jdouble boundsMinY, jdouble boundsMaxX, jdouble boundsMaxY, jlong spec) {

//@line:11476

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols, scaleMin, scaleMax, "%.1f", ImPlotPoint(boundsMinX, boundsMinY), ImPlotPoint(boundsMaxX, boundsMaxY), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3FII(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint rows, jint cols) {

//@line:11568

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3FIID(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint rows, jint cols, jdouble scaleMin) {

//@line:11576

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols, scaleMin);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3FIIDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint rows, jint cols, jdouble scaleMin, jdouble scaleMax) {

//@line:11584

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols, scaleMin, scaleMax);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3FIIDDLjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint rows, jint cols, jdouble scaleMin, jdouble scaleMax, jstring obj_labelFmt) {

//@line:11592

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols, scaleMin, scaleMax, labelFmt);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3FIIDDLjava_lang_String_2DD(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint rows, jint cols, jdouble scaleMin, jdouble scaleMax, jstring obj_labelFmt, jdouble boundsMinX, jdouble boundsMinY) {

//@line:11602

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols, scaleMin, scaleMax, labelFmt, ImPlotPoint(boundsMinX, boundsMinY));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3FIIDDLjava_lang_String_2DDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint rows, jint cols, jdouble scaleMin, jdouble scaleMax, jstring obj_labelFmt, jdouble boundsMinX, jdouble boundsMinY, jdouble boundsMaxX, jdouble boundsMaxY) {

//@line:11612

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols, scaleMin, scaleMax, labelFmt, ImPlotPoint(boundsMinX, boundsMinY), ImPlotPoint(boundsMaxX, boundsMaxY));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3FIIDDLjava_lang_String_2DDDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint rows, jint cols, jdouble scaleMin, jdouble scaleMax, jstring obj_labelFmt, jdouble boundsMinX, jdouble boundsMinY, jdouble boundsMaxX, jdouble boundsMaxY, jlong spec) {

//@line:11622

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols, scaleMin, scaleMax, labelFmt, ImPlotPoint(boundsMinX, boundsMinY), ImPlotPoint(boundsMaxX, boundsMaxY), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3FIIDDDDDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint rows, jint cols, jdouble scaleMin, jdouble scaleMax, jdouble boundsMinX, jdouble boundsMinY, jdouble boundsMaxX, jdouble boundsMaxY, jlong spec) {

//@line:11632

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols, scaleMin, scaleMax, "%.1f", ImPlotPoint(boundsMinX, boundsMinY), ImPlotPoint(boundsMaxX, boundsMaxY), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3DII(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint rows, jint cols) {

//@line:11724

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3DIID(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint rows, jint cols, jdouble scaleMin) {

//@line:11732

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols, scaleMin);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3DIIDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint rows, jint cols, jdouble scaleMin, jdouble scaleMax) {

//@line:11740

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols, scaleMin, scaleMax);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3DIIDDLjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint rows, jint cols, jdouble scaleMin, jdouble scaleMax, jstring obj_labelFmt) {

//@line:11748

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols, scaleMin, scaleMax, labelFmt);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3DIIDDLjava_lang_String_2DD(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint rows, jint cols, jdouble scaleMin, jdouble scaleMax, jstring obj_labelFmt, jdouble boundsMinX, jdouble boundsMinY) {

//@line:11758

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols, scaleMin, scaleMax, labelFmt, ImPlotPoint(boundsMinX, boundsMinY));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3DIIDDLjava_lang_String_2DDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint rows, jint cols, jdouble scaleMin, jdouble scaleMax, jstring obj_labelFmt, jdouble boundsMinX, jdouble boundsMinY, jdouble boundsMaxX, jdouble boundsMaxY) {

//@line:11768

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols, scaleMin, scaleMax, labelFmt, ImPlotPoint(boundsMinX, boundsMinY), ImPlotPoint(boundsMaxX, boundsMaxY));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3DIIDDLjava_lang_String_2DDDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint rows, jint cols, jdouble scaleMin, jdouble scaleMax, jstring obj_labelFmt, jdouble boundsMinX, jdouble boundsMinY, jdouble boundsMaxX, jdouble boundsMaxY, jlong spec) {

//@line:11778

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols, scaleMin, scaleMax, labelFmt, ImPlotPoint(boundsMinX, boundsMinY), ImPlotPoint(boundsMaxX, boundsMaxY), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3DIIDDDDDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint rows, jint cols, jdouble scaleMin, jdouble scaleMax, jdouble boundsMinX, jdouble boundsMinY, jdouble boundsMaxX, jdouble boundsMaxY, jlong spec) {

//@line:11788

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols, scaleMin, scaleMax, "%.1f", ImPlotPoint(boundsMinX, boundsMinY), ImPlotPoint(boundsMaxX, boundsMaxY), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram__Ljava_lang_String_2_3S(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values) {

//@line:11886

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram__Ljava_lang_String_2_3SI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint bins) {

//@line:11895

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], LEN(values), bins);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram__Ljava_lang_String_2_3SID(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint bins, jdouble barScale) {

//@line:11904

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], LEN(values), bins, barScale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram__Ljava_lang_String_2_3SIDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint bins, jdouble barScale, jdouble rangeMin, jdouble rangeMax) {

//@line:11913

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], LEN(values), bins, barScale, ImPlotRange(rangeMin, rangeMax));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram__Ljava_lang_String_2_3SIDDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint bins, jdouble barScale, jdouble rangeMin, jdouble rangeMax, jlong spec) {

//@line:11922

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], LEN(values), bins, barScale, ImPlotRange(rangeMin, rangeMax), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram__Ljava_lang_String_2_3SDDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jdouble barScale, jdouble rangeMin, jdouble rangeMax, jlong spec) {

//@line:11931

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], LEN(values), ImPlotBin_Sturges, barScale, ImPlotRange(rangeMin, rangeMax), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram__Ljava_lang_String_2_3SIDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint bins, jdouble barScale, jlong spec) {

//@line:11940

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], LEN(values), bins, barScale, ImPlotRange(), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram__Ljava_lang_String_2_3I(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values) {

//@line:12039

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram__Ljava_lang_String_2_3II(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint bins) {

//@line:12048

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], LEN(values), bins);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram__Ljava_lang_String_2_3IID(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint bins, jdouble barScale) {

//@line:12057

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], LEN(values), bins, barScale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram__Ljava_lang_String_2_3IIDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint bins, jdouble barScale, jdouble rangeMin, jdouble rangeMax) {

//@line:12066

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], LEN(values), bins, barScale, ImPlotRange(rangeMin, rangeMax));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram__Ljava_lang_String_2_3IIDDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint bins, jdouble barScale, jdouble rangeMin, jdouble rangeMax, jlong spec) {

//@line:12075

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], LEN(values), bins, barScale, ImPlotRange(rangeMin, rangeMax), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram__Ljava_lang_String_2_3IDDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jdouble barScale, jdouble rangeMin, jdouble rangeMax, jlong spec) {

//@line:12084

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], LEN(values), ImPlotBin_Sturges, barScale, ImPlotRange(rangeMin, rangeMax), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram__Ljava_lang_String_2_3IIDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint bins, jdouble barScale, jlong spec) {

//@line:12093

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], LEN(values), bins, barScale, ImPlotRange(), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram__Ljava_lang_String_2_3J(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values) {

//@line:12192

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram__Ljava_lang_String_2_3JI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint bins) {

//@line:12201

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], LEN(values), bins);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram__Ljava_lang_String_2_3JID(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint bins, jdouble barScale) {

//@line:12210

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], LEN(values), bins, barScale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram__Ljava_lang_String_2_3JIDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint bins, jdouble barScale, jdouble rangeMin, jdouble rangeMax) {

//@line:12219

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], LEN(values), bins, barScale, ImPlotRange(rangeMin, rangeMax));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram__Ljava_lang_String_2_3JIDDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint bins, jdouble barScale, jdouble rangeMin, jdouble rangeMax, jlong spec) {

//@line:12228

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], LEN(values), bins, barScale, ImPlotRange(rangeMin, rangeMax), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram__Ljava_lang_String_2_3JDDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jdouble barScale, jdouble rangeMin, jdouble rangeMax, jlong spec) {

//@line:12237

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], LEN(values), ImPlotBin_Sturges, barScale, ImPlotRange(rangeMin, rangeMax), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram__Ljava_lang_String_2_3JIDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint bins, jdouble barScale, jlong spec) {

//@line:12246

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], LEN(values), bins, barScale, ImPlotRange(), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram__Ljava_lang_String_2_3F(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values) {

//@line:12345

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram__Ljava_lang_String_2_3FI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint bins) {

//@line:12354

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], LEN(values), bins);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram__Ljava_lang_String_2_3FID(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint bins, jdouble barScale) {

//@line:12363

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], LEN(values), bins, barScale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram__Ljava_lang_String_2_3FIDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint bins, jdouble barScale, jdouble rangeMin, jdouble rangeMax) {

//@line:12372

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], LEN(values), bins, barScale, ImPlotRange(rangeMin, rangeMax));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram__Ljava_lang_String_2_3FIDDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint bins, jdouble barScale, jdouble rangeMin, jdouble rangeMax, jlong spec) {

//@line:12381

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], LEN(values), bins, barScale, ImPlotRange(rangeMin, rangeMax), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram__Ljava_lang_String_2_3FDDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jdouble barScale, jdouble rangeMin, jdouble rangeMax, jlong spec) {

//@line:12390

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], LEN(values), ImPlotBin_Sturges, barScale, ImPlotRange(rangeMin, rangeMax), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram__Ljava_lang_String_2_3FIDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint bins, jdouble barScale, jlong spec) {

//@line:12399

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], LEN(values), bins, barScale, ImPlotRange(), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram__Ljava_lang_String_2_3D(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values) {

//@line:12498

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram__Ljava_lang_String_2_3DI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint bins) {

//@line:12507

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], LEN(values), bins);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram__Ljava_lang_String_2_3DID(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint bins, jdouble barScale) {

//@line:12516

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], LEN(values), bins, barScale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram__Ljava_lang_String_2_3DIDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint bins, jdouble barScale, jdouble rangeMin, jdouble rangeMax) {

//@line:12525

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], LEN(values), bins, barScale, ImPlotRange(rangeMin, rangeMax));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram__Ljava_lang_String_2_3DIDDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint bins, jdouble barScale, jdouble rangeMin, jdouble rangeMax, jlong spec) {

//@line:12534

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], LEN(values), bins, barScale, ImPlotRange(rangeMin, rangeMax), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram__Ljava_lang_String_2_3DDDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jdouble barScale, jdouble rangeMin, jdouble rangeMax, jlong spec) {

//@line:12543

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], LEN(values), ImPlotBin_Sturges, barScale, ImPlotRange(rangeMin, rangeMax), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram__Ljava_lang_String_2_3DIDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint bins, jdouble barScale, jlong spec) {

//@line:12552

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], LEN(values), bins, barScale, ImPlotRange(), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogramV__Ljava_lang_String_2_3SI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint count) {

//@line:12633

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogramV__Ljava_lang_String_2_3SII(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint count, jint bins) {

//@line:12642

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], count, bins);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogramV__Ljava_lang_String_2_3SIID(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint count, jint bins, jdouble barScale) {

//@line:12651

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], count, bins, barScale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogramV__Ljava_lang_String_2_3SIIDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint count, jint bins, jdouble barScale, jdouble rangeMin, jdouble rangeMax) {

//@line:12660

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], count, bins, barScale, ImPlotRange(rangeMin, rangeMax));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogramV__Ljava_lang_String_2_3SIIDDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint count, jint bins, jdouble barScale, jdouble rangeMin, jdouble rangeMax, jlong spec) {

//@line:12669

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], count, bins, barScale, ImPlotRange(rangeMin, rangeMax), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogramV__Ljava_lang_String_2_3SIIDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint count, jint bins, jdouble barScale, jlong spec) {

//@line:12678

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], count, bins, barScale, ImPlotRange(), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogramV__Ljava_lang_String_2_3II(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint count) {

//@line:12759

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogramV__Ljava_lang_String_2_3III(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint count, jint bins) {

//@line:12768

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], count, bins);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogramV__Ljava_lang_String_2_3IIID(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint count, jint bins, jdouble barScale) {

//@line:12777

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], count, bins, barScale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogramV__Ljava_lang_String_2_3IIIDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint count, jint bins, jdouble barScale, jdouble rangeMin, jdouble rangeMax) {

//@line:12786

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], count, bins, barScale, ImPlotRange(rangeMin, rangeMax));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogramV__Ljava_lang_String_2_3IIIDDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint count, jint bins, jdouble barScale, jdouble rangeMin, jdouble rangeMax, jlong spec) {

//@line:12795

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], count, bins, barScale, ImPlotRange(rangeMin, rangeMax), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogramV__Ljava_lang_String_2_3IIIDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint count, jint bins, jdouble barScale, jlong spec) {

//@line:12804

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], count, bins, barScale, ImPlotRange(), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogramV__Ljava_lang_String_2_3JI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint count) {

//@line:12885

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogramV__Ljava_lang_String_2_3JII(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint count, jint bins) {

//@line:12894

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], count, bins);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogramV__Ljava_lang_String_2_3JIID(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint count, jint bins, jdouble barScale) {

//@line:12903

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], count, bins, barScale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogramV__Ljava_lang_String_2_3JIIDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint count, jint bins, jdouble barScale, jdouble rangeMin, jdouble rangeMax) {

//@line:12912

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], count, bins, barScale, ImPlotRange(rangeMin, rangeMax));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogramV__Ljava_lang_String_2_3JIIDDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint count, jint bins, jdouble barScale, jdouble rangeMin, jdouble rangeMax, jlong spec) {

//@line:12921

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], count, bins, barScale, ImPlotRange(rangeMin, rangeMax), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogramV__Ljava_lang_String_2_3JIIDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint count, jint bins, jdouble barScale, jlong spec) {

//@line:12930

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], count, bins, barScale, ImPlotRange(), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogramV__Ljava_lang_String_2_3FI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint count) {

//@line:13011

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogramV__Ljava_lang_String_2_3FII(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint count, jint bins) {

//@line:13020

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], count, bins);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogramV__Ljava_lang_String_2_3FIID(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint count, jint bins, jdouble barScale) {

//@line:13029

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], count, bins, barScale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogramV__Ljava_lang_String_2_3FIIDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint count, jint bins, jdouble barScale, jdouble rangeMin, jdouble rangeMax) {

//@line:13038

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], count, bins, barScale, ImPlotRange(rangeMin, rangeMax));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogramV__Ljava_lang_String_2_3FIIDDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint count, jint bins, jdouble barScale, jdouble rangeMin, jdouble rangeMax, jlong spec) {

//@line:13047

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], count, bins, barScale, ImPlotRange(rangeMin, rangeMax), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogramV__Ljava_lang_String_2_3FIIDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint count, jint bins, jdouble barScale, jlong spec) {

//@line:13056

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], count, bins, barScale, ImPlotRange(), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogramV__Ljava_lang_String_2_3DI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint count) {

//@line:13137

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogramV__Ljava_lang_String_2_3DII(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint count, jint bins) {

//@line:13146

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], count, bins);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogramV__Ljava_lang_String_2_3DIID(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint count, jint bins, jdouble barScale) {

//@line:13155

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], count, bins, barScale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogramV__Ljava_lang_String_2_3DIIDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint count, jint bins, jdouble barScale, jdouble rangeMin, jdouble rangeMax) {

//@line:13164

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], count, bins, barScale, ImPlotRange(rangeMin, rangeMax));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogramV__Ljava_lang_String_2_3DIIDDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint count, jint bins, jdouble barScale, jdouble rangeMin, jdouble rangeMax, jlong spec) {

//@line:13173

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], count, bins, barScale, ImPlotRange(rangeMin, rangeMax), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogramV__Ljava_lang_String_2_3DIIDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint count, jint bins, jdouble barScale, jlong spec) {

//@line:13182

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], count, bins, barScale, ImPlotRange(), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram2D__Ljava_lang_String_2_3S_3S(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys) {

//@line:13263

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram2D__Ljava_lang_String_2_3S_3SI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jint xBins) {

//@line:13274

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], LEN(xs), xBins);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram2D__Ljava_lang_String_2_3S_3SII(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jint xBins, jint yBins) {

//@line:13285

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], LEN(xs), xBins, yBins);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram2D__Ljava_lang_String_2_3S_3SIIDDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jint xBins, jint yBins, jdouble rangeMinX, jdouble rangeMinY, jdouble rangeMaxX, jdouble rangeMaxY) {

//@line:13296

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], LEN(xs), xBins, yBins, ImPlotRect(rangeMinX, rangeMinY, rangeMaxX, rangeMaxY));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram2D__Ljava_lang_String_2_3S_3SIIDDDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jint xBins, jint yBins, jdouble rangeMinX, jdouble rangeMinY, jdouble rangeMaxX, jdouble rangeMaxY, jlong spec) {

//@line:13307

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], LEN(xs), xBins, yBins, ImPlotRect(rangeMinX, rangeMinY, rangeMaxX, rangeMaxY), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram2D__Ljava_lang_String_2_3S_3SIIJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jint xBins, jint yBins, jlong spec) {

//@line:13318

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], LEN(xs), xBins, yBins, ImPlotRect(), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram2D__Ljava_lang_String_2_3I_3I(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys) {

//@line:13401

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram2D__Ljava_lang_String_2_3I_3II(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jint xBins) {

//@line:13412

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], LEN(xs), xBins);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram2D__Ljava_lang_String_2_3I_3III(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jint xBins, jint yBins) {

//@line:13423

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], LEN(xs), xBins, yBins);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram2D__Ljava_lang_String_2_3I_3IIIDDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jint xBins, jint yBins, jdouble rangeMinX, jdouble rangeMinY, jdouble rangeMaxX, jdouble rangeMaxY) {

//@line:13434

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], LEN(xs), xBins, yBins, ImPlotRect(rangeMinX, rangeMinY, rangeMaxX, rangeMaxY));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram2D__Ljava_lang_String_2_3I_3IIIDDDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jint xBins, jint yBins, jdouble rangeMinX, jdouble rangeMinY, jdouble rangeMaxX, jdouble rangeMaxY, jlong spec) {

//@line:13445

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], LEN(xs), xBins, yBins, ImPlotRect(rangeMinX, rangeMinY, rangeMaxX, rangeMaxY), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram2D__Ljava_lang_String_2_3I_3IIIJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jint xBins, jint yBins, jlong spec) {

//@line:13456

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], LEN(xs), xBins, yBins, ImPlotRect(), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram2D__Ljava_lang_String_2_3J_3J(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys) {

//@line:13539

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram2D__Ljava_lang_String_2_3J_3JI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jint xBins) {

//@line:13550

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], LEN(xs), xBins);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram2D__Ljava_lang_String_2_3J_3JII(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jint xBins, jint yBins) {

//@line:13561

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], LEN(xs), xBins, yBins);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram2D__Ljava_lang_String_2_3J_3JIIDDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jint xBins, jint yBins, jdouble rangeMinX, jdouble rangeMinY, jdouble rangeMaxX, jdouble rangeMaxY) {

//@line:13572

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], LEN(xs), xBins, yBins, ImPlotRect(rangeMinX, rangeMinY, rangeMaxX, rangeMaxY));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram2D__Ljava_lang_String_2_3J_3JIIDDDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jint xBins, jint yBins, jdouble rangeMinX, jdouble rangeMinY, jdouble rangeMaxX, jdouble rangeMaxY, jlong spec) {

//@line:13583

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], LEN(xs), xBins, yBins, ImPlotRect(rangeMinX, rangeMinY, rangeMaxX, rangeMaxY), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram2D__Ljava_lang_String_2_3J_3JIIJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jint xBins, jint yBins, jlong spec) {

//@line:13594

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], LEN(xs), xBins, yBins, ImPlotRect(), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram2D__Ljava_lang_String_2_3F_3F(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys) {

//@line:13677

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram2D__Ljava_lang_String_2_3F_3FI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jint xBins) {

//@line:13688

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], LEN(xs), xBins);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram2D__Ljava_lang_String_2_3F_3FII(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jint xBins, jint yBins) {

//@line:13699

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], LEN(xs), xBins, yBins);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram2D__Ljava_lang_String_2_3F_3FIIDDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jint xBins, jint yBins, jdouble rangeMinX, jdouble rangeMinY, jdouble rangeMaxX, jdouble rangeMaxY) {

//@line:13710

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], LEN(xs), xBins, yBins, ImPlotRect(rangeMinX, rangeMinY, rangeMaxX, rangeMaxY));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram2D__Ljava_lang_String_2_3F_3FIIDDDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jint xBins, jint yBins, jdouble rangeMinX, jdouble rangeMinY, jdouble rangeMaxX, jdouble rangeMaxY, jlong spec) {

//@line:13721

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], LEN(xs), xBins, yBins, ImPlotRect(rangeMinX, rangeMinY, rangeMaxX, rangeMaxY), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram2D__Ljava_lang_String_2_3F_3FIIJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jint xBins, jint yBins, jlong spec) {

//@line:13732

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], LEN(xs), xBins, yBins, ImPlotRect(), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram2D__Ljava_lang_String_2_3D_3D(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys) {

//@line:13815

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram2D__Ljava_lang_String_2_3D_3DI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jint xBins) {

//@line:13826

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], LEN(xs), xBins);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram2D__Ljava_lang_String_2_3D_3DII(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jint xBins, jint yBins) {

//@line:13837

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], LEN(xs), xBins, yBins);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram2D__Ljava_lang_String_2_3D_3DIIDDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jint xBins, jint yBins, jdouble rangeMinX, jdouble rangeMinY, jdouble rangeMaxX, jdouble rangeMaxY) {

//@line:13848

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], LEN(xs), xBins, yBins, ImPlotRect(rangeMinX, rangeMinY, rangeMaxX, rangeMaxY));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram2D__Ljava_lang_String_2_3D_3DIIDDDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jint xBins, jint yBins, jdouble rangeMinX, jdouble rangeMinY, jdouble rangeMaxX, jdouble rangeMaxY, jlong spec) {

//@line:13859

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], LEN(xs), xBins, yBins, ImPlotRect(rangeMinX, rangeMinY, rangeMaxX, rangeMaxY), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram2D__Ljava_lang_String_2_3D_3DIIJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jint xBins, jint yBins, jlong spec) {

//@line:13870

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], LEN(xs), xBins, yBins, ImPlotRect(), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram2DV__Ljava_lang_String_2_3S_3SI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jint count) {

//@line:13953

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram2DV__Ljava_lang_String_2_3S_3SII(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jint count, jint xBins) {

//@line:13964

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], count, xBins);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram2DV__Ljava_lang_String_2_3S_3SIII(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jint count, jint xBins, jint yBins) {

//@line:13975

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], count, xBins, yBins);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram2DV__Ljava_lang_String_2_3S_3SIIIDDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jint count, jint xBins, jint yBins, jdouble rangeMinX, jdouble rangeMinY, jdouble rangeMaxX, jdouble rangeMaxY) {

//@line:13986

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], count, xBins, yBins, ImPlotRect(rangeMinX, rangeMinY, rangeMaxX, rangeMaxY));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram2DV__Ljava_lang_String_2_3S_3SIIIDDDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jint count, jint xBins, jint yBins, jdouble rangeMinX, jdouble rangeMinY, jdouble rangeMaxX, jdouble rangeMaxY, jlong spec) {

//@line:13997

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], count, xBins, yBins, ImPlotRect(rangeMinX, rangeMinY, rangeMaxX, rangeMaxY), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram2DV__Ljava_lang_String_2_3S_3SIIIJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jint count, jint xBins, jint yBins, jlong spec) {

//@line:14008

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], count, xBins, yBins, ImPlotRect(), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram2DV__Ljava_lang_String_2_3I_3II(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jint count) {

//@line:14091

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram2DV__Ljava_lang_String_2_3I_3III(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jint count, jint xBins) {

//@line:14102

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], count, xBins);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram2DV__Ljava_lang_String_2_3I_3IIII(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jint count, jint xBins, jint yBins) {

//@line:14113

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], count, xBins, yBins);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram2DV__Ljava_lang_String_2_3I_3IIIIDDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jint count, jint xBins, jint yBins, jdouble rangeMinX, jdouble rangeMinY, jdouble rangeMaxX, jdouble rangeMaxY) {

//@line:14124

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], count, xBins, yBins, ImPlotRect(rangeMinX, rangeMinY, rangeMaxX, rangeMaxY));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram2DV__Ljava_lang_String_2_3I_3IIIIDDDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jint count, jint xBins, jint yBins, jdouble rangeMinX, jdouble rangeMinY, jdouble rangeMaxX, jdouble rangeMaxY, jlong spec) {

//@line:14135

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], count, xBins, yBins, ImPlotRect(rangeMinX, rangeMinY, rangeMaxX, rangeMaxY), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram2DV__Ljava_lang_String_2_3I_3IIIIJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jint count, jint xBins, jint yBins, jlong spec) {

//@line:14146

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], count, xBins, yBins, ImPlotRect(), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram2DV__Ljava_lang_String_2_3J_3JI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jint count) {

//@line:14229

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram2DV__Ljava_lang_String_2_3J_3JII(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jint count, jint xBins) {

//@line:14240

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], count, xBins);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram2DV__Ljava_lang_String_2_3J_3JIII(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jint count, jint xBins, jint yBins) {

//@line:14251

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], count, xBins, yBins);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram2DV__Ljava_lang_String_2_3J_3JIIIDDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jint count, jint xBins, jint yBins, jdouble rangeMinX, jdouble rangeMinY, jdouble rangeMaxX, jdouble rangeMaxY) {

//@line:14262

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], count, xBins, yBins, ImPlotRect(rangeMinX, rangeMinY, rangeMaxX, rangeMaxY));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram2DV__Ljava_lang_String_2_3J_3JIIIDDDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jint count, jint xBins, jint yBins, jdouble rangeMinX, jdouble rangeMinY, jdouble rangeMaxX, jdouble rangeMaxY, jlong spec) {

//@line:14273

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], count, xBins, yBins, ImPlotRect(rangeMinX, rangeMinY, rangeMaxX, rangeMaxY), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram2DV__Ljava_lang_String_2_3J_3JIIIJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jint count, jint xBins, jint yBins, jlong spec) {

//@line:14284

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], count, xBins, yBins, ImPlotRect(), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram2DV__Ljava_lang_String_2_3F_3FI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jint count) {

//@line:14367

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram2DV__Ljava_lang_String_2_3F_3FII(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jint count, jint xBins) {

//@line:14378

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], count, xBins);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram2DV__Ljava_lang_String_2_3F_3FIII(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jint count, jint xBins, jint yBins) {

//@line:14389

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], count, xBins, yBins);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram2DV__Ljava_lang_String_2_3F_3FIIIDDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jint count, jint xBins, jint yBins, jdouble rangeMinX, jdouble rangeMinY, jdouble rangeMaxX, jdouble rangeMaxY) {

//@line:14400

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], count, xBins, yBins, ImPlotRect(rangeMinX, rangeMinY, rangeMaxX, rangeMaxY));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram2DV__Ljava_lang_String_2_3F_3FIIIDDDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jint count, jint xBins, jint yBins, jdouble rangeMinX, jdouble rangeMinY, jdouble rangeMaxX, jdouble rangeMaxY, jlong spec) {

//@line:14411

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], count, xBins, yBins, ImPlotRect(rangeMinX, rangeMinY, rangeMaxX, rangeMaxY), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram2DV__Ljava_lang_String_2_3F_3FIIIJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jint count, jint xBins, jint yBins, jlong spec) {

//@line:14422

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], count, xBins, yBins, ImPlotRect(), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram2DV__Ljava_lang_String_2_3D_3DI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jint count) {

//@line:14505

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram2DV__Ljava_lang_String_2_3D_3DII(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jint count, jint xBins) {

//@line:14516

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], count, xBins);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram2DV__Ljava_lang_String_2_3D_3DIII(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jint count, jint xBins, jint yBins) {

//@line:14527

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], count, xBins, yBins);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram2DV__Ljava_lang_String_2_3D_3DIIIDDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jint count, jint xBins, jint yBins, jdouble rangeMinX, jdouble rangeMinY, jdouble rangeMaxX, jdouble rangeMaxY) {

//@line:14538

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], count, xBins, yBins, ImPlotRect(rangeMinX, rangeMinY, rangeMaxX, rangeMaxY));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram2DV__Ljava_lang_String_2_3D_3DIIIDDDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jint count, jint xBins, jint yBins, jdouble rangeMinX, jdouble rangeMinY, jdouble rangeMaxX, jdouble rangeMaxY, jlong spec) {

//@line:14549

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], count, xBins, yBins, ImPlotRect(rangeMinX, rangeMinY, rangeMaxX, rangeMaxY), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_extension_implot_ImPlot_nPlotHistogram2DV__Ljava_lang_String_2_3D_3DIIIJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jint count, jint xBins, jint yBins, jlong spec) {

//@line:14560

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], count, xBins, yBins, ImPlotRect(), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotDigital__Ljava_lang_String_2_3S_3S(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys) {

//@line:14585

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotDigital(labelId, &xs[0], &ys[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotDigital__Ljava_lang_String_2_3S_3SJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jlong spec) {

//@line:14595

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotDigital(labelId, &xs[0], &ys[0], LEN(xs), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotDigital__Ljava_lang_String_2_3I_3I(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys) {

//@line:14619

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotDigital(labelId, &xs[0], &ys[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotDigital__Ljava_lang_String_2_3I_3IJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jlong spec) {

//@line:14629

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotDigital(labelId, &xs[0], &ys[0], LEN(xs), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotDigital__Ljava_lang_String_2_3J_3J(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys) {

//@line:14653

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotDigital(labelId, &xs[0], &ys[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotDigital__Ljava_lang_String_2_3J_3JJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jlong spec) {

//@line:14663

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotDigital(labelId, &xs[0], &ys[0], LEN(xs), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotDigital__Ljava_lang_String_2_3F_3F(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys) {

//@line:14687

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotDigital(labelId, &xs[0], &ys[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotDigital__Ljava_lang_String_2_3F_3FJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jlong spec) {

//@line:14697

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotDigital(labelId, &xs[0], &ys[0], LEN(xs), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotDigital__Ljava_lang_String_2_3D_3D(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys) {

//@line:14721

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotDigital(labelId, &xs[0], &ys[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotDigital__Ljava_lang_String_2_3D_3DJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jlong spec) {

//@line:14731

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotDigital(labelId, &xs[0], &ys[0], LEN(xs), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotDigitalV__Ljava_lang_String_2_3S_3SI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jint count) {

//@line:14755

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotDigital(labelId, &xs[0], &ys[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotDigitalV__Ljava_lang_String_2_3S_3SIJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jint count, jlong spec) {

//@line:14765

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotDigital(labelId, &xs[0], &ys[0], count, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotDigitalV__Ljava_lang_String_2_3I_3II(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jint count) {

//@line:14789

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotDigital(labelId, &xs[0], &ys[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotDigitalV__Ljava_lang_String_2_3I_3IIJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jint count, jlong spec) {

//@line:14799

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotDigital(labelId, &xs[0], &ys[0], count, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotDigitalV__Ljava_lang_String_2_3J_3JI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jint count) {

//@line:14823

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotDigital(labelId, &xs[0], &ys[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotDigitalV__Ljava_lang_String_2_3J_3JIJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jint count, jlong spec) {

//@line:14833

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotDigital(labelId, &xs[0], &ys[0], count, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotDigitalV__Ljava_lang_String_2_3F_3FI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jint count) {

//@line:14857

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotDigital(labelId, &xs[0], &ys[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotDigitalV__Ljava_lang_String_2_3F_3FIJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jint count, jlong spec) {

//@line:14867

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotDigital(labelId, &xs[0], &ys[0], count, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotDigitalV__Ljava_lang_String_2_3D_3DI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jint count) {

//@line:14891

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotDigital(labelId, &xs[0], &ys[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotDigitalV__Ljava_lang_String_2_3D_3DIJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jint count, jlong spec) {

//@line:14901

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotDigital(labelId, &xs[0], &ys[0], count, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotImage__Ljava_lang_String_2JDDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jlong userTextureId, jdouble boundsMinX, jdouble boundsMinY, jdouble boundsMaxX, jdouble boundsMaxY) {

//@line:15009

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        ImPlot::PlotImage(labelId, (ImTextureID)(uintptr_t)userTextureId, ImPlotPoint(boundsMinX, boundsMinY), ImPlotPoint(boundsMaxX, boundsMaxY));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotImage__Ljava_lang_String_2JDDDDFF(JNIEnv* env, jclass clazz, jstring obj_labelId, jlong userTextureId, jdouble boundsMinX, jdouble boundsMinY, jdouble boundsMaxX, jdouble boundsMaxY, jfloat uv0X, jfloat uv0Y) {

//@line:15015

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        ImVec2 uv0 = ImVec2(uv0X, uv0Y);
        ImPlot::PlotImage(labelId, (ImTextureID)(uintptr_t)userTextureId, ImPlotPoint(boundsMinX, boundsMinY), ImPlotPoint(boundsMaxX, boundsMaxY), uv0);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotImage__Ljava_lang_String_2JDDDDFFFF(JNIEnv* env, jclass clazz, jstring obj_labelId, jlong userTextureId, jdouble boundsMinX, jdouble boundsMinY, jdouble boundsMaxX, jdouble boundsMaxY, jfloat uv0X, jfloat uv0Y, jfloat uv1X, jfloat uv1Y) {

//@line:15022

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        ImVec2 uv0 = ImVec2(uv0X, uv0Y);
        ImVec2 uv1 = ImVec2(uv1X, uv1Y);
        ImPlot::PlotImage(labelId, (ImTextureID)(uintptr_t)userTextureId, ImPlotPoint(boundsMinX, boundsMinY), ImPlotPoint(boundsMaxX, boundsMaxY), uv0, uv1);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotImage__Ljava_lang_String_2JDDDDFFFFFFFF(JNIEnv* env, jclass clazz, jstring obj_labelId, jlong userTextureId, jdouble boundsMinX, jdouble boundsMinY, jdouble boundsMaxX, jdouble boundsMaxY, jfloat uv0X, jfloat uv0Y, jfloat uv1X, jfloat uv1Y, jfloat tintColX, jfloat tintColY, jfloat tintColZ, jfloat tintColW) {

//@line:15030

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        ImVec2 uv0 = ImVec2(uv0X, uv0Y);
        ImVec2 uv1 = ImVec2(uv1X, uv1Y);
        ImVec4 tintCol = ImVec4(tintColX, tintColY, tintColZ, tintColW);
        ImPlot::PlotImage(labelId, (ImTextureID)(uintptr_t)userTextureId, ImPlotPoint(boundsMinX, boundsMinY), ImPlotPoint(boundsMaxX, boundsMaxY), uv0, uv1, tintCol);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotImage__Ljava_lang_String_2JDDDDFFFFFFFFJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jlong userTextureId, jdouble boundsMinX, jdouble boundsMinY, jdouble boundsMaxX, jdouble boundsMaxY, jfloat uv0X, jfloat uv0Y, jfloat uv1X, jfloat uv1Y, jfloat tintColX, jfloat tintColY, jfloat tintColZ, jfloat tintColW, jlong spec) {

//@line:15039

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        ImVec2 uv0 = ImVec2(uv0X, uv0Y);
        ImVec2 uv1 = ImVec2(uv1X, uv1Y);
        ImVec4 tintCol = ImVec4(tintColX, tintColY, tintColZ, tintColW);
        ImPlot::PlotImage(labelId, (ImTextureID)(uintptr_t)userTextureId, ImPlotPoint(boundsMinX, boundsMinY), ImPlotPoint(boundsMaxX, boundsMaxY), uv0, uv1, tintCol, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotText__Ljava_lang_String_2DD(JNIEnv* env, jclass clazz, jstring obj_text, jdouble x, jdouble y) {

//@line:15090

        auto text = obj_text == NULL ? NULL : (char*)env->GetStringUTFChars(obj_text, JNI_FALSE);
        ImPlot::PlotText(text, x, y);
        if (text != NULL) env->ReleaseStringUTFChars(obj_text, text);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotText__Ljava_lang_String_2DDFF(JNIEnv* env, jclass clazz, jstring obj_text, jdouble x, jdouble y, jfloat pixOffsetX, jfloat pixOffsetY) {

//@line:15096

        auto text = obj_text == NULL ? NULL : (char*)env->GetStringUTFChars(obj_text, JNI_FALSE);
        ImVec2 pixOffset = ImVec2(pixOffsetX, pixOffsetY);
        ImPlot::PlotText(text, x, y, pixOffset);
        if (text != NULL) env->ReleaseStringUTFChars(obj_text, text);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotText__Ljava_lang_String_2DDFFJ(JNIEnv* env, jclass clazz, jstring obj_text, jdouble x, jdouble y, jfloat pixOffsetX, jfloat pixOffsetY, jlong spec) {

//@line:15103

        auto text = obj_text == NULL ? NULL : (char*)env->GetStringUTFChars(obj_text, JNI_FALSE);
        ImVec2 pixOffset = ImVec2(pixOffsetX, pixOffsetY);
        ImPlot::PlotText(text, x, y, pixOffset, *reinterpret_cast<ImPlotSpec*>(spec));
        if (text != NULL) env->ReleaseStringUTFChars(obj_text, text);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotText__Ljava_lang_String_2DDJ(JNIEnv* env, jclass clazz, jstring obj_text, jdouble x, jdouble y, jlong spec) {

//@line:15110

        auto text = obj_text == NULL ? NULL : (char*)env->GetStringUTFChars(obj_text, JNI_FALSE);
        ImPlot::PlotText(text, x, y, ImVec2(0,0), *reinterpret_cast<ImPlotSpec*>(spec));
        if (text != NULL) env->ReleaseStringUTFChars(obj_text, text);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotDummy__Ljava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_labelID) {

//@line:15130

        auto labelID = obj_labelID == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelID, JNI_FALSE);
        ImPlot::PlotDummy(labelID);
        if (labelID != NULL) env->ReleaseStringUTFChars(obj_labelID, labelID);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotDummy__Ljava_lang_String_2J(JNIEnv* env, jclass clazz, jstring obj_labelID, jlong spec) {

//@line:15136

        auto labelID = obj_labelID == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelID, JNI_FALSE);
        ImPlot::PlotDummy(labelID, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelID != NULL) env->ReleaseStringUTFChars(obj_labelID, labelID);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBubbles__Ljava_lang_String_2_3S_3S(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jshortArray obj_szs) {

//@line:15172

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto szs = obj_szs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_szs, JNI_FALSE);
        ImPlot::PlotBubbles(labelId, &values[0], &szs[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (szs != NULL) env->ReleasePrimitiveArrayCritical(obj_szs, szs, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBubbles__Ljava_lang_String_2_3S_3SD(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jshortArray obj_szs, jdouble xscale) {

//@line:15182

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto szs = obj_szs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_szs, JNI_FALSE);
        ImPlot::PlotBubbles(labelId, &values[0], &szs[0], LEN(values), xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (szs != NULL) env->ReleasePrimitiveArrayCritical(obj_szs, szs, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBubbles__Ljava_lang_String_2_3S_3SDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jshortArray obj_szs, jdouble xscale, jdouble xstart) {

//@line:15192

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto szs = obj_szs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_szs, JNI_FALSE);
        ImPlot::PlotBubbles(labelId, &values[0], &szs[0], LEN(values), xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (szs != NULL) env->ReleasePrimitiveArrayCritical(obj_szs, szs, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBubbles__Ljava_lang_String_2_3S_3SDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jshortArray obj_szs, jdouble xscale, jdouble xstart, jlong spec) {

//@line:15202

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto szs = obj_szs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_szs, JNI_FALSE);
        ImPlot::PlotBubbles(labelId, &values[0], &szs[0], LEN(values), xscale, xstart, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (szs != NULL) env->ReleasePrimitiveArrayCritical(obj_szs, szs, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBubbles__Ljava_lang_String_2_3I_3I(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jintArray obj_szs) {

//@line:15240

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto szs = obj_szs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_szs, JNI_FALSE);
        ImPlot::PlotBubbles(labelId, &values[0], &szs[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (szs != NULL) env->ReleasePrimitiveArrayCritical(obj_szs, szs, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBubbles__Ljava_lang_String_2_3I_3ID(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jintArray obj_szs, jdouble xscale) {

//@line:15250

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto szs = obj_szs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_szs, JNI_FALSE);
        ImPlot::PlotBubbles(labelId, &values[0], &szs[0], LEN(values), xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (szs != NULL) env->ReleasePrimitiveArrayCritical(obj_szs, szs, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBubbles__Ljava_lang_String_2_3I_3IDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jintArray obj_szs, jdouble xscale, jdouble xstart) {

//@line:15260

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto szs = obj_szs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_szs, JNI_FALSE);
        ImPlot::PlotBubbles(labelId, &values[0], &szs[0], LEN(values), xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (szs != NULL) env->ReleasePrimitiveArrayCritical(obj_szs, szs, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBubbles__Ljava_lang_String_2_3I_3IDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jintArray obj_szs, jdouble xscale, jdouble xstart, jlong spec) {

//@line:15270

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto szs = obj_szs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_szs, JNI_FALSE);
        ImPlot::PlotBubbles(labelId, &values[0], &szs[0], LEN(values), xscale, xstart, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (szs != NULL) env->ReleasePrimitiveArrayCritical(obj_szs, szs, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBubbles__Ljava_lang_String_2_3J_3J(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jlongArray obj_szs) {

//@line:15308

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto szs = obj_szs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_szs, JNI_FALSE);
        ImPlot::PlotBubbles(labelId, &values[0], &szs[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (szs != NULL) env->ReleasePrimitiveArrayCritical(obj_szs, szs, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBubbles__Ljava_lang_String_2_3J_3JD(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jlongArray obj_szs, jdouble xscale) {

//@line:15318

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto szs = obj_szs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_szs, JNI_FALSE);
        ImPlot::PlotBubbles(labelId, &values[0], &szs[0], LEN(values), xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (szs != NULL) env->ReleasePrimitiveArrayCritical(obj_szs, szs, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBubbles__Ljava_lang_String_2_3J_3JDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jlongArray obj_szs, jdouble xscale, jdouble xstart) {

//@line:15328

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto szs = obj_szs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_szs, JNI_FALSE);
        ImPlot::PlotBubbles(labelId, &values[0], &szs[0], LEN(values), xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (szs != NULL) env->ReleasePrimitiveArrayCritical(obj_szs, szs, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBubbles__Ljava_lang_String_2_3J_3JDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jlongArray obj_szs, jdouble xscale, jdouble xstart, jlong spec) {

//@line:15338

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto szs = obj_szs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_szs, JNI_FALSE);
        ImPlot::PlotBubbles(labelId, &values[0], &szs[0], LEN(values), xscale, xstart, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (szs != NULL) env->ReleasePrimitiveArrayCritical(obj_szs, szs, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBubbles__Ljava_lang_String_2_3F_3F(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jfloatArray obj_szs) {

//@line:15376

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto szs = obj_szs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_szs, JNI_FALSE);
        ImPlot::PlotBubbles(labelId, &values[0], &szs[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (szs != NULL) env->ReleasePrimitiveArrayCritical(obj_szs, szs, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBubbles__Ljava_lang_String_2_3F_3FD(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jfloatArray obj_szs, jdouble xscale) {

//@line:15386

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto szs = obj_szs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_szs, JNI_FALSE);
        ImPlot::PlotBubbles(labelId, &values[0], &szs[0], LEN(values), xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (szs != NULL) env->ReleasePrimitiveArrayCritical(obj_szs, szs, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBubbles__Ljava_lang_String_2_3F_3FDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jfloatArray obj_szs, jdouble xscale, jdouble xstart) {

//@line:15396

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto szs = obj_szs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_szs, JNI_FALSE);
        ImPlot::PlotBubbles(labelId, &values[0], &szs[0], LEN(values), xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (szs != NULL) env->ReleasePrimitiveArrayCritical(obj_szs, szs, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBubbles__Ljava_lang_String_2_3F_3FDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jfloatArray obj_szs, jdouble xscale, jdouble xstart, jlong spec) {

//@line:15406

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto szs = obj_szs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_szs, JNI_FALSE);
        ImPlot::PlotBubbles(labelId, &values[0], &szs[0], LEN(values), xscale, xstart, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (szs != NULL) env->ReleasePrimitiveArrayCritical(obj_szs, szs, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBubbles__Ljava_lang_String_2_3D_3D(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jdoubleArray obj_szs) {

//@line:15444

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto szs = obj_szs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_szs, JNI_FALSE);
        ImPlot::PlotBubbles(labelId, &values[0], &szs[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (szs != NULL) env->ReleasePrimitiveArrayCritical(obj_szs, szs, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBubbles__Ljava_lang_String_2_3D_3DD(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jdoubleArray obj_szs, jdouble xscale) {

//@line:15454

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto szs = obj_szs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_szs, JNI_FALSE);
        ImPlot::PlotBubbles(labelId, &values[0], &szs[0], LEN(values), xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (szs != NULL) env->ReleasePrimitiveArrayCritical(obj_szs, szs, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBubbles__Ljava_lang_String_2_3D_3DDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jdoubleArray obj_szs, jdouble xscale, jdouble xstart) {

//@line:15464

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto szs = obj_szs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_szs, JNI_FALSE);
        ImPlot::PlotBubbles(labelId, &values[0], &szs[0], LEN(values), xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (szs != NULL) env->ReleasePrimitiveArrayCritical(obj_szs, szs, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBubbles__Ljava_lang_String_2_3D_3DDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jdoubleArray obj_szs, jdouble xscale, jdouble xstart, jlong spec) {

//@line:15474

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto szs = obj_szs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_szs, JNI_FALSE);
        ImPlot::PlotBubbles(labelId, &values[0], &szs[0], LEN(values), xscale, xstart, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (szs != NULL) env->ReleasePrimitiveArrayCritical(obj_szs, szs, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBubblesV__Ljava_lang_String_2_3S_3SI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jshortArray obj_szs, jint count) {

//@line:15512

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto szs = obj_szs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_szs, JNI_FALSE);
        ImPlot::PlotBubbles(labelId, &values[0], &szs[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (szs != NULL) env->ReleasePrimitiveArrayCritical(obj_szs, szs, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBubblesV__Ljava_lang_String_2_3S_3SID(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jshortArray obj_szs, jint count, jdouble xscale) {

//@line:15522

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto szs = obj_szs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_szs, JNI_FALSE);
        ImPlot::PlotBubbles(labelId, &values[0], &szs[0], count, xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (szs != NULL) env->ReleasePrimitiveArrayCritical(obj_szs, szs, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBubblesV__Ljava_lang_String_2_3S_3SIDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jshortArray obj_szs, jint count, jdouble xscale, jdouble xstart) {

//@line:15532

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto szs = obj_szs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_szs, JNI_FALSE);
        ImPlot::PlotBubbles(labelId, &values[0], &szs[0], count, xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (szs != NULL) env->ReleasePrimitiveArrayCritical(obj_szs, szs, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBubblesV__Ljava_lang_String_2_3S_3SIDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jshortArray obj_szs, jint count, jdouble xscale, jdouble xstart, jlong spec) {

//@line:15542

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto szs = obj_szs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_szs, JNI_FALSE);
        ImPlot::PlotBubbles(labelId, &values[0], &szs[0], count, xscale, xstart, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (szs != NULL) env->ReleasePrimitiveArrayCritical(obj_szs, szs, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBubblesV__Ljava_lang_String_2_3I_3II(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jintArray obj_szs, jint count) {

//@line:15580

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto szs = obj_szs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_szs, JNI_FALSE);
        ImPlot::PlotBubbles(labelId, &values[0], &szs[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (szs != NULL) env->ReleasePrimitiveArrayCritical(obj_szs, szs, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBubblesV__Ljava_lang_String_2_3I_3IID(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jintArray obj_szs, jint count, jdouble xscale) {

//@line:15590

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto szs = obj_szs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_szs, JNI_FALSE);
        ImPlot::PlotBubbles(labelId, &values[0], &szs[0], count, xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (szs != NULL) env->ReleasePrimitiveArrayCritical(obj_szs, szs, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBubblesV__Ljava_lang_String_2_3I_3IIDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jintArray obj_szs, jint count, jdouble xscale, jdouble xstart) {

//@line:15600

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto szs = obj_szs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_szs, JNI_FALSE);
        ImPlot::PlotBubbles(labelId, &values[0], &szs[0], count, xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (szs != NULL) env->ReleasePrimitiveArrayCritical(obj_szs, szs, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBubblesV__Ljava_lang_String_2_3I_3IIDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jintArray obj_szs, jint count, jdouble xscale, jdouble xstart, jlong spec) {

//@line:15610

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto szs = obj_szs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_szs, JNI_FALSE);
        ImPlot::PlotBubbles(labelId, &values[0], &szs[0], count, xscale, xstart, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (szs != NULL) env->ReleasePrimitiveArrayCritical(obj_szs, szs, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBubblesV__Ljava_lang_String_2_3J_3JI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jlongArray obj_szs, jint count) {

//@line:15648

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto szs = obj_szs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_szs, JNI_FALSE);
        ImPlot::PlotBubbles(labelId, &values[0], &szs[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (szs != NULL) env->ReleasePrimitiveArrayCritical(obj_szs, szs, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBubblesV__Ljava_lang_String_2_3J_3JID(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jlongArray obj_szs, jint count, jdouble xscale) {

//@line:15658

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto szs = obj_szs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_szs, JNI_FALSE);
        ImPlot::PlotBubbles(labelId, &values[0], &szs[0], count, xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (szs != NULL) env->ReleasePrimitiveArrayCritical(obj_szs, szs, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBubblesV__Ljava_lang_String_2_3J_3JIDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jlongArray obj_szs, jint count, jdouble xscale, jdouble xstart) {

//@line:15668

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto szs = obj_szs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_szs, JNI_FALSE);
        ImPlot::PlotBubbles(labelId, &values[0], &szs[0], count, xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (szs != NULL) env->ReleasePrimitiveArrayCritical(obj_szs, szs, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBubblesV__Ljava_lang_String_2_3J_3JIDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jlongArray obj_szs, jint count, jdouble xscale, jdouble xstart, jlong spec) {

//@line:15678

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto szs = obj_szs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_szs, JNI_FALSE);
        ImPlot::PlotBubbles(labelId, &values[0], &szs[0], count, xscale, xstart, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (szs != NULL) env->ReleasePrimitiveArrayCritical(obj_szs, szs, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBubblesV__Ljava_lang_String_2_3F_3FI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jfloatArray obj_szs, jint count) {

//@line:15716

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto szs = obj_szs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_szs, JNI_FALSE);
        ImPlot::PlotBubbles(labelId, &values[0], &szs[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (szs != NULL) env->ReleasePrimitiveArrayCritical(obj_szs, szs, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBubblesV__Ljava_lang_String_2_3F_3FID(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jfloatArray obj_szs, jint count, jdouble xscale) {

//@line:15726

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto szs = obj_szs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_szs, JNI_FALSE);
        ImPlot::PlotBubbles(labelId, &values[0], &szs[0], count, xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (szs != NULL) env->ReleasePrimitiveArrayCritical(obj_szs, szs, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBubblesV__Ljava_lang_String_2_3F_3FIDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jfloatArray obj_szs, jint count, jdouble xscale, jdouble xstart) {

//@line:15736

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto szs = obj_szs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_szs, JNI_FALSE);
        ImPlot::PlotBubbles(labelId, &values[0], &szs[0], count, xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (szs != NULL) env->ReleasePrimitiveArrayCritical(obj_szs, szs, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBubblesV__Ljava_lang_String_2_3F_3FIDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jfloatArray obj_szs, jint count, jdouble xscale, jdouble xstart, jlong spec) {

//@line:15746

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto szs = obj_szs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_szs, JNI_FALSE);
        ImPlot::PlotBubbles(labelId, &values[0], &szs[0], count, xscale, xstart, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (szs != NULL) env->ReleasePrimitiveArrayCritical(obj_szs, szs, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBubblesV__Ljava_lang_String_2_3D_3DI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jdoubleArray obj_szs, jint count) {

//@line:15784

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto szs = obj_szs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_szs, JNI_FALSE);
        ImPlot::PlotBubbles(labelId, &values[0], &szs[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (szs != NULL) env->ReleasePrimitiveArrayCritical(obj_szs, szs, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBubblesV__Ljava_lang_String_2_3D_3DID(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jdoubleArray obj_szs, jint count, jdouble xscale) {

//@line:15794

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto szs = obj_szs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_szs, JNI_FALSE);
        ImPlot::PlotBubbles(labelId, &values[0], &szs[0], count, xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (szs != NULL) env->ReleasePrimitiveArrayCritical(obj_szs, szs, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBubblesV__Ljava_lang_String_2_3D_3DIDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jdoubleArray obj_szs, jint count, jdouble xscale, jdouble xstart) {

//@line:15804

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto szs = obj_szs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_szs, JNI_FALSE);
        ImPlot::PlotBubbles(labelId, &values[0], &szs[0], count, xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (szs != NULL) env->ReleasePrimitiveArrayCritical(obj_szs, szs, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBubblesV__Ljava_lang_String_2_3D_3DIDDJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jdoubleArray obj_szs, jint count, jdouble xscale, jdouble xstart, jlong spec) {

//@line:15814

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto szs = obj_szs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_szs, JNI_FALSE);
        ImPlot::PlotBubbles(labelId, &values[0], &szs[0], count, xscale, xstart, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (szs != NULL) env->ReleasePrimitiveArrayCritical(obj_szs, szs, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBubbles__Ljava_lang_String_2_3S_3S_3S(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jshortArray obj_szs) {

//@line:15840

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto szs = obj_szs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_szs, JNI_FALSE);
        ImPlot::PlotBubbles(labelId, &xs[0], &ys[0], &szs[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (szs != NULL) env->ReleasePrimitiveArrayCritical(obj_szs, szs, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBubbles__Ljava_lang_String_2_3S_3S_3SJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jshortArray obj_szs, jlong spec) {

//@line:15852

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto szs = obj_szs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_szs, JNI_FALSE);
        ImPlot::PlotBubbles(labelId, &xs[0], &ys[0], &szs[0], LEN(xs), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (szs != NULL) env->ReleasePrimitiveArrayCritical(obj_szs, szs, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBubbles__Ljava_lang_String_2_3I_3I_3I(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jintArray obj_szs) {

//@line:15878

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto szs = obj_szs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_szs, JNI_FALSE);
        ImPlot::PlotBubbles(labelId, &xs[0], &ys[0], &szs[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (szs != NULL) env->ReleasePrimitiveArrayCritical(obj_szs, szs, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBubbles__Ljava_lang_String_2_3I_3I_3IJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jintArray obj_szs, jlong spec) {

//@line:15890

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto szs = obj_szs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_szs, JNI_FALSE);
        ImPlot::PlotBubbles(labelId, &xs[0], &ys[0], &szs[0], LEN(xs), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (szs != NULL) env->ReleasePrimitiveArrayCritical(obj_szs, szs, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBubbles__Ljava_lang_String_2_3J_3J_3J(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jlongArray obj_szs) {

//@line:15916

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto szs = obj_szs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_szs, JNI_FALSE);
        ImPlot::PlotBubbles(labelId, &xs[0], &ys[0], &szs[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (szs != NULL) env->ReleasePrimitiveArrayCritical(obj_szs, szs, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBubbles__Ljava_lang_String_2_3J_3J_3JJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jlongArray obj_szs, jlong spec) {

//@line:15928

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto szs = obj_szs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_szs, JNI_FALSE);
        ImPlot::PlotBubbles(labelId, &xs[0], &ys[0], &szs[0], LEN(xs), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (szs != NULL) env->ReleasePrimitiveArrayCritical(obj_szs, szs, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBubbles__Ljava_lang_String_2_3F_3F_3F(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jfloatArray obj_szs) {

//@line:15954

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto szs = obj_szs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_szs, JNI_FALSE);
        ImPlot::PlotBubbles(labelId, &xs[0], &ys[0], &szs[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (szs != NULL) env->ReleasePrimitiveArrayCritical(obj_szs, szs, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBubbles__Ljava_lang_String_2_3F_3F_3FJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jfloatArray obj_szs, jlong spec) {

//@line:15966

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto szs = obj_szs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_szs, JNI_FALSE);
        ImPlot::PlotBubbles(labelId, &xs[0], &ys[0], &szs[0], LEN(xs), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (szs != NULL) env->ReleasePrimitiveArrayCritical(obj_szs, szs, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBubbles__Ljava_lang_String_2_3D_3D_3D(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jdoubleArray obj_szs) {

//@line:15992

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto szs = obj_szs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_szs, JNI_FALSE);
        ImPlot::PlotBubbles(labelId, &xs[0], &ys[0], &szs[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (szs != NULL) env->ReleasePrimitiveArrayCritical(obj_szs, szs, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBubbles__Ljava_lang_String_2_3D_3D_3DJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jdoubleArray obj_szs, jlong spec) {

//@line:16004

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto szs = obj_szs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_szs, JNI_FALSE);
        ImPlot::PlotBubbles(labelId, &xs[0], &ys[0], &szs[0], LEN(xs), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (szs != NULL) env->ReleasePrimitiveArrayCritical(obj_szs, szs, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBubblesV__Ljava_lang_String_2_3S_3S_3SI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jshortArray obj_szs, jint count) {

//@line:16030

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto szs = obj_szs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_szs, JNI_FALSE);
        ImPlot::PlotBubbles(labelId, &xs[0], &ys[0], &szs[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (szs != NULL) env->ReleasePrimitiveArrayCritical(obj_szs, szs, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBubblesV__Ljava_lang_String_2_3S_3S_3SIJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jshortArray obj_szs, jint count, jlong spec) {

//@line:16042

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto szs = obj_szs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_szs, JNI_FALSE);
        ImPlot::PlotBubbles(labelId, &xs[0], &ys[0], &szs[0], count, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (szs != NULL) env->ReleasePrimitiveArrayCritical(obj_szs, szs, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBubblesV__Ljava_lang_String_2_3I_3I_3II(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jintArray obj_szs, jint count) {

//@line:16068

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto szs = obj_szs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_szs, JNI_FALSE);
        ImPlot::PlotBubbles(labelId, &xs[0], &ys[0], &szs[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (szs != NULL) env->ReleasePrimitiveArrayCritical(obj_szs, szs, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBubblesV__Ljava_lang_String_2_3I_3I_3IIJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jintArray obj_szs, jint count, jlong spec) {

//@line:16080

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto szs = obj_szs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_szs, JNI_FALSE);
        ImPlot::PlotBubbles(labelId, &xs[0], &ys[0], &szs[0], count, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (szs != NULL) env->ReleasePrimitiveArrayCritical(obj_szs, szs, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBubblesV__Ljava_lang_String_2_3J_3J_3JI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jlongArray obj_szs, jint count) {

//@line:16106

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto szs = obj_szs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_szs, JNI_FALSE);
        ImPlot::PlotBubbles(labelId, &xs[0], &ys[0], &szs[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (szs != NULL) env->ReleasePrimitiveArrayCritical(obj_szs, szs, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBubblesV__Ljava_lang_String_2_3J_3J_3JIJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jlongArray obj_szs, jint count, jlong spec) {

//@line:16118

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto szs = obj_szs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_szs, JNI_FALSE);
        ImPlot::PlotBubbles(labelId, &xs[0], &ys[0], &szs[0], count, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (szs != NULL) env->ReleasePrimitiveArrayCritical(obj_szs, szs, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBubblesV__Ljava_lang_String_2_3F_3F_3FI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jfloatArray obj_szs, jint count) {

//@line:16144

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto szs = obj_szs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_szs, JNI_FALSE);
        ImPlot::PlotBubbles(labelId, &xs[0], &ys[0], &szs[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (szs != NULL) env->ReleasePrimitiveArrayCritical(obj_szs, szs, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBubblesV__Ljava_lang_String_2_3F_3F_3FIJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jfloatArray obj_szs, jint count, jlong spec) {

//@line:16156

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto szs = obj_szs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_szs, JNI_FALSE);
        ImPlot::PlotBubbles(labelId, &xs[0], &ys[0], &szs[0], count, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (szs != NULL) env->ReleasePrimitiveArrayCritical(obj_szs, szs, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBubblesV__Ljava_lang_String_2_3D_3D_3DI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jdoubleArray obj_szs, jint count) {

//@line:16182

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto szs = obj_szs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_szs, JNI_FALSE);
        ImPlot::PlotBubbles(labelId, &xs[0], &ys[0], &szs[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (szs != NULL) env->ReleasePrimitiveArrayCritical(obj_szs, szs, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotBubblesV__Ljava_lang_String_2_3D_3D_3DIJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jdoubleArray obj_szs, jint count, jlong spec) {

//@line:16194

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto szs = obj_szs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_szs, JNI_FALSE);
        ImPlot::PlotBubbles(labelId, &xs[0], &ys[0], &szs[0], count, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (szs != NULL) env->ReleasePrimitiveArrayCritical(obj_szs, szs, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotPolygon__Ljava_lang_String_2_3S_3S(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys) {

//@line:16220

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotPolygon(labelId, &xs[0], &ys[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotPolygon__Ljava_lang_String_2_3S_3SJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jlong spec) {

//@line:16230

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotPolygon(labelId, &xs[0], &ys[0], LEN(xs), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotPolygon__Ljava_lang_String_2_3I_3I(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys) {

//@line:16254

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotPolygon(labelId, &xs[0], &ys[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotPolygon__Ljava_lang_String_2_3I_3IJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jlong spec) {

//@line:16264

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotPolygon(labelId, &xs[0], &ys[0], LEN(xs), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotPolygon__Ljava_lang_String_2_3J_3J(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys) {

//@line:16288

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotPolygon(labelId, &xs[0], &ys[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotPolygon__Ljava_lang_String_2_3J_3JJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jlong spec) {

//@line:16298

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotPolygon(labelId, &xs[0], &ys[0], LEN(xs), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotPolygon__Ljava_lang_String_2_3F_3F(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys) {

//@line:16322

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotPolygon(labelId, &xs[0], &ys[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotPolygon__Ljava_lang_String_2_3F_3FJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jlong spec) {

//@line:16332

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotPolygon(labelId, &xs[0], &ys[0], LEN(xs), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotPolygon__Ljava_lang_String_2_3D_3D(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys) {

//@line:16356

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotPolygon(labelId, &xs[0], &ys[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotPolygon__Ljava_lang_String_2_3D_3DJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jlong spec) {

//@line:16366

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotPolygon(labelId, &xs[0], &ys[0], LEN(xs), *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotPolygonV__Ljava_lang_String_2_3S_3SI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jint count) {

//@line:16390

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotPolygon(labelId, &xs[0], &ys[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotPolygonV__Ljava_lang_String_2_3S_3SIJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jint count, jlong spec) {

//@line:16400

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotPolygon(labelId, &xs[0], &ys[0], count, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotPolygonV__Ljava_lang_String_2_3I_3II(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jint count) {

//@line:16424

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotPolygon(labelId, &xs[0], &ys[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotPolygonV__Ljava_lang_String_2_3I_3IIJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jint count, jlong spec) {

//@line:16434

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotPolygon(labelId, &xs[0], &ys[0], count, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotPolygonV__Ljava_lang_String_2_3J_3JI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jint count) {

//@line:16458

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotPolygon(labelId, &xs[0], &ys[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotPolygonV__Ljava_lang_String_2_3J_3JIJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jint count, jlong spec) {

//@line:16468

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotPolygon(labelId, &xs[0], &ys[0], count, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotPolygonV__Ljava_lang_String_2_3F_3FI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jint count) {

//@line:16492

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotPolygon(labelId, &xs[0], &ys[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotPolygonV__Ljava_lang_String_2_3F_3FIJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jint count, jlong spec) {

//@line:16502

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotPolygon(labelId, &xs[0], &ys[0], count, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotPolygonV__Ljava_lang_String_2_3D_3DI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jint count) {

//@line:16526

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotPolygon(labelId, &xs[0], &ys[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotPolygonV__Ljava_lang_String_2_3D_3DIJ(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jint count, jlong spec) {

//@line:16536

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotPolygon(labelId, &xs[0], &ys[0], count, *reinterpret_cast<ImPlotSpec*>(spec));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}


//@line:16546

        #undef LEN
        #undef long
     JNIEXPORT jboolean JNICALL Java_imgui_extension_implot_ImPlot_nDragPoint__I_3D_3DFFFF(JNIEnv* env, jclass clazz, jint id, jdoubleArray obj_x, jdoubleArray obj_y, jfloat colX, jfloat colY, jfloat colZ, jfloat colW) {

//@line:16615

        auto x = obj_x == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_x, JNI_FALSE);
        auto y = obj_y == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_y, JNI_FALSE);
        ImVec4 col = ImVec4(colX, colY, colZ, colW);
        auto _result = ImPlot::DragPoint(id, (x != NULL ? &x[0] : NULL), (y != NULL ? &y[0] : NULL), col);
        if (x != NULL) env->ReleasePrimitiveArrayCritical(obj_x, x, JNI_FALSE);
        if (y != NULL) env->ReleasePrimitiveArrayCritical(obj_y, y, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_implot_ImPlot_nDragPoint__I_3D_3DFFFFF(JNIEnv* env, jclass clazz, jint id, jdoubleArray obj_x, jdoubleArray obj_y, jfloat colX, jfloat colY, jfloat colZ, jfloat colW, jfloat size) {

//@line:16625

        auto x = obj_x == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_x, JNI_FALSE);
        auto y = obj_y == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_y, JNI_FALSE);
        ImVec4 col = ImVec4(colX, colY, colZ, colW);
        auto _result = ImPlot::DragPoint(id, (x != NULL ? &x[0] : NULL), (y != NULL ? &y[0] : NULL), col, size);
        if (x != NULL) env->ReleasePrimitiveArrayCritical(obj_x, x, JNI_FALSE);
        if (y != NULL) env->ReleasePrimitiveArrayCritical(obj_y, y, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_implot_ImPlot_nDragPoint__I_3D_3DFFFFFI(JNIEnv* env, jclass clazz, jint id, jdoubleArray obj_x, jdoubleArray obj_y, jfloat colX, jfloat colY, jfloat colZ, jfloat colW, jfloat size, jint flags) {

//@line:16635

        auto x = obj_x == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_x, JNI_FALSE);
        auto y = obj_y == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_y, JNI_FALSE);
        ImVec4 col = ImVec4(colX, colY, colZ, colW);
        auto _result = ImPlot::DragPoint(id, (x != NULL ? &x[0] : NULL), (y != NULL ? &y[0] : NULL), col, size, flags);
        if (x != NULL) env->ReleasePrimitiveArrayCritical(obj_x, x, JNI_FALSE);
        if (y != NULL) env->ReleasePrimitiveArrayCritical(obj_y, y, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_implot_ImPlot_nDragPoint__I_3D_3DFFFFI(JNIEnv* env, jclass clazz, jint id, jdoubleArray obj_x, jdoubleArray obj_y, jfloat colX, jfloat colY, jfloat colZ, jfloat colW, jint flags) {

//@line:16645

        auto x = obj_x == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_x, JNI_FALSE);
        auto y = obj_y == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_y, JNI_FALSE);
        ImVec4 col = ImVec4(colX, colY, colZ, colW);
        auto _result = ImPlot::DragPoint(id, (x != NULL ? &x[0] : NULL), (y != NULL ? &y[0] : NULL), col, 4, flags);
        if (x != NULL) env->ReleasePrimitiveArrayCritical(obj_x, x, JNI_FALSE);
        if (y != NULL) env->ReleasePrimitiveArrayCritical(obj_y, y, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_implot_ImPlot_nDragLineX__I_3DFFFF(JNIEnv* env, jclass clazz, jint id, jdoubleArray obj_x, jfloat colX, jfloat colY, jfloat colZ, jfloat colW) {

//@line:16711

        auto x = obj_x == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_x, JNI_FALSE);
        ImVec4 col = ImVec4(colX, colY, colZ, colW);
        auto _result = ImPlot::DragLineX(id, (x != NULL ? &x[0] : NULL), col);
        if (x != NULL) env->ReleasePrimitiveArrayCritical(obj_x, x, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_implot_ImPlot_nDragLineX__I_3DFFFFF(JNIEnv* env, jclass clazz, jint id, jdoubleArray obj_x, jfloat colX, jfloat colY, jfloat colZ, jfloat colW, jfloat thickness) {

//@line:16719

        auto x = obj_x == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_x, JNI_FALSE);
        ImVec4 col = ImVec4(colX, colY, colZ, colW);
        auto _result = ImPlot::DragLineX(id, (x != NULL ? &x[0] : NULL), col, thickness);
        if (x != NULL) env->ReleasePrimitiveArrayCritical(obj_x, x, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_implot_ImPlot_nDragLineX__I_3DFFFFFI(JNIEnv* env, jclass clazz, jint id, jdoubleArray obj_x, jfloat colX, jfloat colY, jfloat colZ, jfloat colW, jfloat thickness, jint flags) {

//@line:16727

        auto x = obj_x == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_x, JNI_FALSE);
        ImVec4 col = ImVec4(colX, colY, colZ, colW);
        auto _result = ImPlot::DragLineX(id, (x != NULL ? &x[0] : NULL), col, thickness, flags);
        if (x != NULL) env->ReleasePrimitiveArrayCritical(obj_x, x, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_implot_ImPlot_nDragLineX__I_3DFFFFI(JNIEnv* env, jclass clazz, jint id, jdoubleArray obj_x, jfloat colX, jfloat colY, jfloat colZ, jfloat colW, jint flags) {

//@line:16735

        auto x = obj_x == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_x, JNI_FALSE);
        ImVec4 col = ImVec4(colX, colY, colZ, colW);
        auto _result = ImPlot::DragLineX(id, (x != NULL ? &x[0] : NULL), col, 1, flags);
        if (x != NULL) env->ReleasePrimitiveArrayCritical(obj_x, x, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_implot_ImPlot_nDragLineY__I_3DFFFF(JNIEnv* env, jclass clazz, jint id, jdoubleArray obj_y, jfloat colX, jfloat colY, jfloat colZ, jfloat colW) {

//@line:16799

        auto y = obj_y == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_y, JNI_FALSE);
        ImVec4 col = ImVec4(colX, colY, colZ, colW);
        auto _result = ImPlot::DragLineY(id, (y != NULL ? &y[0] : NULL), col);
        if (y != NULL) env->ReleasePrimitiveArrayCritical(obj_y, y, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_implot_ImPlot_nDragLineY__I_3DFFFFF(JNIEnv* env, jclass clazz, jint id, jdoubleArray obj_y, jfloat colX, jfloat colY, jfloat colZ, jfloat colW, jfloat thickness) {

//@line:16807

        auto y = obj_y == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_y, JNI_FALSE);
        ImVec4 col = ImVec4(colX, colY, colZ, colW);
        auto _result = ImPlot::DragLineY(id, (y != NULL ? &y[0] : NULL), col, thickness);
        if (y != NULL) env->ReleasePrimitiveArrayCritical(obj_y, y, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_implot_ImPlot_nDragLineY__I_3DFFFFFI(JNIEnv* env, jclass clazz, jint id, jdoubleArray obj_y, jfloat colX, jfloat colY, jfloat colZ, jfloat colW, jfloat thickness, jint flags) {

//@line:16815

        auto y = obj_y == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_y, JNI_FALSE);
        ImVec4 col = ImVec4(colX, colY, colZ, colW);
        auto _result = ImPlot::DragLineY(id, (y != NULL ? &y[0] : NULL), col, thickness, flags);
        if (y != NULL) env->ReleasePrimitiveArrayCritical(obj_y, y, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_implot_ImPlot_nDragLineY__I_3DFFFFI(JNIEnv* env, jclass clazz, jint id, jdoubleArray obj_y, jfloat colX, jfloat colY, jfloat colZ, jfloat colW, jint flags) {

//@line:16823

        auto y = obj_y == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_y, JNI_FALSE);
        ImVec4 col = ImVec4(colX, colY, colZ, colW);
        auto _result = ImPlot::DragLineY(id, (y != NULL ? &y[0] : NULL), col, 1, flags);
        if (y != NULL) env->ReleasePrimitiveArrayCritical(obj_y, y, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_implot_ImPlot_nDragRect__I_3D_3D_3D_3DFFFF(JNIEnv* env, jclass clazz, jint id, jdoubleArray obj_xMin, jdoubleArray obj_yMin, jdoubleArray obj_xMax, jdoubleArray obj_yMax, jfloat colX, jfloat colY, jfloat colZ, jfloat colW) {

//@line:16859

        auto xMin = obj_xMin == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xMin, JNI_FALSE);
        auto yMin = obj_yMin == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_yMin, JNI_FALSE);
        auto xMax = obj_xMax == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xMax, JNI_FALSE);
        auto yMax = obj_yMax == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_yMax, JNI_FALSE);
        ImVec4 col = ImVec4(colX, colY, colZ, colW);
        auto _result = ImPlot::DragRect(id, (xMin != NULL ? &xMin[0] : NULL), (yMin != NULL ? &yMin[0] : NULL), (xMax != NULL ? &xMax[0] : NULL), (yMax != NULL ? &yMax[0] : NULL), col);
        if (xMin != NULL) env->ReleasePrimitiveArrayCritical(obj_xMin, xMin, JNI_FALSE);
        if (yMin != NULL) env->ReleasePrimitiveArrayCritical(obj_yMin, yMin, JNI_FALSE);
        if (xMax != NULL) env->ReleasePrimitiveArrayCritical(obj_xMax, xMax, JNI_FALSE);
        if (yMax != NULL) env->ReleasePrimitiveArrayCritical(obj_yMax, yMax, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_implot_ImPlot_nDragRect__I_3D_3D_3D_3DFFFFI(JNIEnv* env, jclass clazz, jint id, jdoubleArray obj_xMin, jdoubleArray obj_yMin, jdoubleArray obj_xMax, jdoubleArray obj_yMax, jfloat colX, jfloat colY, jfloat colZ, jfloat colW, jint flags) {

//@line:16873

        auto xMin = obj_xMin == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xMin, JNI_FALSE);
        auto yMin = obj_yMin == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_yMin, JNI_FALSE);
        auto xMax = obj_xMax == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xMax, JNI_FALSE);
        auto yMax = obj_yMax == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_yMax, JNI_FALSE);
        ImVec4 col = ImVec4(colX, colY, colZ, colW);
        auto _result = ImPlot::DragRect(id, (xMin != NULL ? &xMin[0] : NULL), (yMin != NULL ? &yMin[0] : NULL), (xMax != NULL ? &xMax[0] : NULL), (yMax != NULL ? &yMax[0] : NULL), col, flags);
        if (xMin != NULL) env->ReleasePrimitiveArrayCritical(obj_xMin, xMin, JNI_FALSE);
        if (yMin != NULL) env->ReleasePrimitiveArrayCritical(obj_yMin, yMin, JNI_FALSE);
        if (xMax != NULL) env->ReleasePrimitiveArrayCritical(obj_xMax, xMax, JNI_FALSE);
        if (yMax != NULL) env->ReleasePrimitiveArrayCritical(obj_yMax, yMax, JNI_FALSE);
        return _result;
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nAnnotation__DDFFFFFFZ(JNIEnv* env, jclass clazz, jdouble x, jdouble y, jfloat colX, jfloat colY, jfloat colZ, jfloat colW, jfloat pixOffsetX, jfloat pixOffsetY, jboolean clamp) {

//@line:16919

        ImVec4 col = ImVec4(colX, colY, colZ, colW);
        ImVec2 pixOffset = ImVec2(pixOffsetX, pixOffsetY);
        ImPlot::Annotation(x, y, col, pixOffset, clamp);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nAnnotation__DDFFFFFFZZ(JNIEnv* env, jclass clazz, jdouble x, jdouble y, jfloat colX, jfloat colY, jfloat colZ, jfloat colW, jfloat pixOffsetX, jfloat pixOffsetY, jboolean clamp, jboolean round) {

//@line:16925

        ImVec4 col = ImVec4(colX, colY, colZ, colW);
        ImVec2 pixOffset = ImVec2(pixOffsetX, pixOffsetY);
        ImPlot::Annotation(x, y, col, pixOffset, clamp, round);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nAnnotation__DDFFFFFFZLjava_lang_String_2(JNIEnv* env, jclass clazz, jdouble x, jdouble y, jfloat colX, jfloat colY, jfloat colZ, jfloat colW, jfloat pixOffsetX, jfloat pixOffsetY, jboolean clamp, jstring obj_fmt) {

//@line:16947

        auto fmt = obj_fmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_fmt, JNI_FALSE);
        ImVec4 col = ImVec4(colX, colY, colZ, colW);
        ImVec2 pixOffset = ImVec2(pixOffsetX, pixOffsetY);
        ImPlot::Annotation(x, y, col, pixOffset, clamp, fmt, NULL);
        if (fmt != NULL) env->ReleaseStringUTFChars(obj_fmt, fmt);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nTagX__DFFFF(JNIEnv* env, jclass clazz, jdouble x, jfloat colX, jfloat colY, jfloat colZ, jfloat colW) {

//@line:16983

        ImVec4 col = ImVec4(colX, colY, colZ, colW);
        ImPlot::TagX(x, col);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nTagX__DFFFFZ(JNIEnv* env, jclass clazz, jdouble x, jfloat colX, jfloat colY, jfloat colZ, jfloat colW, jboolean round) {

//@line:16988

        ImVec4 col = ImVec4(colX, colY, colZ, colW);
        ImPlot::TagX(x, col, round);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nTagX__DFFFFLjava_lang_String_2(JNIEnv* env, jclass clazz, jdouble x, jfloat colX, jfloat colY, jfloat colZ, jfloat colW, jstring obj_fmt) {

//@line:17007

        auto fmt = obj_fmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_fmt, JNI_FALSE);
        ImVec4 col = ImVec4(colX, colY, colZ, colW);
        ImPlot::TagX(x, col, fmt, NULL);
        if (fmt != NULL) env->ReleaseStringUTFChars(obj_fmt, fmt);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nTagY__DFFFF(JNIEnv* env, jclass clazz, jdouble y, jfloat colX, jfloat colY, jfloat colZ, jfloat colW) {

//@line:17042

        ImVec4 col = ImVec4(colX, colY, colZ, colW);
        ImPlot::TagY(y, col);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nTagY__DFFFFZ(JNIEnv* env, jclass clazz, jdouble y, jfloat colX, jfloat colY, jfloat colZ, jfloat colW, jboolean round) {

//@line:17047

        ImVec4 col = ImVec4(colX, colY, colZ, colW);
        ImPlot::TagY(y, col, round);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nTagY__DFFFFLjava_lang_String_2(JNIEnv* env, jclass clazz, jdouble y, jfloat colX, jfloat colY, jfloat colZ, jfloat colW, jstring obj_fmt) {

//@line:17066

        auto fmt = obj_fmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_fmt, JNI_FALSE);
        ImVec4 col = ImVec4(colX, colY, colZ, colW);
        ImPlot::TagY(y, col, fmt, NULL);
        if (fmt != NULL) env->ReleaseStringUTFChars(obj_fmt, fmt);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nSetAxis(JNIEnv* env, jclass clazz, jint axis) {


//@line:17084

        ImPlot::SetAxis(axis);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nSetAxes(JNIEnv* env, jclass clazz, jint xAxis, jint yAxis) {


//@line:17095

        ImPlot::SetAxes(xAxis, yAxis);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPixelsToPlot__Limgui_extension_implot_ImPlotPoint_2FF(JNIEnv* env, jclass clazz, jobject dst, jfloat pixX, jfloat pixY) {

//@line:17207

        ImVec2 pix = ImVec2(pixX, pixY);
        Jni::ImPlotPointCpy(env, ImPlot::PixelsToPlot(pix), dst);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPixelsToPlot__Limgui_extension_implot_ImPlotPoint_2FFI(JNIEnv* env, jclass clazz, jobject dst, jfloat pixX, jfloat pixY, jint xAxis) {

//@line:17212

        ImVec2 pix = ImVec2(pixX, pixY);
        Jni::ImPlotPointCpy(env, ImPlot::PixelsToPlot(pix, xAxis), dst);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPixelsToPlot__Limgui_extension_implot_ImPlotPoint_2FFII(JNIEnv* env, jclass clazz, jobject dst, jfloat pixX, jfloat pixY, jint xAxis, jint yAxis) {

//@line:17217

        ImVec2 pix = ImVec2(pixX, pixY);
        Jni::ImPlotPointCpy(env, ImPlot::PixelsToPlot(pix, xAxis, yAxis), dst);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotToPixels__Limgui_ImVec2_2DD(JNIEnv* env, jclass clazz, jobject dst, jdouble pltX, jdouble pltY) {


//@line:17378

        Jni::ImVec2Cpy(env, ImPlot::PlotToPixels(ImPlotPoint(pltX, pltY)), dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlot_nPlotToPixelsX__DD(JNIEnv* env, jclass clazz, jdouble pltX, jdouble pltY) {


//@line:17382

        return ImPlot::PlotToPixels(ImPlotPoint(pltX, pltY)).x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlot_nPlotToPixelsY__DD(JNIEnv* env, jclass clazz, jdouble pltX, jdouble pltY) {


//@line:17386

        return ImPlot::PlotToPixels(ImPlotPoint(pltX, pltY)).y;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotToPixels__Limgui_ImVec2_2DDI(JNIEnv* env, jclass clazz, jobject dst, jdouble pltX, jdouble pltY, jint xAxis) {


//@line:17390

        Jni::ImVec2Cpy(env, ImPlot::PlotToPixels(ImPlotPoint(pltX, pltY), xAxis), dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlot_nPlotToPixelsX__DDI(JNIEnv* env, jclass clazz, jdouble pltX, jdouble pltY, jint xAxis) {


//@line:17394

        return ImPlot::PlotToPixels(ImPlotPoint(pltX, pltY), xAxis).x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlot_nPlotToPixelsY__DDI(JNIEnv* env, jclass clazz, jdouble pltX, jdouble pltY, jint xAxis) {


//@line:17398

        return ImPlot::PlotToPixels(ImPlotPoint(pltX, pltY), xAxis).y;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPlotToPixels__Limgui_ImVec2_2DDII(JNIEnv* env, jclass clazz, jobject dst, jdouble pltX, jdouble pltY, jint xAxis, jint yAxis) {


//@line:17402

        Jni::ImVec2Cpy(env, ImPlot::PlotToPixels(ImPlotPoint(pltX, pltY), xAxis, yAxis), dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlot_nPlotToPixelsX__DDII(JNIEnv* env, jclass clazz, jdouble pltX, jdouble pltY, jint xAxis, jint yAxis) {


//@line:17406

        return ImPlot::PlotToPixels(ImPlotPoint(pltX, pltY), xAxis, yAxis).x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlot_nPlotToPixelsY__DDII(JNIEnv* env, jclass clazz, jdouble pltX, jdouble pltY, jint xAxis, jint yAxis) {


//@line:17410

        return ImPlot::PlotToPixels(ImPlotPoint(pltX, pltY), xAxis, yAxis).y;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nGetPlotPos(JNIEnv* env, jclass clazz, jobject dst) {


//@line:17444

        Jni::ImVec2Cpy(env, ImPlot::GetPlotPos(), dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlot_nGetPlotPosX(JNIEnv* env, jclass clazz) {


//@line:17448

        return ImPlot::GetPlotPos().x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlot_nGetPlotPosY(JNIEnv* env, jclass clazz) {


//@line:17452

        return ImPlot::GetPlotPos().y;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nGetPlotSize(JNIEnv* env, jclass clazz, jobject dst) {


//@line:17486

        Jni::ImVec2Cpy(env, ImPlot::GetPlotSize(), dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlot_nGetPlotSizeX(JNIEnv* env, jclass clazz) {


//@line:17490

        return ImPlot::GetPlotSize().x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlot_nGetPlotSizeY(JNIEnv* env, jclass clazz) {


//@line:17494

        return ImPlot::GetPlotSize().y;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nGetPlotMousePos__Limgui_extension_implot_ImPlotPoint_2(JNIEnv* env, jclass clazz, jobject dst) {


//@line:17552

        Jni::ImPlotPointCpy(env, ImPlot::GetPlotMousePos(), dst);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nGetPlotMousePos__Limgui_extension_implot_ImPlotPoint_2I(JNIEnv* env, jclass clazz, jobject dst, jint xAxis) {


//@line:17556

        Jni::ImPlotPointCpy(env, ImPlot::GetPlotMousePos(xAxis), dst);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nGetPlotMousePos__Limgui_extension_implot_ImPlotPoint_2II(JNIEnv* env, jclass clazz, jobject dst, jint xAxis, jint yAxis) {


//@line:17560

        Jni::ImPlotPointCpy(env, ImPlot::GetPlotMousePos(xAxis, yAxis), dst);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nGetPlotLimits__Limgui_extension_implot_ImPlotRect_2(JNIEnv* env, jclass clazz, jobject dst) {


//@line:17612

        Jni::ImPlotRectCpy(env, ImPlot::GetPlotLimits(), dst);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nGetPlotLimits__Limgui_extension_implot_ImPlotRect_2I(JNIEnv* env, jclass clazz, jobject dst, jint xAxis) {


//@line:17616

        Jni::ImPlotRectCpy(env, ImPlot::GetPlotLimits(xAxis), dst);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nGetPlotLimits__Limgui_extension_implot_ImPlotRect_2II(JNIEnv* env, jclass clazz, jobject dst, jint xAxis, jint yAxis) {


//@line:17620

        Jni::ImPlotRectCpy(env, ImPlot::GetPlotLimits(xAxis, yAxis), dst);
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_implot_ImPlot_nIsPlotHovered(JNIEnv* env, jclass clazz) {


//@line:17631

        return ImPlot::IsPlotHovered();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_implot_ImPlot_nIsAxisHovered(JNIEnv* env, jclass clazz, jint axis) {


//@line:17642

        return ImPlot::IsAxisHovered(axis);
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_implot_ImPlot_nIsSubplotsHovered(JNIEnv* env, jclass clazz) {


//@line:17653

        return ImPlot::IsSubplotsHovered();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_implot_ImPlot_nIsPlotSelected(JNIEnv* env, jclass clazz) {


//@line:17664

        return ImPlot::IsPlotSelected();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nGetPlotSelection__Limgui_extension_implot_ImPlotRect_2(JNIEnv* env, jclass clazz, jobject dst) {


//@line:17722

        Jni::ImPlotRectCpy(env, ImPlot::GetPlotSelection(), dst);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nGetPlotSelection__Limgui_extension_implot_ImPlotRect_2I(JNIEnv* env, jclass clazz, jobject dst, jint xAxis) {


//@line:17726

        Jni::ImPlotRectCpy(env, ImPlot::GetPlotSelection(xAxis), dst);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nGetPlotSelection__Limgui_extension_implot_ImPlotRect_2II(JNIEnv* env, jclass clazz, jobject dst, jint xAxis, jint yAxis) {


//@line:17730

        Jni::ImPlotRectCpy(env, ImPlot::GetPlotSelection(xAxis, yAxis), dst);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nCancelPlotSelection(JNIEnv* env, jclass clazz) {


//@line:17741

        ImPlot::CancelPlotSelection();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nHideNextItem__(JNIEnv* env, jclass clazz) {


//@line:17777

        ImPlot::HideNextItem();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nHideNextItem__Z(JNIEnv* env, jclass clazz, jboolean hidden) {


//@line:17781

        ImPlot::HideNextItem(hidden);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nHideNextItem__ZI(JNIEnv* env, jclass clazz, jboolean hidden, jint cond) {


//@line:17785

        ImPlot::HideNextItem(hidden, cond);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nHideNextItem__I(JNIEnv* env, jclass clazz, jint cond) {


//@line:17789

        ImPlot::HideNextItem(true, cond);
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_implot_ImPlot_nBeginAlignedPlots__Ljava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_groupId) {

//@line:17814

        auto groupId = obj_groupId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_groupId, JNI_FALSE);
        auto _result = ImPlot::BeginAlignedPlots(groupId);
        if (groupId != NULL) env->ReleaseStringUTFChars(obj_groupId, groupId);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_implot_ImPlot_nBeginAlignedPlots__Ljava_lang_String_2Z(JNIEnv* env, jclass clazz, jstring obj_groupId, jboolean vertical) {

//@line:17821

        auto groupId = obj_groupId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_groupId, JNI_FALSE);
        auto _result = ImPlot::BeginAlignedPlots(groupId, vertical);
        if (groupId != NULL) env->ReleaseStringUTFChars(obj_groupId, groupId);
        return _result;
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nEndAlignedPlots(JNIEnv* env, jclass clazz) {


//@line:17835

        ImPlot::EndAlignedPlots();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_implot_ImPlot_nBeginLegendPopup__Ljava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_labelId) {

//@line:17857

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto _result = ImPlot::BeginLegendPopup(labelId);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_implot_ImPlot_nBeginLegendPopup__Ljava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_labelId, jint mouseButton) {

//@line:17864

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto _result = ImPlot::BeginLegendPopup(labelId, mouseButton);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        return _result;
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nEndLegendPopup(JNIEnv* env, jclass clazz) {


//@line:17878

        ImPlot::EndLegendPopup();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_implot_ImPlot_nIsLegendEntryHovered(JNIEnv* env, jclass clazz, jstring obj_labelId) {

//@line:17889

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto _result = ImPlot::IsLegendEntryHovered(labelId);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_implot_ImPlot_nBeginDragDropTargetPlot(JNIEnv* env, jclass clazz) {


//@line:17908

        return ImPlot::BeginDragDropTargetPlot();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_implot_ImPlot_nBeginDragDropTargetAxis(JNIEnv* env, jclass clazz, jint axis) {


//@line:17920

        return ImPlot::BeginDragDropTargetAxis(axis);
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_implot_ImPlot_nBeginDragDropTargetLegend(JNIEnv* env, jclass clazz) {


//@line:17932

        return ImPlot::BeginDragDropTargetLegend();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nEndDragDropTarget(JNIEnv* env, jclass clazz) {


//@line:17943

        ImPlot::EndDragDropTarget();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_implot_ImPlot_nBeginDragDropSourcePlot__(JNIEnv* env, jclass clazz) {


//@line:17966

        return ImPlot::BeginDragDropSourcePlot();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_implot_ImPlot_nBeginDragDropSourcePlot__I(JNIEnv* env, jclass clazz, jint flags) {


//@line:17970

        return ImPlot::BeginDragDropSourcePlot(flags);
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_implot_ImPlot_nBeginDragDropSourceAxis__I(JNIEnv* env, jclass clazz, jint axis) {


//@line:17990

        return ImPlot::BeginDragDropSourceAxis(axis);
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_implot_ImPlot_nBeginDragDropSourceAxis__II(JNIEnv* env, jclass clazz, jint axis, jint flags) {


//@line:17994

        return ImPlot::BeginDragDropSourceAxis(axis, flags);
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_implot_ImPlot_nBeginDragDropSourceItem__Ljava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_labelId) {

//@line:18014

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto _result = ImPlot::BeginDragDropSourceItem(labelId);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_implot_ImPlot_nBeginDragDropSourceItem__Ljava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_labelId, jint flags) {

//@line:18021

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto _result = ImPlot::BeginDragDropSourceItem(labelId, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        return _result;
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nEndDragDropSource(JNIEnv* env, jclass clazz) {


//@line:18035

        ImPlot::EndDragDropSource();
    

}

JNIEXPORT jlong JNICALL Java_imgui_extension_implot_ImPlot_nGetStyle(JNIEnv* env, jclass clazz) {


//@line:18082

        return (uintptr_t)&ImPlot::GetStyle();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nStyleColorsAuto__(JNIEnv* env, jclass clazz) {


//@line:18100

        ImPlot::StyleColorsAuto();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nStyleColorsAuto__J(JNIEnv* env, jclass clazz, jlong dst) {


//@line:18104

        ImPlot::StyleColorsAuto(reinterpret_cast<ImPlotStyle*>(dst));
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nStyleColorsClassic__(JNIEnv* env, jclass clazz) {


//@line:18122

        ImPlot::StyleColorsClassic();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nStyleColorsClassic__J(JNIEnv* env, jclass clazz, jlong dst) {


//@line:18126

        ImPlot::StyleColorsClassic(reinterpret_cast<ImPlotStyle*>(dst));
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nStyleColorsDark__(JNIEnv* env, jclass clazz) {


//@line:18144

        ImPlot::StyleColorsDark();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nStyleColorsDark__J(JNIEnv* env, jclass clazz, jlong dst) {


//@line:18148

        ImPlot::StyleColorsDark(reinterpret_cast<ImPlotStyle*>(dst));
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nStyleColorsLight__(JNIEnv* env, jclass clazz) {


//@line:18166

        ImPlot::StyleColorsLight();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nStyleColorsLight__J(JNIEnv* env, jclass clazz, jlong dst) {


//@line:18170

        ImPlot::StyleColorsLight(reinterpret_cast<ImPlotStyle*>(dst));
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_pushStyleColor(JNIEnv* env, jclass clazz, jint idx, jlong col) {


//@line:18181

        ImPlot::PushStyleColor(idx, col);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPushStyleColor__II(JNIEnv* env, jclass clazz, jint idx, jint col) {


//@line:18192

        ImPlot::PushStyleColor(idx, static_cast<ImU32>(col));
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPushStyleColor__IFFFF(JNIEnv* env, jclass clazz, jint idx, jfloat colX, jfloat colY, jfloat colZ, jfloat colW) {

//@line:18210

        ImVec4 col = ImVec4(colX, colY, colZ, colW);
        ImPlot::PushStyleColor(idx, col);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPopStyleColor__(JNIEnv* env, jclass clazz) {


//@line:18223

        ImPlot::PopStyleColor();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPopStyleColor__I(JNIEnv* env, jclass clazz, jint count) {


//@line:18227

        ImPlot::PopStyleColor(count);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPushStyleVar__IF(JNIEnv* env, jclass clazz, jint idx, jfloat val) {


//@line:18238

        ImPlot::PushStyleVar(idx, static_cast<float>(val));
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPushStyleVar__II(JNIEnv* env, jclass clazz, jint idx, jint val) {


//@line:18249

        ImPlot::PushStyleVar(idx, static_cast<int>(val));
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPushStyleVar__IFF(JNIEnv* env, jclass clazz, jint idx, jfloat valX, jfloat valY) {

//@line:18267

        ImVec2 val = ImVec2(valX, valY);
        ImPlot::PushStyleVar(idx, val);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPopStyleVar__(JNIEnv* env, jclass clazz) {


//@line:18286

        ImPlot::PopStyleVar();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPopStyleVar__I(JNIEnv* env, jclass clazz, jint count) {


//@line:18290

        ImPlot::PopStyleVar(count);
    

}

JNIEXPORT jint JNICALL Java_imgui_extension_implot_ImPlot_nNextMarker(JNIEnv* env, jclass clazz) {


//@line:18302

        return ImPlot::NextMarker();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nGetLastItemColor(JNIEnv* env, jclass clazz, jobject dst) {


//@line:18350

        Jni::ImVec4Cpy(env, ImPlot::GetLastItemColor(), dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlot_nGetLastItemColorX(JNIEnv* env, jclass clazz) {


//@line:18354

        return ImPlot::GetLastItemColor().x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlot_nGetLastItemColorY(JNIEnv* env, jclass clazz) {


//@line:18358

        return ImPlot::GetLastItemColor().y;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlot_nGetLastItemColorZ(JNIEnv* env, jclass clazz) {


//@line:18362

        return ImPlot::GetLastItemColor().z;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlot_nGetLastItemColorW(JNIEnv* env, jclass clazz) {


//@line:18366

        return ImPlot::GetLastItemColor().w;
    

}

JNIEXPORT jstring JNICALL Java_imgui_extension_implot_ImPlot_nGetStyleColorName(JNIEnv* env, jclass clazz, jint idx) {


//@line:18377

        return env->NewStringUTF(ImPlot::GetStyleColorName(idx));
    

}

JNIEXPORT jstring JNICALL Java_imgui_extension_implot_ImPlot_nGetMarkerName(JNIEnv* env, jclass clazz, jint idx) {


//@line:18388

        return env->NewStringUTF(ImPlot::GetMarkerName(idx));
    

}

JNIEXPORT jint JNICALL Java_imgui_extension_implot_ImPlot_nAddColormap__Ljava_lang_String_2_3Limgui_ImVec4_2(JNIEnv* env, jclass clazz, jstring obj_name, jobjectArray obj_cols) {

//@line:18420

        auto name = obj_name == NULL ? NULL : (char*)env->GetStringUTFChars(obj_name, JNI_FALSE);
        int colsLength = env->GetArrayLength(obj_cols);
        ImVec4 cols[colsLength];
        for (int i = 0; i < colsLength; i++) {
            jobject src = env->GetObjectArrayElement(obj_cols, i);
            ImVec4 dst;
            Jni::ImVec4Cpy(env, src, &dst);
            cols[i] = dst;
        };
        auto _result = ImPlot::AddColormap(name, cols, env->GetArrayLength(obj_cols));
        if (name != NULL) env->ReleaseStringUTFChars(obj_name, name);
        return _result;
    
}

JNIEXPORT jint JNICALL Java_imgui_extension_implot_ImPlot_nAddColormap__Ljava_lang_String_2_3Limgui_ImVec4_2Z(JNIEnv* env, jclass clazz, jstring obj_name, jobjectArray obj_cols, jboolean qual) {

//@line:18435

        auto name = obj_name == NULL ? NULL : (char*)env->GetStringUTFChars(obj_name, JNI_FALSE);
        int colsLength = env->GetArrayLength(obj_cols);
        ImVec4 cols[colsLength];
        for (int i = 0; i < colsLength; i++) {
            jobject src = env->GetObjectArrayElement(obj_cols, i);
            ImVec4 dst;
            Jni::ImVec4Cpy(env, src, &dst);
            cols[i] = dst;
        };
        auto _result = ImPlot::AddColormap(name, cols, env->GetArrayLength(obj_cols), qual);
        if (name != NULL) env->ReleaseStringUTFChars(obj_name, name);
        return _result;
    
}

JNIEXPORT jint JNICALL Java_imgui_extension_implot_ImPlot_nAddColormap__Ljava_lang_String_2_3I(JNIEnv* env, jclass clazz, jstring obj_name, jintArray obj_cols) {

//@line:18458

        auto name = obj_name == NULL ? NULL : (char*)env->GetStringUTFChars(obj_name, JNI_FALSE);
        auto cols = obj_cols == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_cols, JNI_FALSE);
        auto _result = ImPlot::AddColormap(name, reinterpret_cast<ImU32*>(&cols[0]), env->GetArrayLength(obj_cols));
        if (name != NULL) env->ReleaseStringUTFChars(obj_name, name);
        if (cols != NULL) env->ReleasePrimitiveArrayCritical(obj_cols, cols, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jint JNICALL Java_imgui_extension_implot_ImPlot_nAddColormap__Ljava_lang_String_2_3IZ(JNIEnv* env, jclass clazz, jstring obj_name, jintArray obj_cols, jboolean qual) {

//@line:18467

        auto name = obj_name == NULL ? NULL : (char*)env->GetStringUTFChars(obj_name, JNI_FALSE);
        auto cols = obj_cols == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_cols, JNI_FALSE);
        auto _result = ImPlot::AddColormap(name, reinterpret_cast<ImU32*>(&cols[0]), env->GetArrayLength(obj_cols), qual);
        if (name != NULL) env->ReleaseStringUTFChars(obj_name, name);
        if (cols != NULL) env->ReleasePrimitiveArrayCritical(obj_cols, cols, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jint JNICALL Java_imgui_extension_implot_ImPlot_nGetColormapCount(JNIEnv* env, jclass clazz) {


//@line:18483

        return ImPlot::GetColormapCount();
    

}

JNIEXPORT jstring JNICALL Java_imgui_extension_implot_ImPlot_nGetColormapName(JNIEnv* env, jclass clazz, jint cmap) {


//@line:18494

        return env->NewStringUTF(ImPlot::GetColormapName(cmap));
    

}

JNIEXPORT jint JNICALL Java_imgui_extension_implot_ImPlot_nGetColormapIndex(JNIEnv* env, jclass clazz, jstring obj_name) {

//@line:18505

        auto name = obj_name == NULL ? NULL : (char*)env->GetStringUTFChars(obj_name, JNI_FALSE);
        auto _result = ImPlot::GetColormapIndex(name);
        if (name != NULL) env->ReleaseStringUTFChars(obj_name, name);
        return _result;
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPushColormap__I(JNIEnv* env, jclass clazz, jint cmap) {


//@line:18519

        ImPlot::PushColormap(cmap);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPushColormap__Ljava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_name) {

//@line:18530

        auto name = obj_name == NULL ? NULL : (char*)env->GetStringUTFChars(obj_name, JNI_FALSE);
        ImPlot::PushColormap(name);
        if (name != NULL) env->ReleaseStringUTFChars(obj_name, name);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPopColormap__(JNIEnv* env, jclass clazz) {


//@line:18550

        ImPlot::PopColormap();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPopColormap__I(JNIEnv* env, jclass clazz, jint count) {


//@line:18554

        ImPlot::PopColormap(count);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nNextColormapColor(JNIEnv* env, jclass clazz, jobject dst) {


//@line:18608

        Jni::ImVec4Cpy(env, ImPlot::NextColormapColor(), dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlot_nNextColormapColorX(JNIEnv* env, jclass clazz) {


//@line:18612

        return ImPlot::NextColormapColor().x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlot_nNextColormapColorY(JNIEnv* env, jclass clazz) {


//@line:18616

        return ImPlot::NextColormapColor().y;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlot_nNextColormapColorZ(JNIEnv* env, jclass clazz) {


//@line:18620

        return ImPlot::NextColormapColor().z;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlot_nNextColormapColorW(JNIEnv* env, jclass clazz) {


//@line:18624

        return ImPlot::NextColormapColor().w;
    

}

JNIEXPORT jint JNICALL Java_imgui_extension_implot_ImPlot_nGetColormapSize__(JNIEnv* env, jclass clazz) {


//@line:18642

        return ImPlot::GetColormapSize();
    

}

JNIEXPORT jint JNICALL Java_imgui_extension_implot_ImPlot_nGetColormapSize__I(JNIEnv* env, jclass clazz, jint cmap) {


//@line:18646

        return ImPlot::GetColormapSize(cmap);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nGetColormapColor__Limgui_ImVec4_2I(JNIEnv* env, jclass clazz, jobject dst, jint idx) {


//@line:18738

        Jni::ImVec4Cpy(env, ImPlot::GetColormapColor(idx), dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlot_nGetColormapColorX__I(JNIEnv* env, jclass clazz, jint idx) {


//@line:18742

        return ImPlot::GetColormapColor(idx).x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlot_nGetColormapColorY__I(JNIEnv* env, jclass clazz, jint idx) {


//@line:18746

        return ImPlot::GetColormapColor(idx).y;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlot_nGetColormapColorZ__I(JNIEnv* env, jclass clazz, jint idx) {


//@line:18750

        return ImPlot::GetColormapColor(idx).z;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlot_nGetColormapColorW__I(JNIEnv* env, jclass clazz, jint idx) {


//@line:18754

        return ImPlot::GetColormapColor(idx).w;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nGetColormapColor__Limgui_ImVec4_2II(JNIEnv* env, jclass clazz, jobject dst, jint idx, jint cmap) {


//@line:18758

        Jni::ImVec4Cpy(env, ImPlot::GetColormapColor(idx, cmap), dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlot_nGetColormapColorX__II(JNIEnv* env, jclass clazz, jint idx, jint cmap) {


//@line:18762

        return ImPlot::GetColormapColor(idx, cmap).x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlot_nGetColormapColorY__II(JNIEnv* env, jclass clazz, jint idx, jint cmap) {


//@line:18766

        return ImPlot::GetColormapColor(idx, cmap).y;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlot_nGetColormapColorZ__II(JNIEnv* env, jclass clazz, jint idx, jint cmap) {


//@line:18770

        return ImPlot::GetColormapColor(idx, cmap).z;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlot_nGetColormapColorW__II(JNIEnv* env, jclass clazz, jint idx, jint cmap) {


//@line:18774

        return ImPlot::GetColormapColor(idx, cmap).w;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nSampleColormap__Limgui_ImVec4_2F(JNIEnv* env, jclass clazz, jobject dst, jfloat t) {


//@line:18866

        Jni::ImVec4Cpy(env, ImPlot::SampleColormap(t), dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlot_nSampleColormapX__F(JNIEnv* env, jclass clazz, jfloat t) {


//@line:18870

        return ImPlot::SampleColormap(t).x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlot_nSampleColormapY__F(JNIEnv* env, jclass clazz, jfloat t) {


//@line:18874

        return ImPlot::SampleColormap(t).y;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlot_nSampleColormapZ__F(JNIEnv* env, jclass clazz, jfloat t) {


//@line:18878

        return ImPlot::SampleColormap(t).z;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlot_nSampleColormapW__F(JNIEnv* env, jclass clazz, jfloat t) {


//@line:18882

        return ImPlot::SampleColormap(t).w;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nSampleColormap__Limgui_ImVec4_2FI(JNIEnv* env, jclass clazz, jobject dst, jfloat t, jint cmap) {


//@line:18886

        Jni::ImVec4Cpy(env, ImPlot::SampleColormap(t, cmap), dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlot_nSampleColormapX__FI(JNIEnv* env, jclass clazz, jfloat t, jint cmap) {


//@line:18890

        return ImPlot::SampleColormap(t, cmap).x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlot_nSampleColormapY__FI(JNIEnv* env, jclass clazz, jfloat t, jint cmap) {


//@line:18894

        return ImPlot::SampleColormap(t, cmap).y;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlot_nSampleColormapZ__FI(JNIEnv* env, jclass clazz, jfloat t, jint cmap) {


//@line:18898

        return ImPlot::SampleColormap(t, cmap).z;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlot_nSampleColormapW__FI(JNIEnv* env, jclass clazz, jfloat t, jint cmap) {


//@line:18902

        return ImPlot::SampleColormap(t, cmap).w;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nColormapScale__Ljava_lang_String_2DD(JNIEnv* env, jclass clazz, jstring obj_label, jdouble scaleMin, jdouble scaleMax) {

//@line:18997

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        ImPlot::ColormapScale(label, scaleMin, scaleMax);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nColormapScale__Ljava_lang_String_2DDFF(JNIEnv* env, jclass clazz, jstring obj_label, jdouble scaleMin, jdouble scaleMax, jfloat sizeX, jfloat sizeY) {

//@line:19003

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        ImPlot::ColormapScale(label, scaleMin, scaleMax, size);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nColormapScale__Ljava_lang_String_2DDFFLjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jdouble scaleMin, jdouble scaleMax, jfloat sizeX, jfloat sizeY, jstring obj_format) {

//@line:19010

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        ImPlot::ColormapScale(label, scaleMin, scaleMax, size, format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nColormapScale__Ljava_lang_String_2DDFFLjava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jdouble scaleMin, jdouble scaleMax, jfloat sizeX, jfloat sizeY, jstring obj_format, jint flags) {

//@line:19019

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        ImPlot::ColormapScale(label, scaleMin, scaleMax, size, format, flags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nColormapScale__Ljava_lang_String_2DDFFLjava_lang_String_2II(JNIEnv* env, jclass clazz, jstring obj_label, jdouble scaleMin, jdouble scaleMax, jfloat sizeX, jfloat sizeY, jstring obj_format, jint flags, jint cmap) {

//@line:19028

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        ImPlot::ColormapScale(label, scaleMin, scaleMax, size, format, flags, cmap);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nColormapScale__Ljava_lang_String_2DDLjava_lang_String_2II(JNIEnv* env, jclass clazz, jstring obj_label, jdouble scaleMin, jdouble scaleMax, jstring obj_format, jint flags, jint cmap) {

//@line:19037

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        ImPlot::ColormapScale(label, scaleMin, scaleMax, ImVec2(0,0), format, flags, cmap);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nColormapScale__Ljava_lang_String_2DDII(JNIEnv* env, jclass clazz, jstring obj_label, jdouble scaleMin, jdouble scaleMax, jint flags, jint cmap) {

//@line:19045

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        ImPlot::ColormapScale(label, scaleMin, scaleMax, ImVec2(0,0), "%g", flags, cmap);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nColormapScale__Ljava_lang_String_2DDFFII(JNIEnv* env, jclass clazz, jstring obj_label, jdouble scaleMin, jdouble scaleMax, jfloat sizeX, jfloat sizeY, jint flags, jint cmap) {

//@line:19051

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        ImPlot::ColormapScale(label, scaleMin, scaleMax, size, "%g", flags, cmap);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_implot_ImPlot_nColormapSlider__Ljava_lang_String_2_3F(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_t) {

//@line:19090

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto t = obj_t == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_t, JNI_FALSE);
        auto _result = ImPlot::ColormapSlider(label, (t != NULL ? &t[0] : NULL), NULL);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (t != NULL) env->ReleasePrimitiveArrayCritical(obj_t, t, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_implot_ImPlot_nColormapSlider__Ljava_lang_String_2_3FLjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_t, jstring obj_format) {

//@line:19099

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto t = obj_t == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_t, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImPlot::ColormapSlider(label, (t != NULL ? &t[0] : NULL), NULL, format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (t != NULL) env->ReleasePrimitiveArrayCritical(obj_t, t, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_implot_ImPlot_nColormapSlider__Ljava_lang_String_2_3FLjava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_t, jstring obj_format, jint cmap) {

//@line:19110

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto t = obj_t == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_t, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImPlot::ColormapSlider(label, (t != NULL ? &t[0] : NULL), NULL, format, cmap);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (t != NULL) env->ReleasePrimitiveArrayCritical(obj_t, t, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_implot_ImPlot_nColormapSlider__Ljava_lang_String_2_3FI(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_t, jint cmap) {

//@line:19121

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto t = obj_t == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_t, JNI_FALSE);
        auto _result = ImPlot::ColormapSlider(label, (t != NULL ? &t[0] : NULL), NULL, "", cmap);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (t != NULL) env->ReleasePrimitiveArrayCritical(obj_t, t, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_implot_ImPlot_nColormapButton__Ljava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label) {

//@line:19172

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto _result = ImPlot::ColormapButton(label);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_implot_ImPlot_nColormapButton__Ljava_lang_String_2FF(JNIEnv* env, jclass clazz, jstring obj_label, jfloat sizeX, jfloat sizeY) {

//@line:19179

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        auto _result = ImPlot::ColormapButton(label, size);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_implot_ImPlot_nColormapButton__Ljava_lang_String_2FFI(JNIEnv* env, jclass clazz, jstring obj_label, jfloat sizeX, jfloat sizeY, jint cmap) {

//@line:19187

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        auto _result = ImPlot::ColormapButton(label, size, cmap);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_implot_ImPlot_nColormapButton__Ljava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jint cmap) {

//@line:19195

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto _result = ImPlot::ColormapButton(label, ImVec2(0,0), cmap);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        return _result;
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nBustColorCache__(JNIEnv* env, jclass clazz) {


//@line:19228

        ImPlot::BustColorCache();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nBustColorCache__Ljava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_plotTitleId) {

//@line:19232

        auto plotTitleId = obj_plotTitleId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_plotTitleId, JNI_FALSE);
        ImPlot::BustColorCache(plotTitleId);
        if (plotTitleId != NULL) env->ReleaseStringUTFChars(obj_plotTitleId, plotTitleId);
    
}

JNIEXPORT jlong JNICALL Java_imgui_extension_implot_ImPlot_nGetInputMap(JNIEnv* env, jclass clazz) {


//@line:19252

        return (uintptr_t)&ImPlot::GetInputMap();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nMapInputDefault__(JNIEnv* env, jclass clazz) {


//@line:19272

        ImPlot::MapInputDefault();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nMapInputDefault__J(JNIEnv* env, jclass clazz, jlong dst) {


//@line:19276

        ImPlot::MapInputDefault(reinterpret_cast<ImPlotInputMap*>(dst));
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nMapInputReverse__(JNIEnv* env, jclass clazz) {


//@line:19296

        ImPlot::MapInputReverse();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nMapInputReverse__J(JNIEnv* env, jclass clazz, jlong dst) {


//@line:19300

        ImPlot::MapInputReverse(reinterpret_cast<ImPlotInputMap*>(dst));
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nItemIcon__FFFF(JNIEnv* env, jclass clazz, jfloat colX, jfloat colY, jfloat colZ, jfloat colW) {

//@line:19318

        ImVec4 col = ImVec4(colX, colY, colZ, colW);
        ImPlot::ItemIcon(col);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nItemIcon__I(JNIEnv* env, jclass clazz, jint col) {


//@line:19327

        ImPlot::ItemIcon(static_cast<ImU32>(col));
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nColormapIcon(JNIEnv* env, jclass clazz, jint cmap) {


//@line:19335

        ImPlot::ColormapIcon(cmap);
    

}

JNIEXPORT jlong JNICALL Java_imgui_extension_implot_ImPlot_nGetPlotDrawList(JNIEnv* env, jclass clazz) {


//@line:19346

        return (uintptr_t)ImPlot::GetPlotDrawList();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPushPlotClipRect__(JNIEnv* env, jclass clazz) {


//@line:19364

        ImPlot::PushPlotClipRect();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPushPlotClipRect__F(JNIEnv* env, jclass clazz, jfloat expand) {


//@line:19368

        ImPlot::PushPlotClipRect(expand);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nPopPlotClipRect(JNIEnv* env, jclass clazz) {


//@line:19379

        ImPlot::PopPlotClipRect();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_implot_ImPlot_nShowStyleSelector(JNIEnv* env, jclass clazz, jstring obj_label) {

//@line:19390

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto _result = ImPlot::ShowStyleSelector(label);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_implot_ImPlot_nShowColormapSelector(JNIEnv* env, jclass clazz, jstring obj_label) {

//@line:19404

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto _result = ImPlot::ShowColormapSelector(label);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_implot_ImPlot_nShowInputMapSelector(JNIEnv* env, jclass clazz, jstring obj_label) {

//@line:19418

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto _result = ImPlot::ShowInputMapSelector(label);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        return _result;
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nShowStyleEditor__(JNIEnv* env, jclass clazz) {


//@line:19439

        ImPlot::ShowStyleEditor();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nShowStyleEditor__J(JNIEnv* env, jclass clazz, jlong ref) {


//@line:19443

        ImPlot::ShowStyleEditor(reinterpret_cast<ImPlotStyle*>(ref));
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nShowUserGuide(JNIEnv* env, jclass clazz) {


//@line:19454

        ImPlot::ShowUserGuide();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nShowMetricsWindow__(JNIEnv* env, jclass clazz) {


//@line:19472

        ImPlot::ShowMetricsWindow();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nShowMetricsWindow___3Z(JNIEnv* env, jclass clazz, jbooleanArray obj_pOpen) {

//@line:19476

        auto pOpen = obj_pOpen == NULL ? NULL : (bool*)env->GetPrimitiveArrayCritical(obj_pOpen, JNI_FALSE);
        ImPlot::ShowMetricsWindow((pOpen != NULL ? &pOpen[0] : NULL));
        if (pOpen != NULL) env->ReleasePrimitiveArrayCritical(obj_pOpen, pOpen, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nShowDemoWindow__(JNIEnv* env, jclass clazz) {


//@line:19500

        ImPlot::ShowDemoWindow();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlot_nShowDemoWindow___3Z(JNIEnv* env, jclass clazz, jbooleanArray obj_pOpen) {

//@line:19504

        auto pOpen = obj_pOpen == NULL ? NULL : (bool*)env->GetPrimitiveArrayCritical(obj_pOpen, JNI_FALSE);
        ImPlot::ShowDemoWindow((pOpen != NULL ? &pOpen[0] : NULL));
        if (pOpen != NULL) env->ReleasePrimitiveArrayCritical(obj_pOpen, pOpen, JNI_FALSE);
    
}

