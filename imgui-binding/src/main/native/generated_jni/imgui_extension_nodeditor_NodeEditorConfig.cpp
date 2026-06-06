#include <imgui_extension_nodeditor_NodeEditorConfig.h>

//@line:11

        #include "_nodeeditor.h"
        #define THIS ((ax::NodeEditor::Config*)STRUCT_PTR)
     JNIEXPORT jlong JNICALL Java_imgui_extension_nodeditor_NodeEditorConfig_nCreate(JNIEnv* env, jobject object) {


//@line:16

        return (uintptr_t)(new ax::NodeEditor::Config());
    

}

JNIEXPORT jstring JNICALL Java_imgui_extension_nodeditor_NodeEditorConfig_nGetSettingsFile(JNIEnv* env, jobject object) {


//@line:28

        return env->NewStringUTF(THIS->SettingsFile);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditorConfig_nSetSettingsFile(JNIEnv* env, jobject object, jstring obj_value) {

//@line:32

        auto value = obj_value == NULL ? NULL : (char*)env->GetStringUTFChars(obj_value, JNI_FALSE);
        SET_STRING_FIELD(THIS->SettingsFile, value);
        if (value != NULL) env->ReleaseStringUTFChars(obj_value, value);
    
}

JNIEXPORT jint JNICALL Java_imgui_extension_nodeditor_NodeEditorConfig_nGetCanvasSizeMode(JNIEnv* env, jobject object) {


//@line:46

        return static_cast<int>(THIS->CanvasSizeMode);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditorConfig_nSetCanvasSizeMode(JNIEnv* env, jobject object, jint value) {


//@line:50

        THIS->CanvasSizeMode = static_cast<ax::NodeEditor::CanvasSizeMode>(value);
    

}

JNIEXPORT jint JNICALL Java_imgui_extension_nodeditor_NodeEditorConfig_nGetDragButtonIndex(JNIEnv* env, jobject object) {


//@line:62

        return THIS->DragButtonIndex;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditorConfig_nSetDragButtonIndex(JNIEnv* env, jobject object, jint value) {


//@line:66

        THIS->DragButtonIndex = value;
    

}

JNIEXPORT jint JNICALL Java_imgui_extension_nodeditor_NodeEditorConfig_nGetSelectButtonIndex(JNIEnv* env, jobject object) {


//@line:78

        return THIS->SelectButtonIndex;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditorConfig_nSetSelectButtonIndex(JNIEnv* env, jobject object, jint value) {


//@line:82

        THIS->SelectButtonIndex = value;
    

}

JNIEXPORT jint JNICALL Java_imgui_extension_nodeditor_NodeEditorConfig_nGetNavigateButtonIndex(JNIEnv* env, jobject object) {


//@line:94

        return THIS->NavigateButtonIndex;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditorConfig_nSetNavigateButtonIndex(JNIEnv* env, jobject object, jint value) {


//@line:98

        THIS->NavigateButtonIndex = value;
    

}

JNIEXPORT jint JNICALL Java_imgui_extension_nodeditor_NodeEditorConfig_nGetContextMenuButtonIndex(JNIEnv* env, jobject object) {


//@line:110

        return THIS->ContextMenuButtonIndex;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditorConfig_nSetContextMenuButtonIndex(JNIEnv* env, jobject object, jint value) {


//@line:114

        THIS->ContextMenuButtonIndex = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_nodeditor_NodeEditorConfig_nGetEnableSmoothZoom(JNIEnv* env, jobject object) {


//@line:126

        return THIS->EnableSmoothZoom;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditorConfig_nSetEnableSmoothZoom(JNIEnv* env, jobject object, jboolean value) {


//@line:130

        THIS->EnableSmoothZoom = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_nodeditor_NodeEditorConfig_nGetSmoothZoomPower(JNIEnv* env, jobject object) {


//@line:142

        return THIS->SmoothZoomPower;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_nodeditor_NodeEditorConfig_nSetSmoothZoomPower(JNIEnv* env, jobject object, jfloat value) {


//@line:146

        THIS->SmoothZoomPower = value;
    

}


//@line:150

        #undef THIS
     