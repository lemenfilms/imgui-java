#include <imgui_extension_nodeditor_NodeEditorStyle.h>

//@line:12

        #include "_nodeeditor.h"
        #define THIS ((ax::NodeEditor::Style*)STRUCT_PTR)
     JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditorStyle_nGetNodePadding(JNIEnv* env, jobject object, jobject dst) {


//@line:51

        Jni::ImVec4Cpy(env, THIS->NodePadding, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_nodeditor_NodeEditorStyle_nGetNodePaddingX(JNIEnv* env, jobject object) {


//@line:55

        return THIS->NodePadding.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_nodeditor_NodeEditorStyle_nGetNodePaddingY(JNIEnv* env, jobject object) {


//@line:59

        return THIS->NodePadding.y;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_nodeditor_NodeEditorStyle_nGetNodePaddingZ(JNIEnv* env, jobject object) {


//@line:63

        return THIS->NodePadding.z;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_nodeditor_NodeEditorStyle_nGetNodePaddingW(JNIEnv* env, jobject object) {


//@line:67

        return THIS->NodePadding.w;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditorStyle_nSetNodePadding(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY, jfloat valueZ, jfloat valueW) {

//@line:71

        ImVec4 value = ImVec4(valueX, valueY, valueZ, valueW);
        THIS->NodePadding = value;
    
}

JNIEXPORT jfloat JNICALL Java_imgui_extension_nodeditor_NodeEditorStyle_nGetNodeRounding(JNIEnv* env, jobject object) {


//@line:84

        return THIS->NodeRounding;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditorStyle_nSetNodeRounding(JNIEnv* env, jobject object, jfloat value) {


//@line:88

        THIS->NodeRounding = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_nodeditor_NodeEditorStyle_nGetNodeBorderWidth(JNIEnv* env, jobject object) {


//@line:100

        return THIS->NodeBorderWidth;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditorStyle_nSetNodeBorderWidth(JNIEnv* env, jobject object, jfloat value) {


//@line:104

        THIS->NodeBorderWidth = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_nodeditor_NodeEditorStyle_nGetHoveredNodeBorderWidth(JNIEnv* env, jobject object) {


//@line:116

        return THIS->HoveredNodeBorderWidth;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditorStyle_nSetHoveredNodeBorderWidth(JNIEnv* env, jobject object, jfloat value) {


//@line:120

        THIS->HoveredNodeBorderWidth = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_nodeditor_NodeEditorStyle_nGetHoverNodeBorderOffset(JNIEnv* env, jobject object) {


//@line:132

        return THIS->HoverNodeBorderOffset;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditorStyle_nSetHoverNodeBorderOffset(JNIEnv* env, jobject object, jfloat value) {


//@line:136

        THIS->HoverNodeBorderOffset = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_nodeditor_NodeEditorStyle_nGetSelectedNodeBorderWidth(JNIEnv* env, jobject object) {


//@line:148

        return THIS->SelectedNodeBorderWidth;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditorStyle_nSetSelectedNodeBorderWidth(JNIEnv* env, jobject object, jfloat value) {


//@line:152

        THIS->SelectedNodeBorderWidth = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_nodeditor_NodeEditorStyle_nGetSelectedNodeBorderOffset(JNIEnv* env, jobject object) {


//@line:164

        return THIS->SelectedNodeBorderOffset;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditorStyle_nSetSelectedNodeBorderOffset(JNIEnv* env, jobject object, jfloat value) {


//@line:168

        THIS->SelectedNodeBorderOffset = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_nodeditor_NodeEditorStyle_nGetPinRounding(JNIEnv* env, jobject object) {


//@line:180

        return THIS->PinRounding;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditorStyle_nSetPinRounding(JNIEnv* env, jobject object, jfloat value) {


//@line:184

        THIS->PinRounding = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_nodeditor_NodeEditorStyle_nGetPinBorderWidth(JNIEnv* env, jobject object) {


//@line:196

        return THIS->PinBorderWidth;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditorStyle_nSetPinBorderWidth(JNIEnv* env, jobject object, jfloat value) {


//@line:200

        THIS->PinBorderWidth = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_nodeditor_NodeEditorStyle_nGetLinkStrength(JNIEnv* env, jobject object) {


//@line:212

        return THIS->LinkStrength;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditorStyle_nSetLinkStrength(JNIEnv* env, jobject object, jfloat value) {


//@line:216

        THIS->LinkStrength = value;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditorStyle_nGetSourceDirection(JNIEnv* env, jobject object, jobject dst) {


//@line:246

        Jni::ImVec2Cpy(env, THIS->SourceDirection, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_nodeditor_NodeEditorStyle_nGetSourceDirectionX(JNIEnv* env, jobject object) {


//@line:250

        return THIS->SourceDirection.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_nodeditor_NodeEditorStyle_nGetSourceDirectionY(JNIEnv* env, jobject object) {


//@line:254

        return THIS->SourceDirection.y;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditorStyle_nSetSourceDirection(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:258

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->SourceDirection = value;
    
}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditorStyle_nGetTargetDirection(JNIEnv* env, jobject object, jobject dst) {


//@line:289

        Jni::ImVec2Cpy(env, THIS->TargetDirection, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_nodeditor_NodeEditorStyle_nGetTargetDirectionX(JNIEnv* env, jobject object) {


//@line:293

        return THIS->TargetDirection.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_nodeditor_NodeEditorStyle_nGetTargetDirectionY(JNIEnv* env, jobject object) {


//@line:297

        return THIS->TargetDirection.y;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditorStyle_nSetTargetDirection(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:301

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->TargetDirection = value;
    
}

JNIEXPORT jfloat JNICALL Java_imgui_extension_nodeditor_NodeEditorStyle_nGetScrollDuration(JNIEnv* env, jobject object) {


//@line:314

        return THIS->ScrollDuration;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditorStyle_nSetScrollDuration(JNIEnv* env, jobject object, jfloat value) {


//@line:318

        THIS->ScrollDuration = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_nodeditor_NodeEditorStyle_nGetFlowMarkerDistance(JNIEnv* env, jobject object) {


//@line:330

        return THIS->FlowMarkerDistance;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditorStyle_nSetFlowMarkerDistance(JNIEnv* env, jobject object, jfloat value) {


//@line:334

        THIS->FlowMarkerDistance = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_nodeditor_NodeEditorStyle_nGetFlowSpeed(JNIEnv* env, jobject object) {


//@line:346

        return THIS->FlowSpeed;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditorStyle_nSetFlowSpeed(JNIEnv* env, jobject object, jfloat value) {


//@line:350

        THIS->FlowSpeed = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_nodeditor_NodeEditorStyle_nGetFlowDuration(JNIEnv* env, jobject object) {


//@line:362

        return THIS->FlowDuration;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditorStyle_nSetFlowDuration(JNIEnv* env, jobject object, jfloat value) {


//@line:366

        THIS->FlowDuration = value;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditorStyle_nGetPivotAlignment(JNIEnv* env, jobject object, jobject dst) {


//@line:396

        Jni::ImVec2Cpy(env, THIS->PivotAlignment, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_nodeditor_NodeEditorStyle_nGetPivotAlignmentX(JNIEnv* env, jobject object) {


//@line:400

        return THIS->PivotAlignment.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_nodeditor_NodeEditorStyle_nGetPivotAlignmentY(JNIEnv* env, jobject object) {


//@line:404

        return THIS->PivotAlignment.y;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditorStyle_nSetPivotAlignment(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:408

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->PivotAlignment = value;
    
}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditorStyle_nGetPivotSize(JNIEnv* env, jobject object, jobject dst) {


//@line:439

        Jni::ImVec2Cpy(env, THIS->PivotSize, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_nodeditor_NodeEditorStyle_nGetPivotSizeX(JNIEnv* env, jobject object) {


//@line:443

        return THIS->PivotSize.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_nodeditor_NodeEditorStyle_nGetPivotSizeY(JNIEnv* env, jobject object) {


//@line:447

        return THIS->PivotSize.y;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditorStyle_nSetPivotSize(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:451

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->PivotSize = value;
    
}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditorStyle_nGetPivotScale(JNIEnv* env, jobject object, jobject dst) {


//@line:482

        Jni::ImVec2Cpy(env, THIS->PivotScale, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_nodeditor_NodeEditorStyle_nGetPivotScaleX(JNIEnv* env, jobject object) {


//@line:486

        return THIS->PivotScale.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_nodeditor_NodeEditorStyle_nGetPivotScaleY(JNIEnv* env, jobject object) {


//@line:490

        return THIS->PivotScale.y;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditorStyle_nSetPivotScale(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:494

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->PivotScale = value;
    
}

JNIEXPORT jfloat JNICALL Java_imgui_extension_nodeditor_NodeEditorStyle_nGetPinCorners(JNIEnv* env, jobject object) {


//@line:507

        return THIS->PinCorners;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditorStyle_nSetPinCorners(JNIEnv* env, jobject object, jfloat value) {


//@line:511

        THIS->PinCorners = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_nodeditor_NodeEditorStyle_nGetPinRadius(JNIEnv* env, jobject object) {


//@line:523

        return THIS->PinRadius;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditorStyle_nSetPinRadius(JNIEnv* env, jobject object, jfloat value) {


//@line:527

        THIS->PinRadius = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_nodeditor_NodeEditorStyle_nGetPinArrowSize(JNIEnv* env, jobject object) {


//@line:539

        return THIS->PinArrowSize;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditorStyle_nSetPinArrowSize(JNIEnv* env, jobject object, jfloat value) {


//@line:543

        THIS->PinArrowSize = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_nodeditor_NodeEditorStyle_nGetPinArrowWidth(JNIEnv* env, jobject object) {


//@line:555

        return THIS->PinArrowWidth;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditorStyle_nSetPinArrowWidth(JNIEnv* env, jobject object, jfloat value) {


//@line:559

        THIS->PinArrowWidth = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_nodeditor_NodeEditorStyle_nGetGroupRounding(JNIEnv* env, jobject object) {


//@line:571

        return THIS->GroupRounding;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditorStyle_nSetGroupRounding(JNIEnv* env, jobject object, jfloat value) {


//@line:575

        THIS->GroupRounding = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_nodeditor_NodeEditorStyle_nGetGroupBorderWidth(JNIEnv* env, jobject object) {


//@line:587

        return THIS->GroupBorderWidth;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditorStyle_nSetGroupBorderWidth(JNIEnv* env, jobject object, jfloat value) {


//@line:591

        THIS->GroupBorderWidth = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_nodeditor_NodeEditorStyle_nGetHighlightConnectedLinks(JNIEnv* env, jobject object) {


//@line:603

        return THIS->HighlightConnectedLinks;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditorStyle_nSetHighlightConnectedLinks(JNIEnv* env, jobject object, jfloat value) {


//@line:607

        THIS->HighlightConnectedLinks = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_nodeditor_NodeEditorStyle_nGetSnapLinkToPinDir(JNIEnv* env, jobject object) {


//@line:619

        return THIS->SnapLinkToPinDir;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditorStyle_nSetSnapLinkToPinDir(JNIEnv* env, jobject object, jfloat value) {


//@line:623

        THIS->SnapLinkToPinDir = value;
    

}

JNIEXPORT jobjectArray JNICALL Java_imgui_extension_nodeditor_NodeEditorStyle_nGetColors(JNIEnv* env, jobject object) {


//@line:635

        return Jni::NewImVec4Array(env, THIS->Colors, ax::NodeEditor::StyleColor_Count);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditorStyle_nSetColors(JNIEnv* env, jobject object, jobjectArray value) {


//@line:639

        Jni::ImVec4ArrayCpy(env, value, THIS->Colors, ax::NodeEditor::StyleColor_Count);
    

}


//@line:643

        #undef THIS
     