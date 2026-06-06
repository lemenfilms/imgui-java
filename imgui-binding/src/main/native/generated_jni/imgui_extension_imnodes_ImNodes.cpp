#include <imgui_extension_imnodes_ImNodes.h>

//@line:18

        #include "_imnodes.h"
     JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodes_nSetImGuiContext(JNIEnv* env, jclass clazz, jlong ctx) {


//@line:32

        ImNodes::SetImGuiContext(reinterpret_cast<ImGuiContext*>(ctx));
    

}

JNIEXPORT jlong JNICALL Java_imgui_extension_imnodes_ImNodes_nCreateContext(JNIEnv* env, jclass clazz) {


//@line:40

        return (uintptr_t)ImNodes::CreateContext();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodes_nDestroyContext__(JNIEnv* env, jclass clazz) {


//@line:52

        ImNodes::DestroyContext();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodes_nDestroyContext__J(JNIEnv* env, jclass clazz, jlong ctx) {


//@line:56

        ImNodes::DestroyContext(reinterpret_cast<ImNodesContext*>(ctx));
    

}

JNIEXPORT jlong JNICALL Java_imgui_extension_imnodes_ImNodes_nGetCurrentContext(JNIEnv* env, jclass clazz) {


//@line:64

        return (uintptr_t)ImNodes::GetCurrentContext();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodes_nSetCurrentContext(JNIEnv* env, jclass clazz, jlong ctx) {


//@line:72

        ImNodes::SetCurrentContext(reinterpret_cast<ImNodesContext*>(ctx));
    

}

JNIEXPORT jlong JNICALL Java_imgui_extension_imnodes_ImNodes_nEditorContextCreate(JNIEnv* env, jclass clazz) {


//@line:80

        return (uintptr_t)ImNodes::EditorContextCreate();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodes_nEditorContextFree(JNIEnv* env, jclass clazz, jlong context) {


//@line:88

        ImNodes::EditorContextFree(reinterpret_cast<ImNodesEditorContext*>(context));
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodes_nEditorContextSet(JNIEnv* env, jclass clazz, jlong context) {


//@line:96

        ImNodes::EditorContextSet(reinterpret_cast<ImNodesEditorContext*>(context));
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodes_nEditorContextGetPanning(JNIEnv* env, jclass clazz, jobject dst) {


//@line:118

        Jni::ImVec2Cpy(env, ImNodes::EditorContextGetPanning(), dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_imnodes_ImNodes_nEditorContextGetPanningX(JNIEnv* env, jclass clazz) {


//@line:122

        return ImNodes::EditorContextGetPanning().x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_imnodes_ImNodes_nEditorContextGetPanningY(JNIEnv* env, jclass clazz) {


//@line:126

        return ImNodes::EditorContextGetPanning().y;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodes_nEditorContextResetPanning(JNIEnv* env, jclass clazz, jfloat posX, jfloat posY) {

//@line:138

        ImVec2 pos = ImVec2(posX, posY);
        ImNodes::EditorContextResetPanning(pos);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodes_nEditorContextMoveToNode(JNIEnv* env, jclass clazz, jint nodeId) {


//@line:147

        ImNodes::EditorContextMoveToNode(nodeId);
    

}

JNIEXPORT jlong JNICALL Java_imgui_extension_imnodes_ImNodes_nGetIO(JNIEnv* env, jclass clazz) {


//@line:158

        return (uintptr_t)&ImNodes::GetIO();
    

}

JNIEXPORT jlong JNICALL Java_imgui_extension_imnodes_ImNodes_nGetStyle(JNIEnv* env, jclass clazz) {


//@line:172

        return (uintptr_t)&ImNodes::GetStyle();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodes_nStyleColorsDark__(JNIEnv* env, jclass clazz) {


//@line:186

        ImNodes::StyleColorsDark();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodes_nStyleColorsDark__J(JNIEnv* env, jclass clazz, jlong style) {


//@line:190

        ImNodes::StyleColorsDark(reinterpret_cast<ImNodesStyle*>(style));
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodes_nStyleColorsClassic__(JNIEnv* env, jclass clazz) {


//@line:202

        ImNodes::StyleColorsClassic();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodes_nStyleColorsClassic__J(JNIEnv* env, jclass clazz, jlong style) {


//@line:206

        ImNodes::StyleColorsClassic(reinterpret_cast<ImNodesStyle*>(style));
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodes_nStyleColorsLight__(JNIEnv* env, jclass clazz) {


//@line:218

        ImNodes::StyleColorsLight();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodes_nStyleColorsLight__J(JNIEnv* env, jclass clazz, jlong style) {


//@line:222

        ImNodes::StyleColorsLight(reinterpret_cast<ImNodesStyle*>(style));
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodes_nBeginNodeEditor(JNIEnv* env, jclass clazz) {


//@line:234

        ImNodes::BeginNodeEditor();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodes_nEndNodeEditor(JNIEnv* env, jclass clazz) {


//@line:242

        ImNodes::EndNodeEditor();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodes_nMiniMap__(JNIEnv* env, jclass clazz) {


//@line:270

        ImNodes::MiniMap();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodes_nMiniMap__F(JNIEnv* env, jclass clazz, jfloat miniMapSizeFraction) {


//@line:274

        ImNodes::MiniMap(miniMapSizeFraction);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodes_nMiniMap__FI(JNIEnv* env, jclass clazz, jfloat miniMapSizeFraction, jint miniMapLocation) {


//@line:278

        ImNodes::MiniMap(miniMapSizeFraction, static_cast<ImNodesMiniMapLocation>(miniMapLocation));
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodes_nPushColorStyle(JNIEnv* env, jclass clazz, jint item, jint color) {


//@line:289

        ImNodes::PushColorStyle(static_cast<ImNodesCol>(item), color);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodes_nPopColorStyle(JNIEnv* env, jclass clazz) {


//@line:297

        ImNodes::PopColorStyle();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodes_nPushStyleVar__IF(JNIEnv* env, jclass clazz, jint styleItem, jfloat value) {


//@line:305

        ImNodes::PushStyleVar(static_cast<ImNodesStyleVar>(styleItem), value);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodes_nPushStyleVar__IFF(JNIEnv* env, jclass clazz, jint styleItem, jfloat valueX, jfloat valueY) {

//@line:317

        ImVec2 value = ImVec2(valueX, valueY);
        ImNodes::PushStyleVar(static_cast<ImNodesStyleVar>(styleItem), value);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodes_nPopStyleVar(JNIEnv* env, jclass clazz) {


//@line:326

        ImNodes::PopStyleVar();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodes_nBeginNode(JNIEnv* env, jclass clazz, jint node) {


//@line:334

        ImNodes::BeginNode(node);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodes_nEndNode(JNIEnv* env, jclass clazz) {


//@line:342

        ImNodes::EndNode();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodes_nGetNodeDimensions(JNIEnv* env, jclass clazz, jobject dst, jint id) {


//@line:364

        Jni::ImVec2Cpy(env, ImNodes::GetNodeDimensions(id), dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_imnodes_ImNodes_nGetNodeDimensionsX(JNIEnv* env, jclass clazz, jint id) {


//@line:368

        return ImNodes::GetNodeDimensions(id).x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_imnodes_ImNodes_nGetNodeDimensionsY(JNIEnv* env, jclass clazz, jint id) {


//@line:372

        return ImNodes::GetNodeDimensions(id).y;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodes_nBeginNodeTitleBar(JNIEnv* env, jclass clazz) {


//@line:385

        ImNodes::BeginNodeTitleBar();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodes_nEndNodeTitleBar(JNIEnv* env, jclass clazz) {


//@line:393

        ImNodes::EndNodeTitleBar();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodes_nBeginInputAttribute__I(JNIEnv* env, jclass clazz, jint id) {


//@line:420

        ImNodes::BeginInputAttribute(id);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodes_nBeginInputAttribute__II(JNIEnv* env, jclass clazz, jint id, jint shape) {


//@line:424

        ImNodes::BeginInputAttribute(id, static_cast<ImNodesPinShape>(shape));
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodes_nEndInputAttribute(JNIEnv* env, jclass clazz) {


//@line:434

        ImNodes::EndInputAttribute();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodes_nBeginOutputAttribute__I(JNIEnv* env, jclass clazz, jint id) {


//@line:452

        ImNodes::BeginOutputAttribute(id);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodes_nBeginOutputAttribute__II(JNIEnv* env, jclass clazz, jint id, jint shape) {


//@line:456

        ImNodes::BeginOutputAttribute(id, static_cast<ImNodesPinShape>(shape));
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodes_nEndOutputAttribute(JNIEnv* env, jclass clazz) {


//@line:464

        ImNodes::EndOutputAttribute();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodes_nBeginStaticAttribute(JNIEnv* env, jclass clazz, jint id) {


//@line:477

        ImNodes::BeginStaticAttribute(id);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodes_nEndStaticAttribute(JNIEnv* env, jclass clazz) {


//@line:485

        ImNodes::EndStaticAttribute();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodes_nPushAttributeFlag(JNIEnv* env, jclass clazz, jint flag) {


//@line:496

        ImNodes::PushAttributeFlag(static_cast<ImNodesAttributeFlags>(flag));
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodes_nPopAttributeFlag(JNIEnv* env, jclass clazz) {


//@line:504

        ImNodes::PopAttributeFlag();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodes_nLink(JNIEnv* env, jclass clazz, jint id, jint source, jint target) {


//@line:517

        ImNodes::Link(id, source, target);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodes_nSetNodeDraggable(JNIEnv* env, jclass clazz, jint nodeId, jboolean draggable) {


//@line:528

        ImNodes::SetNodeDraggable(nodeId, draggable);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodes_nSetNodeScreenSpacePos(JNIEnv* env, jclass clazz, jint nodeId, jfloat screenSpacePosX, jfloat screenSpacePosY) {

//@line:548

        ImVec2 screenSpacePos = ImVec2(screenSpacePosX, screenSpacePosY);
        ImNodes::SetNodeScreenSpacePos(nodeId, screenSpacePos);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodes_nSetNodeEditorSpacePos(JNIEnv* env, jclass clazz, jint nodeId, jfloat editorSpacePosX, jfloat editorSpacePosY) {

//@line:561

        ImVec2 editorSpacePos = ImVec2(editorSpacePosX, editorSpacePosY);
        ImNodes::SetNodeEditorSpacePos(nodeId, editorSpacePos);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodes_nSetNodeGridSpacePos(JNIEnv* env, jclass clazz, jint nodeId, jfloat gridPosX, jfloat gridPosY) {

//@line:574

        ImVec2 gridPos = ImVec2(gridPosX, gridPosY);
        ImNodes::SetNodeGridSpacePos(nodeId, gridPos);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodes_nGetNodeScreenSpacePos(JNIEnv* env, jclass clazz, jobject dst, jint nodeId) {


//@line:597

        Jni::ImVec2Cpy(env, ImNodes::GetNodeScreenSpacePos(nodeId), dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_imnodes_ImNodes_nGetNodeScreenSpacePosX(JNIEnv* env, jclass clazz, jint nodeId) {


//@line:601

        return ImNodes::GetNodeScreenSpacePos(nodeId).x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_imnodes_ImNodes_nGetNodeScreenSpacePosY(JNIEnv* env, jclass clazz, jint nodeId) {


//@line:605

        return ImNodes::GetNodeScreenSpacePos(nodeId).y;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodes_nGetNodeEditorSpacePos(JNIEnv* env, jclass clazz, jobject dst, jint nodeId) {


//@line:627

        Jni::ImVec2Cpy(env, ImNodes::GetNodeEditorSpacePos(nodeId), dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_imnodes_ImNodes_nGetNodeEditorSpacePosX(JNIEnv* env, jclass clazz, jint nodeId) {


//@line:631

        return ImNodes::GetNodeEditorSpacePos(nodeId).x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_imnodes_ImNodes_nGetNodeEditorSpacePosY(JNIEnv* env, jclass clazz, jint nodeId) {


//@line:635

        return ImNodes::GetNodeEditorSpacePos(nodeId).y;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodes_nGetNodeGridSpacePos(JNIEnv* env, jclass clazz, jobject dst, jint nodeId) {


//@line:657

        Jni::ImVec2Cpy(env, ImNodes::GetNodeGridSpacePos(nodeId), dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_imnodes_ImNodes_nGetNodeGridSpacePosX(JNIEnv* env, jclass clazz, jint nodeId) {


//@line:661

        return ImNodes::GetNodeGridSpacePos(nodeId).x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_imnodes_ImNodes_nGetNodeGridSpacePosY(JNIEnv* env, jclass clazz, jint nodeId) {


//@line:665

        return ImNodes::GetNodeGridSpacePos(nodeId).y;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodes_nSnapNodeToGrid(JNIEnv* env, jclass clazz, jint nodeId) {


//@line:676

        ImNodes::SnapNodeToGrid(nodeId);
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_imnodes_ImNodes_nIsEditorHovered(JNIEnv* env, jclass clazz) {


//@line:688

        return ImNodes::IsEditorHovered();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_imnodes_ImNodes_nIsNodeHovered(JNIEnv* env, jclass clazz, jintArray obj_nodeId) {

//@line:700

        auto nodeId = obj_nodeId == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_nodeId, JNI_FALSE);
        auto _result = ImNodes::IsNodeHovered((nodeId != NULL ? &nodeId[0] : NULL));
        if (nodeId != NULL) env->ReleasePrimitiveArrayCritical(obj_nodeId, nodeId, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_imnodes_ImNodes_nIsLinkHovered(JNIEnv* env, jclass clazz, jintArray obj_linkId) {

//@line:711

        auto linkId = obj_linkId == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_linkId, JNI_FALSE);
        auto _result = ImNodes::IsLinkHovered((linkId != NULL ? &linkId[0] : NULL));
        if (linkId != NULL) env->ReleasePrimitiveArrayCritical(obj_linkId, linkId, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_imnodes_ImNodes_nIsPinHovered(JNIEnv* env, jclass clazz, jintArray obj_attributeId) {

//@line:722

        auto attributeId = obj_attributeId == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_attributeId, JNI_FALSE);
        auto _result = ImNodes::IsPinHovered((attributeId != NULL ? &attributeId[0] : NULL));
        if (attributeId != NULL) env->ReleasePrimitiveArrayCritical(obj_attributeId, attributeId, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jint JNICALL Java_imgui_extension_imnodes_ImNodes_getHoveredNode(JNIEnv* env, jclass clazz) {


//@line:739

        int i;
        return ImNodes::IsNodeHovered(&i) ? i : -1;
    

}

JNIEXPORT jint JNICALL Java_imgui_extension_imnodes_ImNodes_getHoveredLink(JNIEnv* env, jclass clazz) {


//@line:747

        int i;
        return ImNodes::IsLinkHovered(&i) ? i : -1;
    

}

JNIEXPORT jint JNICALL Java_imgui_extension_imnodes_ImNodes_getHoveredPin(JNIEnv* env, jclass clazz) {


//@line:755

        int i;
        return ImNodes::IsPinHovered(&i) ? i : -1;
    

}

JNIEXPORT jint JNICALL Java_imgui_extension_imnodes_ImNodes_nNumSelectedNodes(JNIEnv* env, jclass clazz) {


//@line:768

        return ImNodes::NumSelectedNodes();
    

}

JNIEXPORT jint JNICALL Java_imgui_extension_imnodes_ImNodes_nNumSelectedLinks(JNIEnv* env, jclass clazz) {


//@line:776

        return ImNodes::NumSelectedLinks();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodes_nGetSelectedNodes(JNIEnv* env, jclass clazz, jintArray obj_nodeIds) {

//@line:789

        auto nodeIds = obj_nodeIds == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_nodeIds, JNI_FALSE);
        ImNodes::GetSelectedNodes(&nodeIds[0]);
        if (nodeIds != NULL) env->ReleasePrimitiveArrayCritical(obj_nodeIds, nodeIds, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodes_nGetSelectedLinks(JNIEnv* env, jclass clazz, jintArray obj_linkIds) {

//@line:804

        auto linkIds = obj_linkIds == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_linkIds, JNI_FALSE);
        ImNodes::GetSelectedLinks(&linkIds[0]);
        if (linkIds != NULL) env->ReleasePrimitiveArrayCritical(obj_linkIds, linkIds, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodes_nClearNodeSelection__(JNIEnv* env, jclass clazz) {


//@line:817

        ImNodes::ClearNodeSelection();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodes_nClearLinkSelection__(JNIEnv* env, jclass clazz) {


//@line:828

        ImNodes::ClearLinkSelection();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodes_nSelectNode(JNIEnv* env, jclass clazz, jint nodeId) {


//@line:839

        ImNodes::SelectNode(nodeId);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodes_nClearNodeSelection__I(JNIEnv* env, jclass clazz, jint nodeId) {


//@line:847

        ImNodes::ClearNodeSelection(nodeId);
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_imnodes_ImNodes_nIsNodeSelected(JNIEnv* env, jclass clazz, jint nodeId) {


//@line:855

        return ImNodes::IsNodeSelected(nodeId);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodes_nSelectLink(JNIEnv* env, jclass clazz, jint linkId) {


//@line:863

        ImNodes::SelectLink(linkId);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodes_nClearLinkSelection__I(JNIEnv* env, jclass clazz, jint linkId) {


//@line:871

        ImNodes::ClearLinkSelection(linkId);
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_imnodes_ImNodes_nIsLinkSelected(JNIEnv* env, jclass clazz, jint linkId) {


//@line:879

        return ImNodes::IsLinkSelected(linkId);
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_imnodes_ImNodes_nIsAttributeActive(JNIEnv* env, jclass clazz) {


//@line:891

        return ImNodes::IsAttributeActive();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_imnodes_ImNodes_nIsAnyAttributeActive__(JNIEnv* env, jclass clazz) {


//@line:903

        return ImNodes::IsAnyAttributeActive();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_imnodes_ImNodes_nIsAnyAttributeActive___3I(JNIEnv* env, jclass clazz, jintArray obj_attributeId) {

//@line:907

        auto attributeId = obj_attributeId == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_attributeId, JNI_FALSE);
        auto _result = ImNodes::IsAnyAttributeActive((attributeId != NULL ? &attributeId[0] : NULL));
        if (attributeId != NULL) env->ReleasePrimitiveArrayCritical(obj_attributeId, attributeId, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jint JNICALL Java_imgui_extension_imnodes_ImNodes_getActiveAttribute(JNIEnv* env, jclass clazz) {


//@line:919

        int i;
        return ImNodes::IsAnyAttributeActive(&i) ? i : -1;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_imnodes_ImNodes_nIsLinkStarted(JNIEnv* env, jclass clazz, jintArray obj_startedAtAttributeId) {

//@line:934

        auto startedAtAttributeId = obj_startedAtAttributeId == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_startedAtAttributeId, JNI_FALSE);
        auto _result = ImNodes::IsLinkStarted((startedAtAttributeId != NULL ? &startedAtAttributeId[0] : NULL));
        if (startedAtAttributeId != NULL) env->ReleasePrimitiveArrayCritical(obj_startedAtAttributeId, startedAtAttributeId, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_imnodes_ImNodes_nIsLinkDropped__(JNIEnv* env, jclass clazz) {


//@line:989

        return ImNodes::IsLinkDropped();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_imnodes_ImNodes_nIsLinkDropped___3I(JNIEnv* env, jclass clazz, jintArray obj_startedAtAttributeId) {

//@line:993

        auto startedAtAttributeId = obj_startedAtAttributeId == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_startedAtAttributeId, JNI_FALSE);
        auto _result = ImNodes::IsLinkDropped((startedAtAttributeId != NULL ? &startedAtAttributeId[0] : NULL));
        if (startedAtAttributeId != NULL) env->ReleasePrimitiveArrayCritical(obj_startedAtAttributeId, startedAtAttributeId, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_imnodes_ImNodes_nIsLinkDropped___3IZ(JNIEnv* env, jclass clazz, jintArray obj_startedAtAttributeId, jboolean includingDetachedLinks) {

//@line:1000

        auto startedAtAttributeId = obj_startedAtAttributeId == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_startedAtAttributeId, JNI_FALSE);
        auto _result = ImNodes::IsLinkDropped((startedAtAttributeId != NULL ? &startedAtAttributeId[0] : NULL), includingDetachedLinks);
        if (startedAtAttributeId != NULL) env->ReleasePrimitiveArrayCritical(obj_startedAtAttributeId, startedAtAttributeId, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_imnodes_ImNodes_nIsLinkDropped__Z(JNIEnv* env, jclass clazz, jboolean includingDetachedLinks) {


//@line:1007

        return ImNodes::IsLinkDropped(NULL, includingDetachedLinks);
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_imnodes_ImNodes_nIsLinkCreated___3I_3I(JNIEnv* env, jclass clazz, jintArray obj_startedAtAttributeId, jintArray obj_endedAtAttributeId) {

//@line:1025

        auto startedAtAttributeId = obj_startedAtAttributeId == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_startedAtAttributeId, JNI_FALSE);
        auto endedAtAttributeId = obj_endedAtAttributeId == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_endedAtAttributeId, JNI_FALSE);
        auto _result = ImNodes::IsLinkCreated((startedAtAttributeId != NULL ? &startedAtAttributeId[0] : NULL), (endedAtAttributeId != NULL ? &endedAtAttributeId[0] : NULL));
        if (startedAtAttributeId != NULL) env->ReleasePrimitiveArrayCritical(obj_startedAtAttributeId, startedAtAttributeId, JNI_FALSE);
        if (endedAtAttributeId != NULL) env->ReleasePrimitiveArrayCritical(obj_endedAtAttributeId, endedAtAttributeId, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_imnodes_ImNodes_nIsLinkCreated___3I_3I_3Z(JNIEnv* env, jclass clazz, jintArray obj_startedAtAttributeId, jintArray obj_endedAtAttributeId, jbooleanArray obj_createdFromSnap) {

//@line:1034

        auto startedAtAttributeId = obj_startedAtAttributeId == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_startedAtAttributeId, JNI_FALSE);
        auto endedAtAttributeId = obj_endedAtAttributeId == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_endedAtAttributeId, JNI_FALSE);
        auto createdFromSnap = obj_createdFromSnap == NULL ? NULL : (bool*)env->GetPrimitiveArrayCritical(obj_createdFromSnap, JNI_FALSE);
        auto _result = ImNodes::IsLinkCreated((startedAtAttributeId != NULL ? &startedAtAttributeId[0] : NULL), (endedAtAttributeId != NULL ? &endedAtAttributeId[0] : NULL), (createdFromSnap != NULL ? &createdFromSnap[0] : NULL));
        if (startedAtAttributeId != NULL) env->ReleasePrimitiveArrayCritical(obj_startedAtAttributeId, startedAtAttributeId, JNI_FALSE);
        if (endedAtAttributeId != NULL) env->ReleasePrimitiveArrayCritical(obj_endedAtAttributeId, endedAtAttributeId, JNI_FALSE);
        if (createdFromSnap != NULL) env->ReleasePrimitiveArrayCritical(obj_createdFromSnap, createdFromSnap, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_imnodes_ImNodes_nIsLinkCreated___3I_3I_3I_3I(JNIEnv* env, jclass clazz, jintArray obj_startedAtNodeId, jintArray obj_startedAtAttributeId, jintArray obj_endedAtNodeId, jintArray obj_endedAtAttributeId) {

//@line:1059

        auto startedAtNodeId = obj_startedAtNodeId == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_startedAtNodeId, JNI_FALSE);
        auto startedAtAttributeId = obj_startedAtAttributeId == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_startedAtAttributeId, JNI_FALSE);
        auto endedAtNodeId = obj_endedAtNodeId == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_endedAtNodeId, JNI_FALSE);
        auto endedAtAttributeId = obj_endedAtAttributeId == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_endedAtAttributeId, JNI_FALSE);
        auto _result = ImNodes::IsLinkCreated((startedAtNodeId != NULL ? &startedAtNodeId[0] : NULL), (startedAtAttributeId != NULL ? &startedAtAttributeId[0] : NULL), (endedAtNodeId != NULL ? &endedAtNodeId[0] : NULL), (endedAtAttributeId != NULL ? &endedAtAttributeId[0] : NULL));
        if (startedAtNodeId != NULL) env->ReleasePrimitiveArrayCritical(obj_startedAtNodeId, startedAtNodeId, JNI_FALSE);
        if (startedAtAttributeId != NULL) env->ReleasePrimitiveArrayCritical(obj_startedAtAttributeId, startedAtAttributeId, JNI_FALSE);
        if (endedAtNodeId != NULL) env->ReleasePrimitiveArrayCritical(obj_endedAtNodeId, endedAtNodeId, JNI_FALSE);
        if (endedAtAttributeId != NULL) env->ReleasePrimitiveArrayCritical(obj_endedAtAttributeId, endedAtAttributeId, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_imnodes_ImNodes_nIsLinkCreated___3I_3I_3I_3I_3Z(JNIEnv* env, jclass clazz, jintArray obj_startedAtNodeId, jintArray obj_startedAtAttributeId, jintArray obj_endedAtNodeId, jintArray obj_endedAtAttributeId, jbooleanArray obj_createdFromSnap) {

//@line:1072

        auto startedAtNodeId = obj_startedAtNodeId == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_startedAtNodeId, JNI_FALSE);
        auto startedAtAttributeId = obj_startedAtAttributeId == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_startedAtAttributeId, JNI_FALSE);
        auto endedAtNodeId = obj_endedAtNodeId == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_endedAtNodeId, JNI_FALSE);
        auto endedAtAttributeId = obj_endedAtAttributeId == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_endedAtAttributeId, JNI_FALSE);
        auto createdFromSnap = obj_createdFromSnap == NULL ? NULL : (bool*)env->GetPrimitiveArrayCritical(obj_createdFromSnap, JNI_FALSE);
        auto _result = ImNodes::IsLinkCreated((startedAtNodeId != NULL ? &startedAtNodeId[0] : NULL), (startedAtAttributeId != NULL ? &startedAtAttributeId[0] : NULL), (endedAtNodeId != NULL ? &endedAtNodeId[0] : NULL), (endedAtAttributeId != NULL ? &endedAtAttributeId[0] : NULL), (createdFromSnap != NULL ? &createdFromSnap[0] : NULL));
        if (startedAtNodeId != NULL) env->ReleasePrimitiveArrayCritical(obj_startedAtNodeId, startedAtNodeId, JNI_FALSE);
        if (startedAtAttributeId != NULL) env->ReleasePrimitiveArrayCritical(obj_startedAtAttributeId, startedAtAttributeId, JNI_FALSE);
        if (endedAtNodeId != NULL) env->ReleasePrimitiveArrayCritical(obj_endedAtNodeId, endedAtNodeId, JNI_FALSE);
        if (endedAtAttributeId != NULL) env->ReleasePrimitiveArrayCritical(obj_endedAtAttributeId, endedAtAttributeId, JNI_FALSE);
        if (createdFromSnap != NULL) env->ReleasePrimitiveArrayCritical(obj_createdFromSnap, createdFromSnap, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_imnodes_ImNodes_nIsLinkDestroyed(JNIEnv* env, jclass clazz, jintArray obj_linkId) {

//@line:1095

        auto linkId = obj_linkId == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_linkId, JNI_FALSE);
        auto _result = ImNodes::IsLinkDestroyed((linkId != NULL ? &linkId[0] : NULL));
        if (linkId != NULL) env->ReleasePrimitiveArrayCritical(obj_linkId, linkId, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jstring JNICALL Java_imgui_extension_imnodes_ImNodes_nSaveCurrentEditorStateToIniString(JNIEnv* env, jclass clazz) {


//@line:1109

        return env->NewStringUTF(ImNodes::SaveCurrentEditorStateToIniString());
    

}

JNIEXPORT jstring JNICALL Java_imgui_extension_imnodes_ImNodes_nSaveEditorStateToIniString(JNIEnv* env, jclass clazz, jlong editor) {


//@line:1117

        return env->NewStringUTF(ImNodes::SaveEditorStateToIniString(reinterpret_cast<ImNodesEditorContext*>(editor)));
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodes_nLoadCurrentEditorStateFromIniString(JNIEnv* env, jclass clazz, jstring obj_data, jint dataSize) {

//@line:1125

        auto data = obj_data == NULL ? NULL : (char*)env->GetStringUTFChars(obj_data, JNI_FALSE);
        ImNodes::LoadCurrentEditorStateFromIniString(data, dataSize);
        if (data != NULL) env->ReleaseStringUTFChars(obj_data, data);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodes_nLoadEditorStateFromIniString(JNIEnv* env, jclass clazz, jlong editor, jstring obj_data, jint dataSize) {

//@line:1135

        auto data = obj_data == NULL ? NULL : (char*)env->GetStringUTFChars(obj_data, JNI_FALSE);
        ImNodes::LoadEditorStateFromIniString(reinterpret_cast<ImNodesEditorContext*>(editor), data, dataSize);
        if (data != NULL) env->ReleaseStringUTFChars(obj_data, data);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodes_nSaveCurrentEditorStateToIniFile(JNIEnv* env, jclass clazz, jstring obj_fileName) {

//@line:1145

        auto fileName = obj_fileName == NULL ? NULL : (char*)env->GetStringUTFChars(obj_fileName, JNI_FALSE);
        ImNodes::SaveCurrentEditorStateToIniFile(fileName);
        if (fileName != NULL) env->ReleaseStringUTFChars(obj_fileName, fileName);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodes_nSaveEditorStateToIniFile(JNIEnv* env, jclass clazz, jlong editor, jstring obj_fileName) {

//@line:1155

        auto fileName = obj_fileName == NULL ? NULL : (char*)env->GetStringUTFChars(obj_fileName, JNI_FALSE);
        ImNodes::SaveEditorStateToIniFile(reinterpret_cast<ImNodesEditorContext*>(editor), fileName);
        if (fileName != NULL) env->ReleaseStringUTFChars(obj_fileName, fileName);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodes_nLoadCurrentEditorStateFromIniFile(JNIEnv* env, jclass clazz, jstring obj_fileName) {

//@line:1165

        auto fileName = obj_fileName == NULL ? NULL : (char*)env->GetStringUTFChars(obj_fileName, JNI_FALSE);
        ImNodes::LoadCurrentEditorStateFromIniFile(fileName);
        if (fileName != NULL) env->ReleaseStringUTFChars(obj_fileName, fileName);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodes_nLoadEditorStateFromIniFile(JNIEnv* env, jclass clazz, jlong editor, jstring obj_fileName) {

//@line:1175

        auto fileName = obj_fileName == NULL ? NULL : (char*)env->GetStringUTFChars(obj_fileName, JNI_FALSE);
        ImNodes::LoadEditorStateFromIniFile(reinterpret_cast<ImNodesEditorContext*>(editor), fileName);
        if (fileName != NULL) env->ReleaseStringUTFChars(obj_fileName, fileName);
    
}

