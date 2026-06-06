#include <imgui_extension_imnodes_ImNodesStyle.h>

//@line:12

        #include "_imnodes.h"
        #define THIS ((ImNodesStyle*)STRUCT_PTR)
     JNIEXPORT jfloat JNICALL Java_imgui_extension_imnodes_ImNodesStyle_nGetGridSpacing(JNIEnv* env, jobject object) {


//@line:25

        return THIS->GridSpacing;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodesStyle_nSetGridSpacing(JNIEnv* env, jobject object, jfloat value) {


//@line:29

        THIS->GridSpacing = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_imnodes_ImNodesStyle_nGetNodeCornerRounding(JNIEnv* env, jobject object) {


//@line:41

        return THIS->NodeCornerRounding;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodesStyle_nSetNodeCornerRounding(JNIEnv* env, jobject object, jfloat value) {


//@line:45

        THIS->NodeCornerRounding = value;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodesStyle_nGetNodePadding(JNIEnv* env, jobject object, jobject dst) {


//@line:75

        Jni::ImVec2Cpy(env, THIS->NodePadding, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_imnodes_ImNodesStyle_nGetNodePaddingX(JNIEnv* env, jobject object) {


//@line:79

        return THIS->NodePadding.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_imnodes_ImNodesStyle_nGetNodePaddingY(JNIEnv* env, jobject object) {


//@line:83

        return THIS->NodePadding.y;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodesStyle_nSetNodePadding(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:87

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->NodePadding = value;
    
}

JNIEXPORT jfloat JNICALL Java_imgui_extension_imnodes_ImNodesStyle_nGetNodeBorderThickness(JNIEnv* env, jobject object) {


//@line:100

        return THIS->NodeBorderThickness;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodesStyle_nSetNodeBorderThickness(JNIEnv* env, jobject object, jfloat value) {


//@line:104

        THIS->NodeBorderThickness = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_imnodes_ImNodesStyle_nGetLinkThickness(JNIEnv* env, jobject object) {


//@line:116

        return THIS->LinkThickness;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodesStyle_nSetLinkThickness(JNIEnv* env, jobject object, jfloat value) {


//@line:120

        THIS->LinkThickness = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_imnodes_ImNodesStyle_nGetLinkLineSegmentsPerLength(JNIEnv* env, jobject object) {


//@line:132

        return THIS->LinkLineSegmentsPerLength;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodesStyle_nSetLinkLineSegmentsPerLength(JNIEnv* env, jobject object, jfloat value) {


//@line:136

        THIS->LinkLineSegmentsPerLength = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_imnodes_ImNodesStyle_nGetLinkHoverDistance(JNIEnv* env, jobject object) {


//@line:148

        return THIS->LinkHoverDistance;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodesStyle_nSetLinkHoverDistance(JNIEnv* env, jobject object, jfloat value) {


//@line:152

        THIS->LinkHoverDistance = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_imnodes_ImNodesStyle_nGetPinCircleRadius(JNIEnv* env, jobject object) {


//@line:170

        return THIS->PinCircleRadius;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodesStyle_nSetPinCircleRadius(JNIEnv* env, jobject object, jfloat value) {


//@line:174

        THIS->PinCircleRadius = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_imnodes_ImNodesStyle_nGetPinQuadSideLength(JNIEnv* env, jobject object) {


//@line:192

        return THIS->PinQuadSideLength;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodesStyle_nSetPinQuadSideLength(JNIEnv* env, jobject object, jfloat value) {


//@line:196

        THIS->PinQuadSideLength = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_imnodes_ImNodesStyle_nGetPinTriangleSideLength(JNIEnv* env, jobject object) {


//@line:214

        return THIS->PinTriangleSideLength;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodesStyle_nSetPinTriangleSideLength(JNIEnv* env, jobject object, jfloat value) {


//@line:218

        THIS->PinTriangleSideLength = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_imnodes_ImNodesStyle_nGetPinLineThickness(JNIEnv* env, jobject object) {


//@line:236

        return THIS->PinLineThickness;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodesStyle_nSetPinLineThickness(JNIEnv* env, jobject object, jfloat value) {


//@line:240

        THIS->PinLineThickness = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_imnodes_ImNodesStyle_nGetPinHoverRadius(JNIEnv* env, jobject object) {


//@line:258

        return THIS->PinHoverRadius;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodesStyle_nSetPinHoverRadius(JNIEnv* env, jobject object, jfloat value) {


//@line:262

        THIS->PinHoverRadius = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_imnodes_ImNodesStyle_nGetPinOffset(JNIEnv* env, jobject object) {


//@line:280

        return THIS->PinOffset;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodesStyle_nSetPinOffset(JNIEnv* env, jobject object, jfloat value) {


//@line:284

        THIS->PinOffset = value;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodesStyle_nGetMiniMapPadding(JNIEnv* env, jobject object, jobject dst) {


//@line:332

        Jni::ImVec2Cpy(env, THIS->MiniMapPadding, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_imnodes_ImNodesStyle_nGetMiniMapPaddingX(JNIEnv* env, jobject object) {


//@line:336

        return THIS->MiniMapPadding.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_imnodes_ImNodesStyle_nGetMiniMapPaddingY(JNIEnv* env, jobject object) {


//@line:340

        return THIS->MiniMapPadding.y;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodesStyle_nSetMiniMapPadding(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:344

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->MiniMapPadding = value;
    
}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodesStyle_nGetMiniMapOffset(JNIEnv* env, jobject object, jobject dst) {


//@line:393

        Jni::ImVec2Cpy(env, THIS->MiniMapOffset, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_imnodes_ImNodesStyle_nGetMiniMapOffsetX(JNIEnv* env, jobject object) {


//@line:397

        return THIS->MiniMapOffset.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_imnodes_ImNodesStyle_nGetMiniMapOffsetY(JNIEnv* env, jobject object) {


//@line:401

        return THIS->MiniMapOffset.y;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodesStyle_nSetMiniMapOffset(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:405

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->MiniMapOffset = value;
    
}

JNIEXPORT jint JNICALL Java_imgui_extension_imnodes_ImNodesStyle_nGetFlags(JNIEnv* env, jobject object) {


//@line:445

        return THIS->Flags;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodesStyle_nSetFlags(JNIEnv* env, jobject object, jint value) {


//@line:449

        THIS->Flags = value;
    

}

JNIEXPORT jintArray JNICALL Java_imgui_extension_imnodes_ImNodesStyle_nGetColors__(JNIEnv* env, jobject object) {


//@line:469

        jint jBuf[ImNodesCol_COUNT];
        for (int i = 0; i < ImNodesCol_COUNT; i++)
            jBuf[i] = THIS->Colors[i];
        jintArray result = env->NewIntArray(ImNodesCol_COUNT);
        env->SetIntArrayRegion(result, 0, ImNodesCol_COUNT, jBuf);
        return result;
    

}

JNIEXPORT jint JNICALL Java_imgui_extension_imnodes_ImNodesStyle_nGetColors__I(JNIEnv* env, jobject object, jint idx) {


//@line:478

        return THIS->Colors[idx];
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodesStyle_nSetColors___3I(JNIEnv* env, jobject object, jintArray obj_value) {
	int* value = (int*)env->GetPrimitiveArrayCritical(obj_value, 0);


//@line:482

        for (int i = 0; i < ImNodesCol_COUNT; i++)
            THIS->Colors[i] = value[i];
    
	env->ReleasePrimitiveArrayCritical(obj_value, value, 0);

}

JNIEXPORT void JNICALL Java_imgui_extension_imnodes_ImNodesStyle_nSetColors__II(JNIEnv* env, jobject object, jint idx, jint value) {


//@line:487

        THIS->Colors[idx] = value;
    

}


//@line:491

        #undef THIS
     