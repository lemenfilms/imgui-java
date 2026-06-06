#include <imgui_extension_implot_ImPlotInputMap.h>

//@line:19

        #include "_implot.h"
        #define THIS ((ImPlotInputMap*)STRUCT_PTR)
     JNIEXPORT jlong JNICALL Java_imgui_extension_implot_ImPlotInputMap_nCreate(JNIEnv* env, jobject object) {


//@line:24

        return (uintptr_t)(new ImPlotInputMap());
    

}

JNIEXPORT jint JNICALL Java_imgui_extension_implot_ImPlotInputMap_nGetPan(JNIEnv* env, jobject object) {


//@line:42

        return THIS->Pan;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlotInputMap_nSetPan(JNIEnv* env, jobject object, jint value) {


//@line:46

        THIS->Pan = value;
    

}

JNIEXPORT jint JNICALL Java_imgui_extension_implot_ImPlotInputMap_nGetPanMod(JNIEnv* env, jobject object) {


//@line:64

        return THIS->PanMod;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlotInputMap_nSetPanMod(JNIEnv* env, jobject object, jint value) {


//@line:68

        THIS->PanMod = value;
    

}

JNIEXPORT jint JNICALL Java_imgui_extension_implot_ImPlotInputMap_nGetFit(JNIEnv* env, jobject object) {


//@line:86

        return THIS->Fit;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlotInputMap_nSetFit(JNIEnv* env, jobject object, jint value) {


//@line:90

        THIS->Fit = value;
    

}

JNIEXPORT jint JNICALL Java_imgui_extension_implot_ImPlotInputMap_nGetSelect(JNIEnv* env, jobject object) {


//@line:110

        return THIS->Select;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlotInputMap_nSetSelect(JNIEnv* env, jobject object, jint value) {


//@line:114

        THIS->Select = value;
    

}

JNIEXPORT jint JNICALL Java_imgui_extension_implot_ImPlotInputMap_nGetSelectCancel(JNIEnv* env, jobject object) {


//@line:134

        return THIS->SelectCancel;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlotInputMap_nSetSelectCancel(JNIEnv* env, jobject object, jint value) {


//@line:138

        THIS->SelectCancel = value;
    

}

JNIEXPORT jint JNICALL Java_imgui_extension_implot_ImPlotInputMap_nGetSelectMod(JNIEnv* env, jobject object) {


//@line:156

        return THIS->SelectMod;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlotInputMap_nSetSelectMod(JNIEnv* env, jobject object, jint value) {


//@line:160

        THIS->SelectMod = value;
    

}

JNIEXPORT jint JNICALL Java_imgui_extension_implot_ImPlotInputMap_nGetSelectHorzMod(JNIEnv* env, jobject object) {


//@line:180

        return THIS->SelectHorzMod;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlotInputMap_nSetSelectHorzMod(JNIEnv* env, jobject object, jint value) {


//@line:184

        THIS->SelectHorzMod = value;
    

}

JNIEXPORT jint JNICALL Java_imgui_extension_implot_ImPlotInputMap_nGetSelectVertMod(JNIEnv* env, jobject object) {


//@line:204

        return THIS->SelectVertMod;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlotInputMap_nSetSelectVertMod(JNIEnv* env, jobject object, jint value) {


//@line:208

        THIS->SelectVertMod = value;
    

}

JNIEXPORT jint JNICALL Java_imgui_extension_implot_ImPlotInputMap_nGetMenu(JNIEnv* env, jobject object) {


//@line:226

        return THIS->Menu;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlotInputMap_nSetMenu(JNIEnv* env, jobject object, jint value) {


//@line:230

        THIS->Menu = value;
    

}

JNIEXPORT jint JNICALL Java_imgui_extension_implot_ImPlotInputMap_nGetOverrideMod(JNIEnv* env, jobject object) {


//@line:250

        return THIS->OverrideMod;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlotInputMap_nSetOverrideMod(JNIEnv* env, jobject object, jint value) {


//@line:254

        THIS->OverrideMod = value;
    

}

JNIEXPORT jint JNICALL Java_imgui_extension_implot_ImPlotInputMap_nGetZoomMod(JNIEnv* env, jobject object) {


//@line:272

        return THIS->ZoomMod;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlotInputMap_nSetZoomMod(JNIEnv* env, jobject object, jint value) {


//@line:276

        THIS->ZoomMod = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlotInputMap_nGetZoomRate(JNIEnv* env, jobject object) {


//@line:296

        return THIS->ZoomRate;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlotInputMap_nSetZoomRate(JNIEnv* env, jobject object, jfloat value) {


//@line:300

        THIS->ZoomRate = value;
    

}


//@line:304

        #undef THIS
     