#include <imgui_ImGuiStyle.h>

//@line:24

        #include "_common.h"
        #define THIS ((ImGuiStyle*)STRUCT_PTR)
     JNIEXPORT jlong JNICALL Java_imgui_ImGuiStyle_nCreate(JNIEnv* env, jobject object) {


//@line:29

        return (uintptr_t)(new ImGuiStyle());
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetAlpha(JNIEnv* env, jobject object) {


//@line:47

        return THIS->Alpha;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetAlpha(JNIEnv* env, jobject object, jfloat value) {


//@line:51

        THIS->Alpha = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetDisabledAlpha(JNIEnv* env, jobject object) {


//@line:69

        return THIS->DisabledAlpha;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetDisabledAlpha(JNIEnv* env, jobject object, jfloat value) {


//@line:73

        THIS->DisabledAlpha = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetFontScaleMain(JNIEnv* env, jobject object) {


//@line:93

        return THIS->FontScaleMain;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetFontScaleMain(JNIEnv* env, jobject object, jfloat value) {


//@line:97

        THIS->FontScaleMain = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetFontScaleDpi(JNIEnv* env, jobject object) {


//@line:119

        return THIS->FontScaleDpi;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetFontScaleDpi(JNIEnv* env, jobject object, jfloat value) {


//@line:123

        THIS->FontScaleDpi = value;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nGetWindowPadding(JNIEnv* env, jobject object, jobject dst) {


//@line:171

        Jni::ImVec2Cpy(env, THIS->WindowPadding, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetWindowPaddingX(JNIEnv* env, jobject object) {


//@line:175

        return THIS->WindowPadding.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetWindowPaddingY(JNIEnv* env, jobject object) {


//@line:179

        return THIS->WindowPadding.y;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetWindowPadding(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:183

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->WindowPadding = value;
    
}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetWindowRounding(JNIEnv* env, jobject object) {


//@line:204

        return THIS->WindowRounding;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetWindowRounding(JNIEnv* env, jobject object, jfloat value) {


//@line:208

        THIS->WindowRounding = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetWindowBorderSize(JNIEnv* env, jobject object) {


//@line:226

        return THIS->WindowBorderSize;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetWindowBorderSize(JNIEnv* env, jobject object, jfloat value) {


//@line:230

        THIS->WindowBorderSize = value;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nGetWindowMinSize(JNIEnv* env, jobject object, jobject dst) {


//@line:278

        Jni::ImVec2Cpy(env, THIS->WindowMinSize, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetWindowMinSizeX(JNIEnv* env, jobject object) {


//@line:282

        return THIS->WindowMinSize.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetWindowMinSizeY(JNIEnv* env, jobject object) {


//@line:286

        return THIS->WindowMinSize.y;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetWindowMinSize(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:290

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->WindowMinSize = value;
    
}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nGetWindowTitleAlign(JNIEnv* env, jobject object, jobject dst) {


//@line:339

        Jni::ImVec2Cpy(env, THIS->WindowTitleAlign, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetWindowTitleAlignX(JNIEnv* env, jobject object) {


//@line:343

        return THIS->WindowTitleAlign.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetWindowTitleAlignY(JNIEnv* env, jobject object) {


//@line:347

        return THIS->WindowTitleAlign.y;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetWindowTitleAlign(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:351

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->WindowTitleAlign = value;
    
}

JNIEXPORT jint JNICALL Java_imgui_ImGuiStyle_nGetWindowMenuButtonPosition(JNIEnv* env, jobject object) {


//@line:370

        return THIS->WindowMenuButtonPosition;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetWindowMenuButtonPosition(JNIEnv* env, jobject object, jint value) {


//@line:374

        THIS->WindowMenuButtonPosition = static_cast<ImGuiDir>(value);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetChildRounding(JNIEnv* env, jobject object) {


//@line:392

        return THIS->ChildRounding;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetChildRounding(JNIEnv* env, jobject object, jfloat value) {


//@line:396

        THIS->ChildRounding = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetChildBorderSize(JNIEnv* env, jobject object) {


//@line:414

        return THIS->ChildBorderSize;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetChildBorderSize(JNIEnv* env, jobject object, jfloat value) {


//@line:418

        THIS->ChildBorderSize = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetPopupRounding(JNIEnv* env, jobject object) {


//@line:436

        return THIS->PopupRounding;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetPopupRounding(JNIEnv* env, jobject object, jfloat value) {


//@line:440

        THIS->PopupRounding = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetPopupBorderSize(JNIEnv* env, jobject object) {


//@line:458

        return THIS->PopupBorderSize;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetPopupBorderSize(JNIEnv* env, jobject object, jfloat value) {


//@line:462

        THIS->PopupBorderSize = value;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nGetFramePadding(JNIEnv* env, jobject object, jobject dst) {


//@line:510

        Jni::ImVec2Cpy(env, THIS->FramePadding, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetFramePaddingX(JNIEnv* env, jobject object) {


//@line:514

        return THIS->FramePadding.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetFramePaddingY(JNIEnv* env, jobject object) {


//@line:518

        return THIS->FramePadding.y;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetFramePadding(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:522

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->FramePadding = value;
    
}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetFrameRounding(JNIEnv* env, jobject object) {


//@line:541

        return THIS->FrameRounding;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetFrameRounding(JNIEnv* env, jobject object, jfloat value) {


//@line:545

        THIS->FrameRounding = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetFrameBorderSize(JNIEnv* env, jobject object) {


//@line:563

        return THIS->FrameBorderSize;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetFrameBorderSize(JNIEnv* env, jobject object, jfloat value) {


//@line:567

        THIS->FrameBorderSize = value;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nGetItemSpacing(JNIEnv* env, jobject object, jobject dst) {


//@line:615

        Jni::ImVec2Cpy(env, THIS->ItemSpacing, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetItemSpacingX(JNIEnv* env, jobject object) {


//@line:619

        return THIS->ItemSpacing.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetItemSpacingY(JNIEnv* env, jobject object) {


//@line:623

        return THIS->ItemSpacing.y;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetItemSpacing(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:627

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->ItemSpacing = value;
    
}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nGetItemInnerSpacing(JNIEnv* env, jobject object, jobject dst) {


//@line:676

        Jni::ImVec2Cpy(env, THIS->ItemInnerSpacing, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetItemInnerSpacingX(JNIEnv* env, jobject object) {


//@line:680

        return THIS->ItemInnerSpacing.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetItemInnerSpacingY(JNIEnv* env, jobject object) {


//@line:684

        return THIS->ItemInnerSpacing.y;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetItemInnerSpacing(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:688

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->ItemInnerSpacing = value;
    
}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nGetCellPadding(JNIEnv* env, jobject object, jobject dst) {


//@line:737

        Jni::ImVec2Cpy(env, THIS->CellPadding, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetCellPaddingX(JNIEnv* env, jobject object) {


//@line:741

        return THIS->CellPadding.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetCellPaddingY(JNIEnv* env, jobject object) {


//@line:745

        return THIS->CellPadding.y;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetCellPadding(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:749

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->CellPadding = value;
    
}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nGetTouchExtraPadding(JNIEnv* env, jobject object, jobject dst) {


//@line:804

        Jni::ImVec2Cpy(env, THIS->TouchExtraPadding, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetTouchExtraPaddingX(JNIEnv* env, jobject object) {


//@line:808

        return THIS->TouchExtraPadding.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetTouchExtraPaddingY(JNIEnv* env, jobject object) {


//@line:812

        return THIS->TouchExtraPadding.y;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetTouchExtraPadding(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:816

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->TouchExtraPadding = value;
    
}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetIndentSpacing(JNIEnv* env, jobject object) {


//@line:835

        return THIS->IndentSpacing;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetIndentSpacing(JNIEnv* env, jobject object, jfloat value) {


//@line:839

        THIS->IndentSpacing = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetColumnsMinSpacing(JNIEnv* env, jobject object) {


//@line:857

        return THIS->ColumnsMinSpacing;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetColumnsMinSpacing(JNIEnv* env, jobject object, jfloat value) {


//@line:861

        THIS->ColumnsMinSpacing = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetScrollbarSize(JNIEnv* env, jobject object) {


//@line:879

        return THIS->ScrollbarSize;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetScrollbarSize(JNIEnv* env, jobject object, jfloat value) {


//@line:883

        THIS->ScrollbarSize = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetScrollbarRounding(JNIEnv* env, jobject object) {


//@line:901

        return THIS->ScrollbarRounding;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetScrollbarRounding(JNIEnv* env, jobject object, jfloat value) {


//@line:905

        THIS->ScrollbarRounding = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetGrabMinSize(JNIEnv* env, jobject object) {


//@line:923

        return THIS->GrabMinSize;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetGrabMinSize(JNIEnv* env, jobject object, jfloat value) {


//@line:927

        THIS->GrabMinSize = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetGrabRounding(JNIEnv* env, jobject object) {


//@line:945

        return THIS->GrabRounding;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetGrabRounding(JNIEnv* env, jobject object, jfloat value) {


//@line:949

        THIS->GrabRounding = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetLogSliderDeadzone(JNIEnv* env, jobject object) {


//@line:967

        return THIS->LogSliderDeadzone;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetLogSliderDeadzone(JNIEnv* env, jobject object, jfloat value) {


//@line:971

        THIS->LogSliderDeadzone = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetTabRounding(JNIEnv* env, jobject object) {


//@line:989

        return THIS->TabRounding;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetTabRounding(JNIEnv* env, jobject object, jfloat value) {


//@line:993

        THIS->TabRounding = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetTabBorderSize(JNIEnv* env, jobject object) {


//@line:1011

        return THIS->TabBorderSize;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetTabBorderSize(JNIEnv* env, jobject object, jfloat value) {


//@line:1015

        THIS->TabBorderSize = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetTabCloseButtonMinWidthSelected(JNIEnv* env, jobject object) {


//@line:1039

        return THIS->TabCloseButtonMinWidthSelected;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetTabCloseButtonMinWidthSelected(JNIEnv* env, jobject object, jfloat value) {


//@line:1043

        THIS->TabCloseButtonMinWidthSelected = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetTabCloseButtonMinWidthUnselected(JNIEnv* env, jobject object) {


//@line:1067

        return THIS->TabCloseButtonMinWidthUnselected;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetTabCloseButtonMinWidthUnselected(JNIEnv* env, jobject object, jfloat value) {


//@line:1071

        THIS->TabCloseButtonMinWidthUnselected = value;
    

}

JNIEXPORT jint JNICALL Java_imgui_ImGuiStyle_nGetColorButtonPosition(JNIEnv* env, jobject object) {


//@line:1089

        return THIS->ColorButtonPosition;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetColorButtonPosition(JNIEnv* env, jobject object, jint value) {


//@line:1093

        THIS->ColorButtonPosition = static_cast<ImGuiDir>(value);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nGetButtonTextAlign(JNIEnv* env, jobject object, jobject dst) {


//@line:1141

        Jni::ImVec2Cpy(env, THIS->ButtonTextAlign, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetButtonTextAlignX(JNIEnv* env, jobject object) {


//@line:1145

        return THIS->ButtonTextAlign.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetButtonTextAlignY(JNIEnv* env, jobject object) {


//@line:1149

        return THIS->ButtonTextAlign.y;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetButtonTextAlign(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:1153

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->ButtonTextAlign = value;
    
}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nGetSelectableTextAlign(JNIEnv* env, jobject object, jobject dst) {


//@line:1208

        Jni::ImVec2Cpy(env, THIS->SelectableTextAlign, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetSelectableTextAlignX(JNIEnv* env, jobject object) {


//@line:1212

        return THIS->SelectableTextAlign.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetSelectableTextAlignY(JNIEnv* env, jobject object) {


//@line:1216

        return THIS->SelectableTextAlign.y;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetSelectableTextAlign(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:1220

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->SelectableTextAlign = value;
    
}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetImageRounding(JNIEnv* env, jobject object) {


//@line:1239

        return THIS->ImageRounding;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetImageRounding(JNIEnv* env, jobject object, jfloat value) {


//@line:1243

        THIS->ImageRounding = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetImageBorderSize(JNIEnv* env, jobject object) {


//@line:1261

        return THIS->ImageBorderSize;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetImageBorderSize(JNIEnv* env, jobject object, jfloat value) {


//@line:1265

        THIS->ImageBorderSize = value;
    

}

JNIEXPORT jint JNICALL Java_imgui_ImGuiStyle_nGetTreeLinesFlags(JNIEnv* env, jobject object) {


//@line:1309

        return THIS->TreeLinesFlags;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetTreeLinesFlags(JNIEnv* env, jobject object, jint value) {


//@line:1313

        THIS->TreeLinesFlags = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetTreeLinesSize(JNIEnv* env, jobject object) {


//@line:1331

        return THIS->TreeLinesSize;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetTreeLinesSize(JNIEnv* env, jobject object, jfloat value) {


//@line:1335

        THIS->TreeLinesSize = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetTreeLinesRounding(JNIEnv* env, jobject object) {


//@line:1353

        return THIS->TreeLinesRounding;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetTreeLinesRounding(JNIEnv* env, jobject object, jfloat value) {


//@line:1357

        THIS->TreeLinesRounding = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetColorMarkerSize(JNIEnv* env, jobject object) {


//@line:1377

        return THIS->ColorMarkerSize;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetColorMarkerSize(JNIEnv* env, jobject object, jfloat value) {


//@line:1381

        THIS->ColorMarkerSize = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetSeparatorSize(JNIEnv* env, jobject object) {


//@line:1399

        return THIS->SeparatorSize;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetSeparatorSize(JNIEnv* env, jobject object, jfloat value) {


//@line:1403

        THIS->SeparatorSize = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetSeparatorTextBorderSize(JNIEnv* env, jobject object) {


//@line:1421

        return THIS->SeparatorTextBorderSize;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetSeparatorTextBorderSize(JNIEnv* env, jobject object, jfloat value) {


//@line:1425

        THIS->SeparatorTextBorderSize = value;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nGetSeparatorTextAlign(JNIEnv* env, jobject object, jobject dst) {


//@line:1473

        Jni::ImVec2Cpy(env, THIS->SeparatorTextAlign, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetSeparatorTextAlignX(JNIEnv* env, jobject object) {


//@line:1477

        return THIS->SeparatorTextAlign.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetSeparatorTextAlignY(JNIEnv* env, jobject object) {


//@line:1481

        return THIS->SeparatorTextAlign.y;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetSeparatorTextAlign(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:1485

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->SeparatorTextAlign = value;
    
}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nGetSeparatorTextPadding(JNIEnv* env, jobject object, jobject dst) {


//@line:1534

        Jni::ImVec2Cpy(env, THIS->SeparatorTextPadding, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetSeparatorTextPaddingX(JNIEnv* env, jobject object) {


//@line:1538

        return THIS->SeparatorTextPadding.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetSeparatorTextPaddingY(JNIEnv* env, jobject object) {


//@line:1542

        return THIS->SeparatorTextPadding.y;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetSeparatorTextPadding(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:1546

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->SeparatorTextPadding = value;
    
}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nGetDisplayWindowPadding(JNIEnv* env, jobject object, jobject dst) {


//@line:1595

        Jni::ImVec2Cpy(env, THIS->DisplayWindowPadding, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetDisplayWindowPaddingX(JNIEnv* env, jobject object) {


//@line:1599

        return THIS->DisplayWindowPadding.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetDisplayWindowPaddingY(JNIEnv* env, jobject object) {


//@line:1603

        return THIS->DisplayWindowPadding.y;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetDisplayWindowPadding(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:1607

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->DisplayWindowPadding = value;
    
}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nGetDisplaySafeAreaPadding(JNIEnv* env, jobject object, jobject dst) {


//@line:1662

        Jni::ImVec2Cpy(env, THIS->DisplaySafeAreaPadding, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetDisplaySafeAreaPaddingX(JNIEnv* env, jobject object) {


//@line:1666

        return THIS->DisplaySafeAreaPadding.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetDisplaySafeAreaPaddingY(JNIEnv* env, jobject object) {


//@line:1670

        return THIS->DisplaySafeAreaPadding.y;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetDisplaySafeAreaPadding(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:1674

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->DisplaySafeAreaPadding = value;
    
}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetDockingSeparatorSize(JNIEnv* env, jobject object) {


//@line:1693

        return THIS->DockingSeparatorSize;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetDockingSeparatorSize(JNIEnv* env, jobject object, jfloat value) {


//@line:1697

        THIS->DockingSeparatorSize = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetMouseCursorScale(JNIEnv* env, jobject object) {


//@line:1715

        return THIS->MouseCursorScale;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetMouseCursorScale(JNIEnv* env, jobject object, jfloat value) {


//@line:1719

        THIS->MouseCursorScale = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGuiStyle_nGetAntiAliasedLines(JNIEnv* env, jobject object) {


//@line:1737

        return THIS->AntiAliasedLines;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetAntiAliasedLines(JNIEnv* env, jobject object, jboolean value) {


//@line:1741

        THIS->AntiAliasedLines = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGuiStyle_nGetAntiAliasedLinesUseTex(JNIEnv* env, jobject object) {


//@line:1763

        return THIS->AntiAliasedLinesUseTex;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetAntiAliasedLinesUseTex(JNIEnv* env, jobject object, jboolean value) {


//@line:1767

        THIS->AntiAliasedLinesUseTex = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_ImGuiStyle_nGetAntiAliasedFill(JNIEnv* env, jobject object) {


//@line:1787

        return THIS->AntiAliasedFill;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetAntiAliasedFill(JNIEnv* env, jobject object, jboolean value) {


//@line:1791

        THIS->AntiAliasedFill = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetCurveTessellationTol(JNIEnv* env, jobject object) {


//@line:1811

        return THIS->CurveTessellationTol;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetCurveTessellationTol(JNIEnv* env, jobject object, jfloat value) {


//@line:1815

        THIS->CurveTessellationTol = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetCircleTessellationMaxError(JNIEnv* env, jobject object) {


//@line:1835

        return THIS->CircleTessellationMaxError;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetCircleTessellationMaxError(JNIEnv* env, jobject object, jfloat value) {


//@line:1839

        THIS->CircleTessellationMaxError = value;
    

}

JNIEXPORT jobjectArray JNICALL Java_imgui_ImGuiStyle_nGetColors(JNIEnv* env, jobject object) {


//@line:1851

        return Jni::NewImVec4Array(env, THIS->Colors, ImGuiCol_COUNT);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetColors(JNIEnv* env, jobject object, jobjectArray value) {


//@line:1855

        Jni::ImVec4ArrayCpy(env, value, THIS->Colors, ImGuiCol_COUNT);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_getColor(JNIEnv* env, jobject object, jint col, jobject dst) {


//@line:1865

        Jni::ImVec4Cpy(env, THIS->Colors[col], dst);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_setColor__IFFFF(JNIEnv* env, jobject object, jint col, jfloat r, jfloat g, jfloat b, jfloat a) {


//@line:1869

        THIS->Colors[col] = ImColor((float)r, (float)g, (float)b, (float)a);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_setColor__IIIII(JNIEnv* env, jobject object, jint col, jint r, jint g, jint b, jint a) {


//@line:1873

        THIS->Colors[col] = ImColor((int)r, (int)g, (int)b, (int)a);
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_setColor__II(JNIEnv* env, jobject object, jint col, jint value) {


//@line:1877

        THIS->Colors[col] = ImColor(value);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetHoverStationaryDelay(JNIEnv* env, jobject object) {


//@line:1898

        return THIS->HoverStationaryDelay;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetHoverStationaryDelay(JNIEnv* env, jobject object, jfloat value) {


//@line:1902

        THIS->HoverStationaryDelay = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetHoverDelayShort(JNIEnv* env, jobject object) {


//@line:1920

        return THIS->HoverDelayShort;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetHoverDelayShort(JNIEnv* env, jobject object, jfloat value) {


//@line:1924

        THIS->HoverDelayShort = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_ImGuiStyle_nGetHoverDelayNormal(JNIEnv* env, jobject object) {


//@line:1942

        return THIS->HoverDelayNormal;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetHoverDelayNormal(JNIEnv* env, jobject object, jfloat value) {


//@line:1946

        THIS->HoverDelayNormal = value;
    

}

JNIEXPORT jint JNICALL Java_imgui_ImGuiStyle_nGetHoverFlagsForTooltipMouse(JNIEnv* env, jobject object) {


//@line:1964

        return THIS->HoverFlagsForTooltipMouse;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetHoverFlagsForTooltipMouse(JNIEnv* env, jobject object, jint value) {


//@line:1968

        THIS->HoverFlagsForTooltipMouse = value;
    

}

JNIEXPORT jint JNICALL Java_imgui_ImGuiStyle_nGetHoverFlagsForTooltipNav(JNIEnv* env, jobject object) {


//@line:1986

        return THIS->HoverFlagsForTooltipNav;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nSetHoverFlagsForTooltipNav(JNIEnv* env, jobject object, jint value) {


//@line:1990

        THIS->HoverFlagsForTooltipNav = value;
    

}

JNIEXPORT void JNICALL Java_imgui_ImGuiStyle_nScaleAllSizes(JNIEnv* env, jobject object, jfloat scaleFactor) {


//@line:1998

        THIS->ScaleAllSizes(scaleFactor);
    

}


//@line:2002

        #undef THIS
     