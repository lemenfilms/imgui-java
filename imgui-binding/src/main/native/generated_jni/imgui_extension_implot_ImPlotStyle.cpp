#include <imgui_extension_implot_ImPlotStyle.h>

//@line:21

        #include "_implot.h"
        #define THIS ((ImPlotStyle*)STRUCT_PTR)
     JNIEXPORT jlong JNICALL Java_imgui_extension_implot_ImPlotStyle_nCreate(JNIEnv* env, jobject object) {


//@line:26

        return (uintptr_t)(new ImPlotStyle());
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlotStyle_nGetPlotBorderSize(JNIEnv* env, jobject object) {


//@line:38

        return THIS->PlotBorderSize;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlotStyle_nSetPlotBorderSize(JNIEnv* env, jobject object, jfloat value) {


//@line:42

        THIS->PlotBorderSize = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlotStyle_nGetMinorAlpha(JNIEnv* env, jobject object) {


//@line:54

        return THIS->MinorAlpha;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlotStyle_nSetMinorAlpha(JNIEnv* env, jobject object, jfloat value) {


//@line:58

        THIS->MinorAlpha = value;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlotStyle_nGetMajorTickLen(JNIEnv* env, jobject object, jobject dst) {


//@line:88

        Jni::ImVec2Cpy(env, THIS->MajorTickLen, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlotStyle_nGetMajorTickLenX(JNIEnv* env, jobject object) {


//@line:92

        return THIS->MajorTickLen.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlotStyle_nGetMajorTickLenY(JNIEnv* env, jobject object) {


//@line:96

        return THIS->MajorTickLen.y;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlotStyle_nSetMajorTickLen(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:100

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->MajorTickLen = value;
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlotStyle_nGetMinorTickLen(JNIEnv* env, jobject object, jobject dst) {


//@line:131

        Jni::ImVec2Cpy(env, THIS->MinorTickLen, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlotStyle_nGetMinorTickLenX(JNIEnv* env, jobject object) {


//@line:135

        return THIS->MinorTickLen.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlotStyle_nGetMinorTickLenY(JNIEnv* env, jobject object) {


//@line:139

        return THIS->MinorTickLen.y;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlotStyle_nSetMinorTickLen(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:143

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->MinorTickLen = value;
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlotStyle_nGetMajorTickSize(JNIEnv* env, jobject object, jobject dst) {


//@line:174

        Jni::ImVec2Cpy(env, THIS->MajorTickSize, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlotStyle_nGetMajorTickSizeX(JNIEnv* env, jobject object) {


//@line:178

        return THIS->MajorTickSize.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlotStyle_nGetMajorTickSizeY(JNIEnv* env, jobject object) {


//@line:182

        return THIS->MajorTickSize.y;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlotStyle_nSetMajorTickSize(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:186

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->MajorTickSize = value;
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlotStyle_nGetMinorTickSize(JNIEnv* env, jobject object, jobject dst) {


//@line:217

        Jni::ImVec2Cpy(env, THIS->MinorTickSize, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlotStyle_nGetMinorTickSizeX(JNIEnv* env, jobject object) {


//@line:221

        return THIS->MinorTickSize.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlotStyle_nGetMinorTickSizeY(JNIEnv* env, jobject object) {


//@line:225

        return THIS->MinorTickSize.y;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlotStyle_nSetMinorTickSize(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:229

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->MinorTickSize = value;
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlotStyle_nGetMajorGridSize(JNIEnv* env, jobject object, jobject dst) {


//@line:260

        Jni::ImVec2Cpy(env, THIS->MajorGridSize, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlotStyle_nGetMajorGridSizeX(JNIEnv* env, jobject object) {


//@line:264

        return THIS->MajorGridSize.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlotStyle_nGetMajorGridSizeY(JNIEnv* env, jobject object) {


//@line:268

        return THIS->MajorGridSize.y;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlotStyle_nSetMajorGridSize(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:272

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->MajorGridSize = value;
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlotStyle_nGetMinorGridSize(JNIEnv* env, jobject object, jobject dst) {


//@line:303

        Jni::ImVec2Cpy(env, THIS->MinorGridSize, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlotStyle_nGetMinorGridSizeX(JNIEnv* env, jobject object) {


//@line:307

        return THIS->MinorGridSize.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlotStyle_nGetMinorGridSizeY(JNIEnv* env, jobject object) {


//@line:311

        return THIS->MinorGridSize.y;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlotStyle_nSetMinorGridSize(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:315

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->MinorGridSize = value;
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlotStyle_nGetPlotPadding(JNIEnv* env, jobject object, jobject dst) {


//@line:346

        Jni::ImVec2Cpy(env, THIS->PlotPadding, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlotStyle_nGetPlotPaddingX(JNIEnv* env, jobject object) {


//@line:350

        return THIS->PlotPadding.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlotStyle_nGetPlotPaddingY(JNIEnv* env, jobject object) {


//@line:354

        return THIS->PlotPadding.y;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlotStyle_nSetPlotPadding(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:358

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->PlotPadding = value;
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlotStyle_nGetLabelPadding(JNIEnv* env, jobject object, jobject dst) {


//@line:389

        Jni::ImVec2Cpy(env, THIS->LabelPadding, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlotStyle_nGetLabelPaddingX(JNIEnv* env, jobject object) {


//@line:393

        return THIS->LabelPadding.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlotStyle_nGetLabelPaddingY(JNIEnv* env, jobject object) {


//@line:397

        return THIS->LabelPadding.y;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlotStyle_nSetLabelPadding(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:401

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->LabelPadding = value;
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlotStyle_nGetLegendPadding(JNIEnv* env, jobject object, jobject dst) {


//@line:432

        Jni::ImVec2Cpy(env, THIS->LegendPadding, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlotStyle_nGetLegendPaddingX(JNIEnv* env, jobject object) {


//@line:436

        return THIS->LegendPadding.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlotStyle_nGetLegendPaddingY(JNIEnv* env, jobject object) {


//@line:440

        return THIS->LegendPadding.y;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlotStyle_nSetLegendPadding(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:444

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->LegendPadding = value;
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlotStyle_nGetLegendInnerPadding(JNIEnv* env, jobject object, jobject dst) {


//@line:475

        Jni::ImVec2Cpy(env, THIS->LegendInnerPadding, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlotStyle_nGetLegendInnerPaddingX(JNIEnv* env, jobject object) {


//@line:479

        return THIS->LegendInnerPadding.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlotStyle_nGetLegendInnerPaddingY(JNIEnv* env, jobject object) {


//@line:483

        return THIS->LegendInnerPadding.y;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlotStyle_nSetLegendInnerPadding(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:487

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->LegendInnerPadding = value;
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlotStyle_nGetLegendSpacing(JNIEnv* env, jobject object, jobject dst) {


//@line:518

        Jni::ImVec2Cpy(env, THIS->LegendSpacing, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlotStyle_nGetLegendSpacingX(JNIEnv* env, jobject object) {


//@line:522

        return THIS->LegendSpacing.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlotStyle_nGetLegendSpacingY(JNIEnv* env, jobject object) {


//@line:526

        return THIS->LegendSpacing.y;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlotStyle_nSetLegendSpacing(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:530

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->LegendSpacing = value;
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlotStyle_nGetMousePosPadding(JNIEnv* env, jobject object, jobject dst) {


//@line:561

        Jni::ImVec2Cpy(env, THIS->MousePosPadding, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlotStyle_nGetMousePosPaddingX(JNIEnv* env, jobject object) {


//@line:565

        return THIS->MousePosPadding.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlotStyle_nGetMousePosPaddingY(JNIEnv* env, jobject object) {


//@line:569

        return THIS->MousePosPadding.y;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlotStyle_nSetMousePosPadding(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:573

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->MousePosPadding = value;
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlotStyle_nGetAnnotationPadding(JNIEnv* env, jobject object, jobject dst) {


//@line:604

        Jni::ImVec2Cpy(env, THIS->AnnotationPadding, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlotStyle_nGetAnnotationPaddingX(JNIEnv* env, jobject object) {


//@line:608

        return THIS->AnnotationPadding.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlotStyle_nGetAnnotationPaddingY(JNIEnv* env, jobject object) {


//@line:612

        return THIS->AnnotationPadding.y;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlotStyle_nSetAnnotationPadding(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:616

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->AnnotationPadding = value;
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlotStyle_nGetFitPadding(JNIEnv* env, jobject object, jobject dst) {


//@line:647

        Jni::ImVec2Cpy(env, THIS->FitPadding, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlotStyle_nGetFitPaddingX(JNIEnv* env, jobject object) {


//@line:651

        return THIS->FitPadding.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlotStyle_nGetFitPaddingY(JNIEnv* env, jobject object) {


//@line:655

        return THIS->FitPadding.y;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlotStyle_nSetFitPadding(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:659

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->FitPadding = value;
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlotStyle_nGetPlotDefaultSize(JNIEnv* env, jobject object, jobject dst) {


//@line:690

        Jni::ImVec2Cpy(env, THIS->PlotDefaultSize, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlotStyle_nGetPlotDefaultSizeX(JNIEnv* env, jobject object) {


//@line:694

        return THIS->PlotDefaultSize.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlotStyle_nGetPlotDefaultSizeY(JNIEnv* env, jobject object) {


//@line:698

        return THIS->PlotDefaultSize.y;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlotStyle_nSetPlotDefaultSize(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:702

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->PlotDefaultSize = value;
    
}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlotStyle_nGetPlotMinSize(JNIEnv* env, jobject object, jobject dst) {


//@line:733

        Jni::ImVec2Cpy(env, THIS->PlotMinSize, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlotStyle_nGetPlotMinSizeX(JNIEnv* env, jobject object) {


//@line:737

        return THIS->PlotMinSize.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlotStyle_nGetPlotMinSizeY(JNIEnv* env, jobject object) {


//@line:741

        return THIS->PlotMinSize.y;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlotStyle_nSetPlotMinSize(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:745

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->PlotMinSize = value;
    
}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlotStyle_nGetDigitalPadding(JNIEnv* env, jobject object) {


//@line:758

        return THIS->DigitalPadding;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlotStyle_nSetDigitalPadding(JNIEnv* env, jobject object, jfloat value) {


//@line:762

        THIS->DigitalPadding = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_implot_ImPlotStyle_nGetDigitalSpacing(JNIEnv* env, jobject object) {


//@line:774

        return THIS->DigitalSpacing;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlotStyle_nSetDigitalSpacing(JNIEnv* env, jobject object, jfloat value) {


//@line:778

        THIS->DigitalSpacing = value;
    

}

JNIEXPORT jobjectArray JNICALL Java_imgui_extension_implot_ImPlotStyle_nGetColors(JNIEnv* env, jobject object) {


//@line:790

        return Jni::NewImVec4Array(env, THIS->Colors, ImPlotCol_COUNT);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlotStyle_nSetColors(JNIEnv* env, jobject object, jobjectArray value) {


//@line:794

        Jni::ImVec4ArrayCpy(env, value, THIS->Colors, ImPlotCol_COUNT);
    

}

JNIEXPORT jint JNICALL Java_imgui_extension_implot_ImPlotStyle_nGetColormap(JNIEnv* env, jobject object) {


//@line:806

        return THIS->Colormap;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlotStyle_nSetColormap(JNIEnv* env, jobject object, jint value) {


//@line:810

        THIS->Colormap = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_implot_ImPlotStyle_nGetUseLocalTime(JNIEnv* env, jobject object) {


//@line:822

        return THIS->UseLocalTime;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlotStyle_nSetUseLocalTime(JNIEnv* env, jobject object, jboolean value) {


//@line:826

        THIS->UseLocalTime = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_implot_ImPlotStyle_nGetUseISO8601(JNIEnv* env, jobject object) {


//@line:838

        return THIS->UseISO8601;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlotStyle_nSetUseISO8601(JNIEnv* env, jobject object, jboolean value) {


//@line:842

        THIS->UseISO8601 = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_implot_ImPlotStyle_nGetUse24HourClock(JNIEnv* env, jobject object) {


//@line:854

        return THIS->Use24HourClock;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_implot_ImPlotStyle_nSetUse24HourClock(JNIEnv* env, jobject object, jboolean value) {


//@line:858

        THIS->Use24HourClock = value;
    

}


//@line:862

        #undef THIS
     