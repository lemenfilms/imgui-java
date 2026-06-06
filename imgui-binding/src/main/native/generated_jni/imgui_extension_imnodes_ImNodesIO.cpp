#include <imgui_extension_imnodes_ImNodesIO.h>

//@line:10

        #include "_imnodes.h"
        #define THIS ((ImNodesIO*)STRUCT_PTR)
     JNIEXPORT jint JNICALL Java_imgui_extension_imnodes_ImNodesIO_nGetAltMouseButton(JNIEnv* env, jobject object) {


//@line:31

        return THIS->AltMouseButton;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodesIO_nSetAltMouseButton(JNIEnv* env, jobject object, jint value) {


//@line:35

        THIS->AltMouseButton = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_imnodes_ImNodesIO_nGetAutoPanningSpeed(JNIEnv* env, jobject object) {


//@line:53

        return THIS->AutoPanningSpeed;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodesIO_nSetAutoPanningSpeed(JNIEnv* env, jobject object, jfloat value) {


//@line:57

        THIS->AutoPanningSpeed = value;
    

}


//@line:61

        #undef THIS
     