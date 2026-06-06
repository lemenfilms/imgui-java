#include <imgui_extension_nodeditor_NodeEditor.h>

//@line:28

        #include "_nodeeditor.h"
        #define NodeEditorConfig ax::NodeEditor::Config
        #define NodeEditorStyle ax::NodeEditor::Style
        #define NodeEditorContext ax::NodeEditor::EditorContext
     JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditor_nSetCurrentEditor(JNIEnv* env, jclass clazz, jlong ctx) {


//@line:39

        ax::NodeEditor::SetCurrentEditor(reinterpret_cast<NodeEditorContext*>(ctx));
    

}

JNIEXPORT jlong JNICALL Java_imgui_extension_nodeditor_NodeEditor_nGetCurrentEditor(JNIEnv* env, jclass clazz) {


//@line:47

        return (uintptr_t)ax::NodeEditor::GetCurrentEditor();
    

}

JNIEXPORT jlong JNICALL Java_imgui_extension_nodeditor_NodeEditor_nCreateEditor__(JNIEnv* env, jclass clazz) {


//@line:59

        return (uintptr_t)ax::NodeEditor::CreateEditor();
    

}

JNIEXPORT jlong JNICALL Java_imgui_extension_nodeditor_NodeEditor_nCreateEditor__J(JNIEnv* env, jclass clazz, jlong config) {


//@line:63

        return (uintptr_t)ax::NodeEditor::CreateEditor(reinterpret_cast<NodeEditorConfig*>(config));
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditor_nDestroyEditor(JNIEnv* env, jclass clazz, jlong ctx) {


//@line:71

        ax::NodeEditor::DestroyEditor(reinterpret_cast<NodeEditorContext*>(ctx));
    

}

JNIEXPORT jlong JNICALL Java_imgui_extension_nodeditor_NodeEditor_nGetStyle(JNIEnv* env, jclass clazz) {


//@line:82

        return (uintptr_t)&ax::NodeEditor::GetStyle();
    

}

JNIEXPORT jstring JNICALL Java_imgui_extension_nodeditor_NodeEditor_nGetStyleColorName(JNIEnv* env, jclass clazz, jint colorIndex) {


//@line:90

        return env->NewStringUTF(ax::NodeEditor::GetStyleColorName(static_cast<ax::NodeEditor::StyleColor>(colorIndex)));
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditor_nPushStyleColor(JNIEnv* env, jclass clazz, jint colorIndex, jfloat colorX, jfloat colorY, jfloat colorZ, jfloat colorW) {

//@line:102

        ImVec4 color = ImVec4(colorX, colorY, colorZ, colorW);
        ax::NodeEditor::PushStyleColor(static_cast<ax::NodeEditor::StyleColor>(colorIndex), color);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditor_nPopStyleColor__(JNIEnv* env, jclass clazz) {


//@line:115

        ax::NodeEditor::PopStyleColor();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditor_nPopStyleColor__I(JNIEnv* env, jclass clazz, jint count) {


//@line:119

        ax::NodeEditor::PopStyleColor(count);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditor_nPushStyleVar__IF(JNIEnv* env, jclass clazz, jint varIndex, jfloat value) {


//@line:127

        ax::NodeEditor::PushStyleVar(static_cast<ax::NodeEditor::StyleVar>(varIndex), value);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditor_nPushStyleVar__IFF(JNIEnv* env, jclass clazz, jint varIndex, jfloat valueX, jfloat valueY) {

//@line:139

        ImVec2 value = ImVec2(valueX, valueY);
        ax::NodeEditor::PushStyleVar(static_cast<ax::NodeEditor::StyleVar>(varIndex), value);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditor_nPushStyleVar__IFFFF(JNIEnv* env, jclass clazz, jint varIndex, jfloat valueX, jfloat valueY, jfloat valueZ, jfloat valueW) {

//@line:152

        ImVec4 value = ImVec4(valueX, valueY, valueZ, valueW);
        ax::NodeEditor::PushStyleVar(static_cast<ax::NodeEditor::StyleVar>(varIndex), value);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditor_nPopStyleVar__(JNIEnv* env, jclass clazz) {


//@line:165

        ax::NodeEditor::PopStyleVar();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditor_nPopStyleVar__I(JNIEnv* env, jclass clazz, jint count) {


//@line:169

        ax::NodeEditor::PopStyleVar(count);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditor_nBegin__Ljava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_id) {

//@line:185

        auto id = obj_id == NULL ? NULL : (char*)env->GetStringUTFChars(obj_id, JNI_FALSE);
        ax::NodeEditor::Begin(id);
        if (id != NULL) env->ReleaseStringUTFChars(obj_id, id);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditor_nBegin__Ljava_lang_String_2FF(JNIEnv* env, jclass clazz, jstring obj_id, jfloat sizeX, jfloat sizeY) {

//@line:191

        auto id = obj_id == NULL ? NULL : (char*)env->GetStringUTFChars(obj_id, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        ax::NodeEditor::Begin(id, size);
        if (id != NULL) env->ReleaseStringUTFChars(obj_id, id);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditor_nEnd(JNIEnv* env, jclass clazz) {


//@line:202

        ax::NodeEditor::End();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditor_nBeginNode(JNIEnv* env, jclass clazz, jlong id) {


//@line:210

        ax::NodeEditor::BeginNode(id);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditor_nBeginPin(JNIEnv* env, jclass clazz, jlong id, jint kind) {


//@line:218

        ax::NodeEditor::BeginPin(id, static_cast<ax::NodeEditor::PinKind>(kind));
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditor_nPinRect(JNIEnv* env, jclass clazz, jfloat aX, jfloat aY, jfloat bX, jfloat bY) {

//@line:230

        ImVec2 a = ImVec2(aX, aY);
        ImVec2 b = ImVec2(bX, bY);
        ax::NodeEditor::PinRect(a, b);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditor_nPinPivotRect(JNIEnv* env, jclass clazz, jfloat aX, jfloat aY, jfloat bX, jfloat bY) {

//@line:244

        ImVec2 a = ImVec2(aX, aY);
        ImVec2 b = ImVec2(bX, bY);
        ax::NodeEditor::PinPivotRect(a, b);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditor_nPinPivotSize(JNIEnv* env, jclass clazz, jfloat sizeX, jfloat sizeY) {

//@line:258

        ImVec2 size = ImVec2(sizeX, sizeY);
        ax::NodeEditor::PinPivotSize(size);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditor_nPinPivotScale(JNIEnv* env, jclass clazz, jfloat scaleX, jfloat scaleY) {

//@line:271

        ImVec2 scale = ImVec2(scaleX, scaleY);
        ax::NodeEditor::PinPivotScale(scale);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditor_nPinPivotAlignment(JNIEnv* env, jclass clazz, jfloat alignmentX, jfloat alignmentY) {

//@line:284

        ImVec2 alignment = ImVec2(alignmentX, alignmentY);
        ax::NodeEditor::PinPivotAlignment(alignment);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditor_nEndPin(JNIEnv* env, jclass clazz) {


//@line:293

        ax::NodeEditor::EndPin();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditor_nGroup(JNIEnv* env, jclass clazz, jfloat sizeX, jfloat sizeY) {

//@line:305

        ImVec2 size = ImVec2(sizeX, sizeY);
        ax::NodeEditor::Group(size);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditor_nEndNode(JNIEnv* env, jclass clazz) {


//@line:314

        ax::NodeEditor::EndNode();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_nodeditor_NodeEditor_nBeginGroupHint(JNIEnv* env, jclass clazz, jlong nodeId) {


//@line:322

        return ax::NodeEditor::BeginGroupHint(nodeId);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditor_nGetGroupMin(JNIEnv* env, jclass clazz, jobject dst) {


//@line:344

        Jni::ImVec2Cpy(env, ax::NodeEditor::GetGroupMin(), dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_nodeditor_NodeEditor_nGetGroupMinX(JNIEnv* env, jclass clazz) {


//@line:348

        return ax::NodeEditor::GetGroupMin().x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_nodeditor_NodeEditor_nGetGroupMinY(JNIEnv* env, jclass clazz) {


//@line:352

        return ax::NodeEditor::GetGroupMin().y;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditor_nGetGroupMax(JNIEnv* env, jclass clazz, jobject dst) {


//@line:374

        Jni::ImVec2Cpy(env, ax::NodeEditor::GetGroupMax(), dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_nodeditor_NodeEditor_nGetGroupMaxX(JNIEnv* env, jclass clazz) {


//@line:378

        return ax::NodeEditor::GetGroupMax().x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_nodeditor_NodeEditor_nGetGroupMaxY(JNIEnv* env, jclass clazz) {


//@line:382

        return ax::NodeEditor::GetGroupMax().y;
    

}

JNIEXPORT jlong JNICALL Java_imgui_extension_nodeditor_NodeEditor_nGetHintForegroundDrawList(JNIEnv* env, jclass clazz) {


//@line:393

        return (uintptr_t)ax::NodeEditor::GetHintForegroundDrawList();
    

}

JNIEXPORT jlong JNICALL Java_imgui_extension_nodeditor_NodeEditor_nGetHintBackgroundDrawList(JNIEnv* env, jclass clazz) {


//@line:404

        return (uintptr_t)ax::NodeEditor::GetHintBackgroundDrawList();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditor_nEndGroupHint(JNIEnv* env, jclass clazz) {


//@line:412

        ax::NodeEditor::EndGroupHint();
    

}

JNIEXPORT jlong JNICALL Java_imgui_extension_nodeditor_NodeEditor_nGetNodeBackgroundDrawList(JNIEnv* env, jclass clazz, jlong nodeId) {


//@line:423

        return (uintptr_t)ax::NodeEditor::GetNodeBackgroundDrawList(nodeId);
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_nodeditor_NodeEditor_nLink__JJJ(JNIEnv* env, jclass clazz, jlong id, jlong startPinId, jlong endPinId) {


//@line:451

        return ax::NodeEditor::Link(id, startPinId, endPinId);
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_nodeditor_NodeEditor_nLink__JJJFFFF(JNIEnv* env, jclass clazz, jlong id, jlong startPinId, jlong endPinId, jfloat colorX, jfloat colorY, jfloat colorZ, jfloat colorW) {

//@line:455

        ImVec4 color = ImVec4(colorX, colorY, colorZ, colorW);
        auto _result = ax::NodeEditor::Link(id, startPinId, endPinId, color);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_nodeditor_NodeEditor_nLink__JJJFFFFF(JNIEnv* env, jclass clazz, jlong id, jlong startPinId, jlong endPinId, jfloat colorX, jfloat colorY, jfloat colorZ, jfloat colorW, jfloat thickness) {

//@line:461

        ImVec4 color = ImVec4(colorX, colorY, colorZ, colorW);
        auto _result = ax::NodeEditor::Link(id, startPinId, endPinId, color, thickness);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_nodeditor_NodeEditor_nLink__JJJF(JNIEnv* env, jclass clazz, jlong id, jlong startPinId, jlong endPinId, jfloat thickness) {


//@line:467

        return ax::NodeEditor::Link(id, startPinId, endPinId, ImVec4(1,1,1,1), thickness);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditor_nFlow__J(JNIEnv* env, jclass clazz, jlong linkId) {


//@line:479

        ax::NodeEditor::Flow(linkId);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditor_nFlow__JI(JNIEnv* env, jclass clazz, jlong linkId, jint direction) {


//@line:483

        ax::NodeEditor::Flow(linkId, static_cast<ax::NodeEditor::FlowDirection>(direction));
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_nodeditor_NodeEditor_nBeginCreate__(JNIEnv* env, jclass clazz) {


//@line:511

        return ax::NodeEditor::BeginCreate();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_nodeditor_NodeEditor_nBeginCreate__FFFF(JNIEnv* env, jclass clazz, jfloat colorX, jfloat colorY, jfloat colorZ, jfloat colorW) {

//@line:515

        ImVec4 color = ImVec4(colorX, colorY, colorZ, colorW);
        auto _result = ax::NodeEditor::BeginCreate(color);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_nodeditor_NodeEditor_nBeginCreate__FFFFF(JNIEnv* env, jclass clazz, jfloat colorX, jfloat colorY, jfloat colorZ, jfloat colorW, jfloat thickness) {

//@line:521

        ImVec4 color = ImVec4(colorX, colorY, colorZ, colorW);
        auto _result = ax::NodeEditor::BeginCreate(color, thickness);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_nodeditor_NodeEditor_nBeginCreate__F(JNIEnv* env, jclass clazz, jfloat thickness) {


//@line:527

        return ax::NodeEditor::BeginCreate(ImVec4(1,1,1,1), thickness);
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_nodeditor_NodeEditor_nQueryNewLink___3J_3J(JNIEnv* env, jclass clazz, jlongArray obj_startId, jlongArray obj_endId) {

//@line:535

        auto startId = obj_startId == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_startId, JNI_FALSE);
        auto endId = obj_endId == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_endId, JNI_FALSE);
        auto _result = ax::NodeEditor::QueryNewLink(reinterpret_cast<ax::NodeEditor::PinId*>((startId != NULL ? &startId[0] : NULL)), reinterpret_cast<ax::NodeEditor::PinId*>((endId != NULL ? &endId[0] : NULL)));
        if (startId != NULL) env->ReleasePrimitiveArrayCritical(obj_startId, startId, JNI_FALSE);
        if (endId != NULL) env->ReleasePrimitiveArrayCritical(obj_endId, endId, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_nodeditor_NodeEditor_nQueryNewLink___3J_3JFFFF(JNIEnv* env, jclass clazz, jlongArray obj_startId, jlongArray obj_endId, jfloat colorX, jfloat colorY, jfloat colorZ, jfloat colorW) {

//@line:560

        auto startId = obj_startId == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_startId, JNI_FALSE);
        auto endId = obj_endId == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_endId, JNI_FALSE);
        ImVec4 color = ImVec4(colorX, colorY, colorZ, colorW);
        auto _result = ax::NodeEditor::QueryNewLink(reinterpret_cast<ax::NodeEditor::PinId*>((startId != NULL ? &startId[0] : NULL)), reinterpret_cast<ax::NodeEditor::PinId*>((endId != NULL ? &endId[0] : NULL)), color);
        if (startId != NULL) env->ReleasePrimitiveArrayCritical(obj_startId, startId, JNI_FALSE);
        if (endId != NULL) env->ReleasePrimitiveArrayCritical(obj_endId, endId, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_nodeditor_NodeEditor_nQueryNewLink___3J_3JFFFFF(JNIEnv* env, jclass clazz, jlongArray obj_startId, jlongArray obj_endId, jfloat colorX, jfloat colorY, jfloat colorZ, jfloat colorW, jfloat thickness) {

//@line:570

        auto startId = obj_startId == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_startId, JNI_FALSE);
        auto endId = obj_endId == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_endId, JNI_FALSE);
        ImVec4 color = ImVec4(colorX, colorY, colorZ, colorW);
        auto _result = ax::NodeEditor::QueryNewLink(reinterpret_cast<ax::NodeEditor::PinId*>((startId != NULL ? &startId[0] : NULL)), reinterpret_cast<ax::NodeEditor::PinId*>((endId != NULL ? &endId[0] : NULL)), color, thickness);
        if (startId != NULL) env->ReleasePrimitiveArrayCritical(obj_startId, startId, JNI_FALSE);
        if (endId != NULL) env->ReleasePrimitiveArrayCritical(obj_endId, endId, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_nodeditor_NodeEditor_nQueryNewNode___3J(JNIEnv* env, jclass clazz, jlongArray obj_pinId) {

//@line:584

        auto pinId = obj_pinId == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_pinId, JNI_FALSE);
        auto _result = ax::NodeEditor::QueryNewNode(reinterpret_cast<ax::NodeEditor::PinId*>((pinId != NULL ? &pinId[0] : NULL)));
        if (pinId != NULL) env->ReleasePrimitiveArrayCritical(obj_pinId, pinId, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_nodeditor_NodeEditor_nQueryNewNode___3JFFFF(JNIEnv* env, jclass clazz, jlongArray obj_pinId, jfloat colorX, jfloat colorY, jfloat colorZ, jfloat colorW) {

//@line:607

        auto pinId = obj_pinId == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_pinId, JNI_FALSE);
        ImVec4 color = ImVec4(colorX, colorY, colorZ, colorW);
        auto _result = ax::NodeEditor::QueryNewNode(reinterpret_cast<ax::NodeEditor::PinId*>((pinId != NULL ? &pinId[0] : NULL)), color);
        if (pinId != NULL) env->ReleasePrimitiveArrayCritical(obj_pinId, pinId, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_nodeditor_NodeEditor_nQueryNewNode___3JFFFFF(JNIEnv* env, jclass clazz, jlongArray obj_pinId, jfloat colorX, jfloat colorY, jfloat colorZ, jfloat colorW, jfloat thickness) {

//@line:615

        auto pinId = obj_pinId == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_pinId, JNI_FALSE);
        ImVec4 color = ImVec4(colorX, colorY, colorZ, colorW);
        auto _result = ax::NodeEditor::QueryNewNode(reinterpret_cast<ax::NodeEditor::PinId*>((pinId != NULL ? &pinId[0] : NULL)), color, thickness);
        if (pinId != NULL) env->ReleasePrimitiveArrayCritical(obj_pinId, pinId, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_nodeditor_NodeEditor_nAcceptNewItem__(JNIEnv* env, jclass clazz) {


//@line:627

        return ax::NodeEditor::AcceptNewItem();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_nodeditor_NodeEditor_nAcceptNewItem__FFFF(JNIEnv* env, jclass clazz, jfloat colorX, jfloat colorY, jfloat colorZ, jfloat colorW) {

//@line:647

        ImVec4 color = ImVec4(colorX, colorY, colorZ, colorW);
        auto _result = ax::NodeEditor::AcceptNewItem(color);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_nodeditor_NodeEditor_nAcceptNewItem__FFFFF(JNIEnv* env, jclass clazz, jfloat colorX, jfloat colorY, jfloat colorZ, jfloat colorW, jfloat thickness) {

//@line:653

        ImVec4 color = ImVec4(colorX, colorY, colorZ, colorW);
        auto _result = ax::NodeEditor::AcceptNewItem(color, thickness);
        return _result;
    
}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditor_nRejectNewItem__(JNIEnv* env, jclass clazz) {


//@line:663

        ax::NodeEditor::RejectNewItem();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditor_nRejectNewItem__FFFF(JNIEnv* env, jclass clazz, jfloat colorX, jfloat colorY, jfloat colorZ, jfloat colorW) {

//@line:683

        ImVec4 color = ImVec4(colorX, colorY, colorZ, colorW);
        ax::NodeEditor::RejectNewItem(color);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditor_nRejectNewItem__FFFFF(JNIEnv* env, jclass clazz, jfloat colorX, jfloat colorY, jfloat colorZ, jfloat colorW, jfloat thickness) {

//@line:688

        ImVec4 color = ImVec4(colorX, colorY, colorZ, colorW);
        ax::NodeEditor::RejectNewItem(color, thickness);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditor_nEndCreate(JNIEnv* env, jclass clazz) {


//@line:697

        ax::NodeEditor::EndCreate();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_nodeditor_NodeEditor_nBeginDelete(JNIEnv* env, jclass clazz) {


//@line:705

        return ax::NodeEditor::BeginDelete();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_nodeditor_NodeEditor_nQueryDeletedLink___3J(JNIEnv* env, jclass clazz, jlongArray obj_linkId) {

//@line:721

        auto linkId = obj_linkId == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_linkId, JNI_FALSE);
        auto _result = ax::NodeEditor::QueryDeletedLink(reinterpret_cast<ax::NodeEditor::LinkId*>((linkId != NULL ? &linkId[0] : NULL)));
        if (linkId != NULL) env->ReleasePrimitiveArrayCritical(obj_linkId, linkId, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_nodeditor_NodeEditor_nQueryDeletedLink___3J_3J(JNIEnv* env, jclass clazz, jlongArray obj_linkId, jlongArray obj_startId) {

//@line:728

        auto linkId = obj_linkId == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_linkId, JNI_FALSE);
        auto startId = obj_startId == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_startId, JNI_FALSE);
        auto _result = ax::NodeEditor::QueryDeletedLink(reinterpret_cast<ax::NodeEditor::LinkId*>((linkId != NULL ? &linkId[0] : NULL)), reinterpret_cast<ax::NodeEditor::PinId*>((startId != NULL ? &startId[0] : NULL)));
        if (linkId != NULL) env->ReleasePrimitiveArrayCritical(obj_linkId, linkId, JNI_FALSE);
        if (startId != NULL) env->ReleasePrimitiveArrayCritical(obj_startId, startId, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_nodeditor_NodeEditor_nQueryDeletedLink___3J_3J_3J(JNIEnv* env, jclass clazz, jlongArray obj_linkId, jlongArray obj_startId, jlongArray obj_endId) {

//@line:737

        auto linkId = obj_linkId == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_linkId, JNI_FALSE);
        auto startId = obj_startId == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_startId, JNI_FALSE);
        auto endId = obj_endId == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_endId, JNI_FALSE);
        auto _result = ax::NodeEditor::QueryDeletedLink(reinterpret_cast<ax::NodeEditor::LinkId*>((linkId != NULL ? &linkId[0] : NULL)), reinterpret_cast<ax::NodeEditor::PinId*>((startId != NULL ? &startId[0] : NULL)), reinterpret_cast<ax::NodeEditor::PinId*>((endId != NULL ? &endId[0] : NULL)));
        if (linkId != NULL) env->ReleasePrimitiveArrayCritical(obj_linkId, linkId, JNI_FALSE);
        if (startId != NULL) env->ReleasePrimitiveArrayCritical(obj_startId, startId, JNI_FALSE);
        if (endId != NULL) env->ReleasePrimitiveArrayCritical(obj_endId, endId, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_nodeditor_NodeEditor_nQueryDeletedNode(JNIEnv* env, jclass clazz, jlongArray obj_nodeId) {

//@line:752

        auto nodeId = obj_nodeId == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_nodeId, JNI_FALSE);
        auto _result = ax::NodeEditor::QueryDeletedNode(reinterpret_cast<ax::NodeEditor::NodeId*>((nodeId != NULL ? &nodeId[0] : NULL)));
        if (nodeId != NULL) env->ReleasePrimitiveArrayCritical(obj_nodeId, nodeId, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_nodeditor_NodeEditor_nAcceptDeletedItem__(JNIEnv* env, jclass clazz) {


//@line:767

        return ax::NodeEditor::AcceptDeletedItem();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_nodeditor_NodeEditor_nAcceptDeletedItem__Z(JNIEnv* env, jclass clazz, jboolean deleteDependencies) {


//@line:771

        return ax::NodeEditor::AcceptDeletedItem(deleteDependencies);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditor_nRejectDeletedItem(JNIEnv* env, jclass clazz) {


//@line:779

        ax::NodeEditor::RejectDeletedItem();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditor_nEndDelete(JNIEnv* env, jclass clazz) {


//@line:787

        ax::NodeEditor::EndDelete();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditor_nSetNodePosition(JNIEnv* env, jclass clazz, jlong nodeId, jfloat editorPositionX, jfloat editorPositionY) {

//@line:799

        ImVec2 editorPosition = ImVec2(editorPositionX, editorPositionY);
        ax::NodeEditor::SetNodePosition(nodeId, editorPosition);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditor_nSetGroupSize(JNIEnv* env, jclass clazz, jlong nodeId, jfloat sizeX, jfloat sizeY) {

//@line:812

        ImVec2 size = ImVec2(sizeX, sizeY);
        ax::NodeEditor::SetGroupSize(nodeId, size);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditor_nGetNodePosition(JNIEnv* env, jclass clazz, jobject dst, jlong nodeId) {


//@line:835

        Jni::ImVec2Cpy(env, ax::NodeEditor::GetNodePosition(nodeId), dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_nodeditor_NodeEditor_nGetNodePositionX(JNIEnv* env, jclass clazz, jlong nodeId) {


//@line:839

        return ax::NodeEditor::GetNodePosition(nodeId).x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_nodeditor_NodeEditor_nGetNodePositionY(JNIEnv* env, jclass clazz, jlong nodeId) {


//@line:843

        return ax::NodeEditor::GetNodePosition(nodeId).y;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditor_nGetNodeSize(JNIEnv* env, jclass clazz, jobject dst, jlong nodeId) {


//@line:865

        Jni::ImVec2Cpy(env, ax::NodeEditor::GetNodeSize(nodeId), dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_nodeditor_NodeEditor_nGetNodeSizeX(JNIEnv* env, jclass clazz, jlong nodeId) {


//@line:869

        return ax::NodeEditor::GetNodeSize(nodeId).x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_nodeditor_NodeEditor_nGetNodeSizeY(JNIEnv* env, jclass clazz, jlong nodeId) {


//@line:873

        return ax::NodeEditor::GetNodeSize(nodeId).y;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditor_nCenterNodeOnScreen(JNIEnv* env, jclass clazz, jlong nodeId) {


//@line:881

        ax::NodeEditor::CenterNodeOnScreen(nodeId);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditor_nSetNodeZPosition(JNIEnv* env, jclass clazz, jlong nodeId, jfloat z) {


//@line:889

        ax::NodeEditor::SetNodeZPosition(nodeId, z);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_nodeditor_NodeEditor_nGetNodeZPosition(JNIEnv* env, jclass clazz, jlong nodeId) {


//@line:897

        return ax::NodeEditor::GetNodeZPosition(nodeId);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditor_nRestoreNodeState(JNIEnv* env, jclass clazz, jlong nodeId) {


//@line:905

        ax::NodeEditor::RestoreNodeState(nodeId);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditor_nSuspend(JNIEnv* env, jclass clazz) {


//@line:913

        ax::NodeEditor::Suspend();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditor_nResume(JNIEnv* env, jclass clazz) {


//@line:921

        ax::NodeEditor::Resume();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_nodeditor_NodeEditor_nIsSuspended(JNIEnv* env, jclass clazz) {


//@line:929

        return ax::NodeEditor::IsSuspended();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_nodeditor_NodeEditor_nIsActive(JNIEnv* env, jclass clazz) {


//@line:937

        return ax::NodeEditor::IsActive();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_nodeditor_NodeEditor_nHasSelectionChanged(JNIEnv* env, jclass clazz) {


//@line:945

        return ax::NodeEditor::HasSelectionChanged();
    

}

JNIEXPORT jint JNICALL Java_imgui_extension_nodeditor_NodeEditor_nGetSelectedObjectCount(JNIEnv* env, jclass clazz) {


//@line:953

        return ax::NodeEditor::GetSelectedObjectCount();
    

}

JNIEXPORT jint JNICALL Java_imgui_extension_nodeditor_NodeEditor_nGetSelectedNodes(JNIEnv* env, jclass clazz, jlongArray obj_nodes, jint size) {

//@line:961

        auto nodes = obj_nodes == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_nodes, JNI_FALSE);
        auto _result = ax::NodeEditor::GetSelectedNodes(reinterpret_cast<ax::NodeEditor::NodeId*>(&nodes[0]), size);
        if (nodes != NULL) env->ReleasePrimitiveArrayCritical(obj_nodes, nodes, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jint JNICALL Java_imgui_extension_nodeditor_NodeEditor_nGetSelectedLinks(JNIEnv* env, jclass clazz, jlongArray obj_links, jint size) {

//@line:972

        auto links = obj_links == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_links, JNI_FALSE);
        auto _result = ax::NodeEditor::GetSelectedLinks(reinterpret_cast<ax::NodeEditor::LinkId*>(&links[0]), size);
        if (links != NULL) env->ReleasePrimitiveArrayCritical(obj_links, links, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_nodeditor_NodeEditor_nIsNodeSelected(JNIEnv* env, jclass clazz, jlong nodeId) {


//@line:983

        return ax::NodeEditor::IsNodeSelected(nodeId);
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_nodeditor_NodeEditor_nIsLinkSelected(JNIEnv* env, jclass clazz, jlong linkId) {


//@line:991

        return ax::NodeEditor::IsLinkSelected(linkId);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditor_nClearSelection(JNIEnv* env, jclass clazz) {


//@line:999

        ax::NodeEditor::ClearSelection();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditor_nSelectNode__J(JNIEnv* env, jclass clazz, jlong nodeId) {


//@line:1011

        ax::NodeEditor::SelectNode(nodeId);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditor_nSelectNode__JZ(JNIEnv* env, jclass clazz, jlong nodeId, jboolean append) {


//@line:1015

        ax::NodeEditor::SelectNode(nodeId, append);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditor_nSelectLink__J(JNIEnv* env, jclass clazz, jlong linkId) {


//@line:1027

        ax::NodeEditor::SelectLink(linkId);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditor_nSelectLink__JZ(JNIEnv* env, jclass clazz, jlong linkId, jboolean append) {


//@line:1031

        ax::NodeEditor::SelectLink(linkId, append);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditor_nDeselectNode(JNIEnv* env, jclass clazz, jlong nodeId) {


//@line:1039

        ax::NodeEditor::DeselectNode(nodeId);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditor_nDeselectLink(JNIEnv* env, jclass clazz, jlong linkId) {


//@line:1047

        ax::NodeEditor::DeselectLink(linkId);
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_nodeditor_NodeEditor_nDeleteNode(JNIEnv* env, jclass clazz, jlong nodeId) {


//@line:1055

        return ax::NodeEditor::DeleteNode(nodeId);
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_nodeditor_NodeEditor_nDeleteLink(JNIEnv* env, jclass clazz, jlong linkId) {


//@line:1063

        return ax::NodeEditor::DeleteLink(linkId);
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_nodeditor_NodeEditor_nHasAnyLinksNode(JNIEnv* env, jclass clazz, jlong nodeId) {


//@line:1071

        return ax::NodeEditor::HasAnyLinks(static_cast<ax::NodeEditor::NodeId>(nodeId));
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_nodeditor_NodeEditor_nHasAnyLinksPin(JNIEnv* env, jclass clazz, jlong pinId) {


//@line:1079

        return ax::NodeEditor::HasAnyLinks(static_cast<ax::NodeEditor::PinId>(pinId));
    

}

JNIEXPORT jint JNICALL Java_imgui_extension_nodeditor_NodeEditor_nBreakLinksNode(JNIEnv* env, jclass clazz, jlong nodeId) {


//@line:1087

        return ax::NodeEditor::BreakLinks(static_cast<ax::NodeEditor::NodeId>(nodeId));
    

}

JNIEXPORT jint JNICALL Java_imgui_extension_nodeditor_NodeEditor_nBreakLinksPin(JNIEnv* env, jclass clazz, jlong pinId) {


//@line:1095

        return ax::NodeEditor::BreakLinks(static_cast<ax::NodeEditor::PinId>(pinId));
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditor_nNavigateToContent__(JNIEnv* env, jclass clazz) {


//@line:1107

        ax::NodeEditor::NavigateToContent();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditor_nNavigateToContent__F(JNIEnv* env, jclass clazz, jfloat duration) {


//@line:1111

        ax::NodeEditor::NavigateToContent(duration);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditor_nNavigateToSelection__(JNIEnv* env, jclass clazz) {


//@line:1131

        ax::NodeEditor::NavigateToSelection();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditor_nNavigateToSelection__Z(JNIEnv* env, jclass clazz, jboolean zoomIn) {


//@line:1135

        ax::NodeEditor::NavigateToSelection(zoomIn);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditor_nNavigateToSelection__ZF(JNIEnv* env, jclass clazz, jboolean zoomIn, jfloat duration) {


//@line:1139

        ax::NodeEditor::NavigateToSelection(zoomIn, duration);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditor_nNavigateToSelection__F(JNIEnv* env, jclass clazz, jfloat duration) {


//@line:1143

        ax::NodeEditor::NavigateToSelection(false, duration);
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_nodeditor_NodeEditor_nShowNodeContextMenu(JNIEnv* env, jclass clazz, jlongArray obj_nodeId) {

//@line:1151

        auto nodeId = obj_nodeId == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_nodeId, JNI_FALSE);
        auto _result = ax::NodeEditor::ShowNodeContextMenu(reinterpret_cast<ax::NodeEditor::NodeId*>((nodeId != NULL ? &nodeId[0] : NULL)));
        if (nodeId != NULL) env->ReleasePrimitiveArrayCritical(obj_nodeId, nodeId, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_nodeditor_NodeEditor_nShowPinContextMenu(JNIEnv* env, jclass clazz, jlongArray obj_pinId) {

//@line:1162

        auto pinId = obj_pinId == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_pinId, JNI_FALSE);
        auto _result = ax::NodeEditor::ShowPinContextMenu(reinterpret_cast<ax::NodeEditor::PinId*>((pinId != NULL ? &pinId[0] : NULL)));
        if (pinId != NULL) env->ReleasePrimitiveArrayCritical(obj_pinId, pinId, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_nodeditor_NodeEditor_nShowLinkContextMenu(JNIEnv* env, jclass clazz, jlongArray obj_linkId) {

//@line:1173

        auto linkId = obj_linkId == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_linkId, JNI_FALSE);
        auto _result = ax::NodeEditor::ShowLinkContextMenu(reinterpret_cast<ax::NodeEditor::LinkId*>((linkId != NULL ? &linkId[0] : NULL)));
        if (linkId != NULL) env->ReleasePrimitiveArrayCritical(obj_linkId, linkId, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jlong JNICALL Java_imgui_extension_nodeditor_NodeEditor_getNodeWithContextMenu(JNIEnv* env, jclass clazz) {


//@line:1180

        ax::NodeEditor::NodeId id;
        return ax::NodeEditor::ShowNodeContextMenu(&id) ? (uintptr_t)id : -1;
    

}

JNIEXPORT jlong JNICALL Java_imgui_extension_nodeditor_NodeEditor_getPinWithContextMenu(JNIEnv* env, jclass clazz) {


//@line:1185

        ax::NodeEditor::PinId id;
        return ax::NodeEditor::ShowPinContextMenu(&id) ? (uintptr_t)id : -1;
    

}

JNIEXPORT jlong JNICALL Java_imgui_extension_nodeditor_NodeEditor_getLinkWithContextMenu(JNIEnv* env, jclass clazz) {


//@line:1190

        ax::NodeEditor::LinkId id;
        return ax::NodeEditor::ShowLinkContextMenu(&id) ? (uintptr_t)id : -1;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_nodeditor_NodeEditor_nShowBackgroundContextMenu(JNIEnv* env, jclass clazz) {


//@line:1199

        return ax::NodeEditor::ShowBackgroundContextMenu();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditor_nEnableShortcuts(JNIEnv* env, jclass clazz, jboolean enable) {


//@line:1207

        ax::NodeEditor::EnableShortcuts(enable);
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_nodeditor_NodeEditor_nAreShortcutsEnabled(JNIEnv* env, jclass clazz) {


//@line:1215

        return ax::NodeEditor::AreShortcutsEnabled();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_nodeditor_NodeEditor_nBeginShortcut(JNIEnv* env, jclass clazz) {


//@line:1223

        return ax::NodeEditor::BeginShortcut();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_nodeditor_NodeEditor_nAcceptCut(JNIEnv* env, jclass clazz) {


//@line:1231

        return ax::NodeEditor::AcceptCut();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_nodeditor_NodeEditor_nAcceptCopy(JNIEnv* env, jclass clazz) {


//@line:1239

        return ax::NodeEditor::AcceptCopy();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_nodeditor_NodeEditor_nAcceptPaste(JNIEnv* env, jclass clazz) {


//@line:1247

        return ax::NodeEditor::AcceptPaste();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_nodeditor_NodeEditor_nAcceptDuplicate(JNIEnv* env, jclass clazz) {


//@line:1255

        return ax::NodeEditor::AcceptDuplicate();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_nodeditor_NodeEditor_nAcceptCreateNode(JNIEnv* env, jclass clazz) {


//@line:1263

        return ax::NodeEditor::AcceptCreateNode();
    

}

JNIEXPORT jint JNICALL Java_imgui_extension_nodeditor_NodeEditor_nGetActionContextSize(JNIEnv* env, jclass clazz) {


//@line:1271

        return ax::NodeEditor::GetActionContextSize();
    

}

JNIEXPORT jint JNICALL Java_imgui_extension_nodeditor_NodeEditor_nGetActionContextNodes(JNIEnv* env, jclass clazz, jlongArray obj_nodes, jint size) {

//@line:1279

        auto nodes = obj_nodes == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_nodes, JNI_FALSE);
        auto _result = ax::NodeEditor::GetActionContextNodes(reinterpret_cast<ax::NodeEditor::NodeId*>(&nodes[0]), size);
        if (nodes != NULL) env->ReleasePrimitiveArrayCritical(obj_nodes, nodes, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jint JNICALL Java_imgui_extension_nodeditor_NodeEditor_nGetActionContextLinks(JNIEnv* env, jclass clazz, jlongArray obj_links, jint size) {

//@line:1290

        auto links = obj_links == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_links, JNI_FALSE);
        auto _result = ax::NodeEditor::GetActionContextLinks(reinterpret_cast<ax::NodeEditor::LinkId*>(&links[0]), size);
        if (links != NULL) env->ReleasePrimitiveArrayCritical(obj_links, links, JNI_FALSE);
        return _result;
    
}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditor_nEndShortcut(JNIEnv* env, jclass clazz) {


//@line:1301

        ax::NodeEditor::EndShortcut();
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_nodeditor_NodeEditor_nGetCurrentZoom(JNIEnv* env, jclass clazz) {


//@line:1309

        return ax::NodeEditor::GetCurrentZoom();
    

}

JNIEXPORT jlong JNICALL Java_imgui_extension_nodeditor_NodeEditor_nGetHoveredNode(JNIEnv* env, jclass clazz) {


//@line:1317

        return (uintptr_t)ax::NodeEditor::GetHoveredNode();
    

}

JNIEXPORT jlong JNICALL Java_imgui_extension_nodeditor_NodeEditor_nGetHoveredPin(JNIEnv* env, jclass clazz) {


//@line:1325

        return (uintptr_t)ax::NodeEditor::GetHoveredPin();
    

}

JNIEXPORT jlong JNICALL Java_imgui_extension_nodeditor_NodeEditor_nGetHoveredLink(JNIEnv* env, jclass clazz) {


//@line:1333

        return (uintptr_t)ax::NodeEditor::GetHoveredLink();
    

}

JNIEXPORT jlong JNICALL Java_imgui_extension_nodeditor_NodeEditor_nGetDoubleClickedNode(JNIEnv* env, jclass clazz) {


//@line:1341

        return (uintptr_t)ax::NodeEditor::GetDoubleClickedNode();
    

}

JNIEXPORT jlong JNICALL Java_imgui_extension_nodeditor_NodeEditor_nGetDoubleClickedPin(JNIEnv* env, jclass clazz) {


//@line:1349

        return (uintptr_t)ax::NodeEditor::GetDoubleClickedPin();
    

}

JNIEXPORT jlong JNICALL Java_imgui_extension_nodeditor_NodeEditor_nGetDoubleClickedLink(JNIEnv* env, jclass clazz) {


//@line:1357

        return (uintptr_t)ax::NodeEditor::GetDoubleClickedLink();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_nodeditor_NodeEditor_nIsBackgroundClicked(JNIEnv* env, jclass clazz) {


//@line:1365

        return ax::NodeEditor::IsBackgroundClicked();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_nodeditor_NodeEditor_nIsBackgroundDoubleClicked(JNIEnv* env, jclass clazz) {


//@line:1373

        return ax::NodeEditor::IsBackgroundDoubleClicked();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_nodeditor_NodeEditor_nGetLinkPins(JNIEnv* env, jclass clazz, jlong linkId, jlongArray obj_startPinId, jlongArray obj_endPinId) {

//@line:1381

        auto startPinId = obj_startPinId == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_startPinId, JNI_FALSE);
        auto endPinId = obj_endPinId == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_endPinId, JNI_FALSE);
        auto _result = ax::NodeEditor::GetLinkPins(static_cast<ax::NodeEditor::LinkId>(linkId), reinterpret_cast<ax::NodeEditor::PinId*>((startPinId != NULL ? &startPinId[0] : NULL)), reinterpret_cast<ax::NodeEditor::PinId*>((endPinId != NULL ? &endPinId[0] : NULL)));
        if (startPinId != NULL) env->ReleasePrimitiveArrayCritical(obj_startPinId, startPinId, JNI_FALSE);
        if (endPinId != NULL) env->ReleasePrimitiveArrayCritical(obj_endPinId, endPinId, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_nodeditor_NodeEditor_nPinHadAnyLinks(JNIEnv* env, jclass clazz, jlong pinId) {


//@line:1394

        return ax::NodeEditor::PinHadAnyLinks(static_cast<ax::NodeEditor::PinId>(pinId));
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditor_nGetScreenSize(JNIEnv* env, jclass clazz, jobject dst) {


//@line:1416

        Jni::ImVec2Cpy(env, ax::NodeEditor::GetScreenSize(), dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_nodeditor_NodeEditor_nGetScreenSizeX(JNIEnv* env, jclass clazz) {


//@line:1420

        return ax::NodeEditor::GetScreenSize().x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_nodeditor_NodeEditor_nGetScreenSizeY(JNIEnv* env, jclass clazz) {


//@line:1424

        return ax::NodeEditor::GetScreenSize().y;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditor_nScreenToCanvas(JNIEnv* env, jclass clazz, jobject dst, jfloat posX, jfloat posY) {

//@line:1456

        ImVec2 pos = ImVec2(posX, posY);
        Jni::ImVec2Cpy(env, ax::NodeEditor::ScreenToCanvas(pos), dst);
    
}

JNIEXPORT jfloat JNICALL Java_imgui_extension_nodeditor_NodeEditor_nScreenToCanvasX(JNIEnv* env, jclass clazz, jfloat posX, jfloat posY) {

//@line:1461

        ImVec2 pos = ImVec2(posX, posY);
        auto _result = ax::NodeEditor::ScreenToCanvas(pos).x;
        return _result;
    
}

JNIEXPORT jfloat JNICALL Java_imgui_extension_nodeditor_NodeEditor_nScreenToCanvasY(JNIEnv* env, jclass clazz, jfloat posX, jfloat posY) {

//@line:1467

        ImVec2 pos = ImVec2(posX, posY);
        auto _result = ax::NodeEditor::ScreenToCanvas(pos).y;
        return _result;
    
}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditor_nCanvasToScreen(JNIEnv* env, jclass clazz, jobject dst, jfloat posX, jfloat posY) {

//@line:1501

        ImVec2 pos = ImVec2(posX, posY);
        Jni::ImVec2Cpy(env, ax::NodeEditor::CanvasToScreen(pos), dst);
    
}

JNIEXPORT jfloat JNICALL Java_imgui_extension_nodeditor_NodeEditor_nCanvasToScreenX(JNIEnv* env, jclass clazz, jfloat posX, jfloat posY) {

//@line:1506

        ImVec2 pos = ImVec2(posX, posY);
        auto _result = ax::NodeEditor::CanvasToScreen(pos).x;
        return _result;
    
}

JNIEXPORT jfloat JNICALL Java_imgui_extension_nodeditor_NodeEditor_nCanvasToScreenY(JNIEnv* env, jclass clazz, jfloat posX, jfloat posY) {

//@line:1512

        ImVec2 pos = ImVec2(posX, posY);
        auto _result = ax::NodeEditor::CanvasToScreen(pos).y;
        return _result;
    
}

JNIEXPORT jint JNICALL Java_imgui_extension_nodeditor_NodeEditor_nGetNodeCount(JNIEnv* env, jclass clazz) {


//@line:1522

        return ax::NodeEditor::GetNodeCount();
    

}

JNIEXPORT jint JNICALL Java_imgui_extension_nodeditor_NodeEditor_nGetOrderedNodeIds(JNIEnv* env, jclass clazz, jlongArray obj_nodes, jint size) {

//@line:1530

        auto nodes = obj_nodes == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_nodes, JNI_FALSE);
        auto _result = ax::NodeEditor::GetOrderedNodeIds(reinterpret_cast<ax::NodeEditor::NodeId*>(&nodes[0]), size);
        if (nodes != NULL) env->ReleasePrimitiveArrayCritical(obj_nodes, nodes, JNI_FALSE);
        return _result;
    
}


//@line:1537

        #undef NodeEditorConfig
        #undef NodeEditorStyle
        #undef NodeEditorContext
     