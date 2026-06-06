#include <imgui_extension_implot_ImPlotSpec.h>

//@line:26

        #include "_implot.h"
        #define THIS ((ImPlotSpec*)STRUCT_PTR)
     JNIEXPORT jlong JNICALL Java_imgui_extension_implot_ImPlotSpec_nCreate(JNIEnv* env, jobject object) {


//@line:31

        return (uintptr_t)(new ImPlotSpec());
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlotSpec_nFreeArrays(JNIEnv* env, jobject object, jlong specPtr) {


//@line:37

        ImPlotSpec* spec = (ImPlotSpec*)specPtr;
        if (spec->LineColors)       { ImGui::MemFree(spec->LineColors);       spec->LineColors       = NULL; }
        if (spec->FillColors)       { ImGui::MemFree(spec->FillColors);       spec->FillColors       = NULL; }
        if (spec->MarkerSizes)      { ImGui::MemFree(spec->MarkerSizes);      spec->MarkerSizes      = NULL; }
        if (spec->MarkerLineColors) { ImGui::MemFree(spec->MarkerLineColors); spec->MarkerLineColors = NULL; }
        if (spec->MarkerFillColors) { ImGui::MemFree(spec->MarkerFillColors); spec->MarkerFillColors = NULL; }
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlotSpec_nGetLineColor(JNIEnv* env, jobject object, jobject dst) {


//@line:80

        Jni::ImVec4Cpy(env, THIS->LineColor, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlotSpec_nGetLineColorX(JNIEnv* env, jobject object) {


//@line:84

        return THIS->LineColor.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlotSpec_nGetLineColorY(JNIEnv* env, jobject object) {


//@line:88

        return THIS->LineColor.y;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlotSpec_nGetLineColorZ(JNIEnv* env, jobject object) {


//@line:92

        return THIS->LineColor.z;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlotSpec_nGetLineColorW(JNIEnv* env, jobject object) {


//@line:96

        return THIS->LineColor.w;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlotSpec_nSetLineColor(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY, jfloat valueZ, jfloat valueW) {

//@line:100

        ImVec4 value = ImVec4(valueX, valueY, valueZ, valueW);
        THIS->LineColor = value;
    
}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlotSpec_nGetLineWeight(JNIEnv* env, jobject object) {


//@line:113

        return THIS->LineWeight;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlotSpec_nSetLineWeight(JNIEnv* env, jobject object, jfloat value) {


//@line:117

        THIS->LineWeight = value;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlotSpec_nGetFillColor(JNIEnv* env, jobject object, jobject dst) {


//@line:155

        Jni::ImVec4Cpy(env, THIS->FillColor, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlotSpec_nGetFillColorX(JNIEnv* env, jobject object) {


//@line:159

        return THIS->FillColor.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlotSpec_nGetFillColorY(JNIEnv* env, jobject object) {


//@line:163

        return THIS->FillColor.y;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlotSpec_nGetFillColorZ(JNIEnv* env, jobject object) {


//@line:167

        return THIS->FillColor.z;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlotSpec_nGetFillColorW(JNIEnv* env, jobject object) {


//@line:171

        return THIS->FillColor.w;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlotSpec_nSetFillColor(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY, jfloat valueZ, jfloat valueW) {

//@line:175

        ImVec4 value = ImVec4(valueX, valueY, valueZ, valueW);
        THIS->FillColor = value;
    
}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlotSpec_nGetFillAlpha(JNIEnv* env, jobject object) {


//@line:188

        return THIS->FillAlpha;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlotSpec_nSetFillAlpha(JNIEnv* env, jobject object, jfloat value) {


//@line:192

        THIS->FillAlpha = value;
    

}

JNIEXPORT jint JNICALL Java_imgui_extension_implot_ImPlotSpec_nGetMarker(JNIEnv* env, jobject object) {


//@line:204

        return THIS->Marker;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlotSpec_nSetMarker(JNIEnv* env, jobject object, jint value) {


//@line:208

        THIS->Marker = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlotSpec_nGetMarkerSize(JNIEnv* env, jobject object) {


//@line:220

        return THIS->MarkerSize;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlotSpec_nSetMarkerSize(JNIEnv* env, jobject object, jfloat value) {


//@line:224

        THIS->MarkerSize = value;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlotSpec_nGetMarkerLineColor(JNIEnv* env, jobject object, jobject dst) {


//@line:262

        Jni::ImVec4Cpy(env, THIS->MarkerLineColor, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlotSpec_nGetMarkerLineColorX(JNIEnv* env, jobject object) {


//@line:266

        return THIS->MarkerLineColor.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlotSpec_nGetMarkerLineColorY(JNIEnv* env, jobject object) {


//@line:270

        return THIS->MarkerLineColor.y;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlotSpec_nGetMarkerLineColorZ(JNIEnv* env, jobject object) {


//@line:274

        return THIS->MarkerLineColor.z;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlotSpec_nGetMarkerLineColorW(JNIEnv* env, jobject object) {


//@line:278

        return THIS->MarkerLineColor.w;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlotSpec_nSetMarkerLineColor(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY, jfloat valueZ, jfloat valueW) {

//@line:282

        ImVec4 value = ImVec4(valueX, valueY, valueZ, valueW);
        THIS->MarkerLineColor = value;
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlotSpec_nGetMarkerFillColor(JNIEnv* env, jobject object, jobject dst) {


//@line:321

        Jni::ImVec4Cpy(env, THIS->MarkerFillColor, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlotSpec_nGetMarkerFillColorX(JNIEnv* env, jobject object) {


//@line:325

        return THIS->MarkerFillColor.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlotSpec_nGetMarkerFillColorY(JNIEnv* env, jobject object) {


//@line:329

        return THIS->MarkerFillColor.y;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlotSpec_nGetMarkerFillColorZ(JNIEnv* env, jobject object) {


//@line:333

        return THIS->MarkerFillColor.z;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlotSpec_nGetMarkerFillColorW(JNIEnv* env, jobject object) {


//@line:337

        return THIS->MarkerFillColor.w;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlotSpec_nSetMarkerFillColor(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY, jfloat valueZ, jfloat valueW) {

//@line:341

        ImVec4 value = ImVec4(valueX, valueY, valueZ, valueW);
        THIS->MarkerFillColor = value;
    
}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlotSpec_nGetSize(JNIEnv* env, jobject object) {


//@line:354

        return THIS->Size;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlotSpec_nSetSize(JNIEnv* env, jobject object, jfloat value) {


//@line:358

        THIS->Size = value;
    

}

JNIEXPORT jint JNICALL Java_imgui_extension_implot_ImPlotSpec_nGetOffset(JNIEnv* env, jobject object) {


//@line:370

        return THIS->Offset;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlotSpec_nSetOffset(JNIEnv* env, jobject object, jint value) {


//@line:374

        THIS->Offset = value;
    

}

JNIEXPORT jint JNICALL Java_imgui_extension_implot_ImPlotSpec_nGetStride(JNIEnv* env, jobject object) {


//@line:386

        return THIS->Stride;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlotSpec_nSetStride(JNIEnv* env, jobject object, jint value) {


//@line:390

        THIS->Stride = value;
    

}

JNIEXPORT jint JNICALL Java_imgui_extension_implot_ImPlotSpec_nGetFlags(JNIEnv* env, jobject object) {


//@line:402

        return THIS->Flags;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlotSpec_nSetFlags(JNIEnv* env, jobject object, jint value) {


//@line:406

        THIS->Flags = value;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlotSpec_nSetLineColors(JNIEnv* env, jobject object, jintArray obj_colors, jint len) {
	int* colors = (int*)env->GetPrimitiveArrayCritical(obj_colors, 0);


//@line:422

        if (THIS->LineColors) { ImGui::MemFree(THIS->LineColors); THIS->LineColors = NULL; }
        if (colors != NULL && len > 0) {
            ImU32* buf = (ImU32*)ImGui::MemAlloc(len * sizeof(ImU32));
            for (int i = 0; i < len; i++) { buf[i] = (ImU32)colors[i]; }
            THIS->LineColors = buf;
        }
    
	env->ReleasePrimitiveArrayCritical(obj_colors, colors, 0);

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlotSpec_nSetFillColors(JNIEnv* env, jobject object, jintArray obj_colors, jint len) {
	int* colors = (int*)env->GetPrimitiveArrayCritical(obj_colors, 0);


//@line:439

        if (THIS->FillColors) { ImGui::MemFree(THIS->FillColors); THIS->FillColors = NULL; }
        if (colors != NULL && len > 0) {
            ImU32* buf = (ImU32*)ImGui::MemAlloc(len * sizeof(ImU32));
            for (int i = 0; i < len; i++) { buf[i] = (ImU32)colors[i]; }
            THIS->FillColors = buf;
        }
    
	env->ReleasePrimitiveArrayCritical(obj_colors, colors, 0);

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlotSpec_nSetMarkerSizes(JNIEnv* env, jobject object, jfloatArray obj_sizes, jint len) {
	float* sizes = (float*)env->GetPrimitiveArrayCritical(obj_sizes, 0);


//@line:456

        if (THIS->MarkerSizes) { ImGui::MemFree(THIS->MarkerSizes); THIS->MarkerSizes = NULL; }
        if (sizes != NULL && len > 0) {
            float* buf = (float*)ImGui::MemAlloc(len * sizeof(float));
            for (int i = 0; i < len; i++) { buf[i] = sizes[i]; }
            THIS->MarkerSizes = buf;
        }
    
	env->ReleasePrimitiveArrayCritical(obj_sizes, sizes, 0);

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlotSpec_nSetMarkerLineColors(JNIEnv* env, jobject object, jintArray obj_colors, jint len) {
	int* colors = (int*)env->GetPrimitiveArrayCritical(obj_colors, 0);


//@line:473

        if (THIS->MarkerLineColors) { ImGui::MemFree(THIS->MarkerLineColors); THIS->MarkerLineColors = NULL; }
        if (colors != NULL && len > 0) {
            ImU32* buf = (ImU32*)ImGui::MemAlloc(len * sizeof(ImU32));
            for (int i = 0; i < len; i++) { buf[i] = (ImU32)colors[i]; }
            THIS->MarkerLineColors = buf;
        }
    
	env->ReleasePrimitiveArrayCritical(obj_colors, colors, 0);

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlotSpec_nSetMarkerFillColors(JNIEnv* env, jobject object, jintArray obj_colors, jint len) {
	int* colors = (int*)env->GetPrimitiveArrayCritical(obj_colors, 0);


//@line:490

        if (THIS->MarkerFillColors) { ImGui::MemFree(THIS->MarkerFillColors); THIS->MarkerFillColors = NULL; }
        if (colors != NULL && len > 0) {
            ImU32* buf = (ImU32*)ImGui::MemAlloc(len * sizeof(ImU32));
            for (int i = 0; i < len; i++) { buf[i] = (ImU32)colors[i]; }
            THIS->MarkerFillColors = buf;
        }
    
	env->ReleasePrimitiveArrayCritical(obj_colors, colors, 0);

}


//@line:499

        #undef THIS
     