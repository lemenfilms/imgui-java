#include <imgui_extension_imguizmo_ImGuizmo.h>

//@line:11

        #include "_imguizmo.h"
     JNIEXPORT void JNICALL Java_imgui_extension_imguizmo_ImGuizmo_nSetDrawList__(JNIEnv* env, jclass clazz) {


//@line:31

        ImGuizmo::SetDrawlist();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imguizmo_ImGuizmo_nSetDrawList__J(JNIEnv* env, jclass clazz, jlong drawList) {


//@line:35

        ImGuizmo::SetDrawlist(reinterpret_cast<ImDrawList*>(drawList));
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imguizmo_ImGuizmo_nBeginFrame(JNIEnv* env, jclass clazz) {


//@line:46

        ImGuizmo::BeginFrame();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imguizmo_ImGuizmo_nSetImGuiContext(JNIEnv* env, jclass clazz, jlong ctx) {


//@line:60

        ImGuizmo::SetImGuiContext(reinterpret_cast<ImGuiContext*>(ctx));
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_imguizmo_ImGuizmo_nIsOver__(JNIEnv* env, jclass clazz) {


//@line:71

        return ImGuizmo::IsOver();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_imguizmo_ImGuizmo_nIsUsing(JNIEnv* env, jclass clazz) {


//@line:82

        return ImGuizmo::IsUsing();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imguizmo_ImGuizmo_nEnable(JNIEnv* env, jclass clazz, jboolean enable) {


//@line:94

        ImGuizmo::Enable(enable);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imguizmo_ImGuizmo_nDecomposeMatrixToComponents(JNIEnv* env, jclass clazz, jfloatArray obj_matrix, jfloatArray obj_translation, jfloatArray obj_rotation, jfloatArray obj_scale) {

//@line:117

        auto matrix = obj_matrix == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_matrix, JNI_FALSE);
        auto translation = obj_translation == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_translation, JNI_FALSE);
        auto rotation = obj_rotation == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_rotation, JNI_FALSE);
        auto scale = obj_scale == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_scale, JNI_FALSE);
        ImGuizmo::DecomposeMatrixToComponents(&matrix[0], &translation[0], &rotation[0], &scale[0]);
        if (matrix != NULL) env->ReleasePrimitiveArrayCritical(obj_matrix, matrix, JNI_FALSE);
        if (translation != NULL) env->ReleasePrimitiveArrayCritical(obj_translation, translation, JNI_FALSE);
        if (rotation != NULL) env->ReleasePrimitiveArrayCritical(obj_rotation, rotation, JNI_FALSE);
        if (scale != NULL) env->ReleasePrimitiveArrayCritical(obj_scale, scale, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_imguizmo_ImGuizmo_nRecomposeMatrixFromComponents(JNIEnv* env, jclass clazz, jfloatArray obj_translation, jfloatArray obj_rotation, jfloatArray obj_scale, jfloatArray obj_matrix) {

//@line:148

        auto translation = obj_translation == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_translation, JNI_FALSE);
        auto rotation = obj_rotation == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_rotation, JNI_FALSE);
        auto scale = obj_scale == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_scale, JNI_FALSE);
        auto matrix = obj_matrix == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_matrix, JNI_FALSE);
        ImGuizmo::RecomposeMatrixFromComponents(&translation[0], &rotation[0], &scale[0], &matrix[0]);
        if (translation != NULL) env->ReleasePrimitiveArrayCritical(obj_translation, translation, JNI_FALSE);
        if (rotation != NULL) env->ReleasePrimitiveArrayCritical(obj_rotation, rotation, JNI_FALSE);
        if (scale != NULL) env->ReleasePrimitiveArrayCritical(obj_scale, scale, JNI_FALSE);
        if (matrix != NULL) env->ReleasePrimitiveArrayCritical(obj_matrix, matrix, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_imguizmo_ImGuizmo_nSetRect(JNIEnv* env, jclass clazz, jfloat x, jfloat y, jfloat width, jfloat height) {


//@line:176

        ImGuizmo::SetRect(x, y, width, height);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imguizmo_ImGuizmo_nSetOrthographic(JNIEnv* env, jclass clazz, jboolean isOrthographic) {


//@line:187

        ImGuizmo::SetOrthographic(isOrthographic);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imguizmo_ImGuizmo_nDrawCubes___3F_3F_3F(JNIEnv* env, jclass clazz, jfloatArray obj_view, jfloatArray obj_projection, jfloatArray obj_matrices) {

//@line:205

        auto view = obj_view == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_view, JNI_FALSE);
        auto projection = obj_projection == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_projection, JNI_FALSE);
        auto matrices = obj_matrices == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_matrices, JNI_FALSE);
        ImGuizmo::DrawCubes(&view[0], &projection[0], &matrices[0], (int)(env->GetArrayLength(obj_matrices)/16));
        if (view != NULL) env->ReleasePrimitiveArrayCritical(obj_view, view, JNI_FALSE);
        if (projection != NULL) env->ReleasePrimitiveArrayCritical(obj_projection, projection, JNI_FALSE);
        if (matrices != NULL) env->ReleasePrimitiveArrayCritical(obj_matrices, matrices, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_imguizmo_ImGuizmo_nDrawCubes___3F_3F_3FI(JNIEnv* env, jclass clazz, jfloatArray obj_view, jfloatArray obj_projection, jfloatArray obj_matrices, jint matrixCount) {

//@line:231

        auto view = obj_view == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_view, JNI_FALSE);
        auto projection = obj_projection == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_projection, JNI_FALSE);
        auto matrices = obj_matrices == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_matrices, JNI_FALSE);
        ImGuizmo::DrawCubes(&view[0], &projection[0], &matrices[0], matrixCount);
        if (view != NULL) env->ReleasePrimitiveArrayCritical(obj_view, view, JNI_FALSE);
        if (projection != NULL) env->ReleasePrimitiveArrayCritical(obj_projection, projection, JNI_FALSE);
        if (matrices != NULL) env->ReleasePrimitiveArrayCritical(obj_matrices, matrices, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_imguizmo_ImGuizmo_nDrawGrid(JNIEnv* env, jclass clazz, jfloatArray obj_view, jfloatArray obj_projection, jfloatArray obj_matrix, jfloat gridSize) {

//@line:278

        auto view = obj_view == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_view, JNI_FALSE);
        auto projection = obj_projection == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_projection, JNI_FALSE);
        auto matrix = obj_matrix == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_matrix, JNI_FALSE);
        ImGuizmo::DrawGrid(&view[0], &projection[0], &matrix[0], gridSize);
        if (view != NULL) env->ReleasePrimitiveArrayCritical(obj_view, view, JNI_FALSE);
        if (projection != NULL) env->ReleasePrimitiveArrayCritical(obj_projection, projection, JNI_FALSE);
        if (matrix != NULL) env->ReleasePrimitiveArrayCritical(obj_matrix, matrix, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_imguizmo_ImGuizmo_nManipulate___3F_3FII_3F(JNIEnv* env, jclass clazz, jfloatArray obj_view, jfloatArray obj_projection, jint operation, jint mode, jfloatArray obj_matrix) {

//@line:398

        auto view = obj_view == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_view, JNI_FALSE);
        auto projection = obj_projection == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_projection, JNI_FALSE);
        auto matrix = obj_matrix == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_matrix, JNI_FALSE);
        ImGuizmo::Manipulate(&view[0], &projection[0], static_cast<ImGuizmo::OPERATION>(operation), static_cast<ImGuizmo::MODE>(mode), &matrix[0]);
        if (view != NULL) env->ReleasePrimitiveArrayCritical(obj_view, view, JNI_FALSE);
        if (projection != NULL) env->ReleasePrimitiveArrayCritical(obj_projection, projection, JNI_FALSE);
        if (matrix != NULL) env->ReleasePrimitiveArrayCritical(obj_matrix, matrix, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_imguizmo_ImGuizmo_nManipulate___3F_3FII_3F_3F(JNIEnv* env, jclass clazz, jfloatArray obj_view, jfloatArray obj_projection, jint operation, jint mode, jfloatArray obj_matrix, jfloatArray obj_deltaMatrix) {

//@line:408

        auto view = obj_view == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_view, JNI_FALSE);
        auto projection = obj_projection == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_projection, JNI_FALSE);
        auto matrix = obj_matrix == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_matrix, JNI_FALSE);
        auto deltaMatrix = obj_deltaMatrix == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_deltaMatrix, JNI_FALSE);
        ImGuizmo::Manipulate(&view[0], &projection[0], static_cast<ImGuizmo::OPERATION>(operation), static_cast<ImGuizmo::MODE>(mode), &matrix[0], &deltaMatrix[0]);
        if (view != NULL) env->ReleasePrimitiveArrayCritical(obj_view, view, JNI_FALSE);
        if (projection != NULL) env->ReleasePrimitiveArrayCritical(obj_projection, projection, JNI_FALSE);
        if (matrix != NULL) env->ReleasePrimitiveArrayCritical(obj_matrix, matrix, JNI_FALSE);
        if (deltaMatrix != NULL) env->ReleasePrimitiveArrayCritical(obj_deltaMatrix, deltaMatrix, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_imguizmo_ImGuizmo_nManipulate___3F_3FII_3F_3F_3F(JNIEnv* env, jclass clazz, jfloatArray obj_view, jfloatArray obj_projection, jint operation, jint mode, jfloatArray obj_matrix, jfloatArray obj_deltaMatrix, jfloatArray obj_snap) {

//@line:420

        auto view = obj_view == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_view, JNI_FALSE);
        auto projection = obj_projection == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_projection, JNI_FALSE);
        auto matrix = obj_matrix == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_matrix, JNI_FALSE);
        auto deltaMatrix = obj_deltaMatrix == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_deltaMatrix, JNI_FALSE);
        auto snap = obj_snap == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_snap, JNI_FALSE);
        ImGuizmo::Manipulate(&view[0], &projection[0], static_cast<ImGuizmo::OPERATION>(operation), static_cast<ImGuizmo::MODE>(mode), &matrix[0], &deltaMatrix[0], &snap[0]);
        if (view != NULL) env->ReleasePrimitiveArrayCritical(obj_view, view, JNI_FALSE);
        if (projection != NULL) env->ReleasePrimitiveArrayCritical(obj_projection, projection, JNI_FALSE);
        if (matrix != NULL) env->ReleasePrimitiveArrayCritical(obj_matrix, matrix, JNI_FALSE);
        if (deltaMatrix != NULL) env->ReleasePrimitiveArrayCritical(obj_deltaMatrix, deltaMatrix, JNI_FALSE);
        if (snap != NULL) env->ReleasePrimitiveArrayCritical(obj_snap, snap, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_imguizmo_ImGuizmo_nManipulate___3F_3FII_3F_3F_3F_3F(JNIEnv* env, jclass clazz, jfloatArray obj_view, jfloatArray obj_projection, jint operation, jint mode, jfloatArray obj_matrix, jfloatArray obj_deltaMatrix, jfloatArray obj_snap, jfloatArray obj_localBounds) {

//@line:434

        auto view = obj_view == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_view, JNI_FALSE);
        auto projection = obj_projection == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_projection, JNI_FALSE);
        auto matrix = obj_matrix == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_matrix, JNI_FALSE);
        auto deltaMatrix = obj_deltaMatrix == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_deltaMatrix, JNI_FALSE);
        auto snap = obj_snap == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_snap, JNI_FALSE);
        auto localBounds = obj_localBounds == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_localBounds, JNI_FALSE);
        ImGuizmo::Manipulate(&view[0], &projection[0], static_cast<ImGuizmo::OPERATION>(operation), static_cast<ImGuizmo::MODE>(mode), &matrix[0], &deltaMatrix[0], &snap[0], &localBounds[0]);
        if (view != NULL) env->ReleasePrimitiveArrayCritical(obj_view, view, JNI_FALSE);
        if (projection != NULL) env->ReleasePrimitiveArrayCritical(obj_projection, projection, JNI_FALSE);
        if (matrix != NULL) env->ReleasePrimitiveArrayCritical(obj_matrix, matrix, JNI_FALSE);
        if (deltaMatrix != NULL) env->ReleasePrimitiveArrayCritical(obj_deltaMatrix, deltaMatrix, JNI_FALSE);
        if (snap != NULL) env->ReleasePrimitiveArrayCritical(obj_snap, snap, JNI_FALSE);
        if (localBounds != NULL) env->ReleasePrimitiveArrayCritical(obj_localBounds, localBounds, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_imguizmo_ImGuizmo_nManipulate___3F_3FII_3F_3F_3F_3F_3F(JNIEnv* env, jclass clazz, jfloatArray obj_view, jfloatArray obj_projection, jint operation, jint mode, jfloatArray obj_matrix, jfloatArray obj_deltaMatrix, jfloatArray obj_snap, jfloatArray obj_localBounds, jfloatArray obj_boundsSnap) {

//@line:450

        auto view = obj_view == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_view, JNI_FALSE);
        auto projection = obj_projection == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_projection, JNI_FALSE);
        auto matrix = obj_matrix == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_matrix, JNI_FALSE);
        auto deltaMatrix = obj_deltaMatrix == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_deltaMatrix, JNI_FALSE);
        auto snap = obj_snap == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_snap, JNI_FALSE);
        auto localBounds = obj_localBounds == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_localBounds, JNI_FALSE);
        auto boundsSnap = obj_boundsSnap == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_boundsSnap, JNI_FALSE);
        ImGuizmo::Manipulate(&view[0], &projection[0], static_cast<ImGuizmo::OPERATION>(operation), static_cast<ImGuizmo::MODE>(mode), &matrix[0], &deltaMatrix[0], &snap[0], &localBounds[0], &boundsSnap[0]);
        if (view != NULL) env->ReleasePrimitiveArrayCritical(obj_view, view, JNI_FALSE);
        if (projection != NULL) env->ReleasePrimitiveArrayCritical(obj_projection, projection, JNI_FALSE);
        if (matrix != NULL) env->ReleasePrimitiveArrayCritical(obj_matrix, matrix, JNI_FALSE);
        if (deltaMatrix != NULL) env->ReleasePrimitiveArrayCritical(obj_deltaMatrix, deltaMatrix, JNI_FALSE);
        if (snap != NULL) env->ReleasePrimitiveArrayCritical(obj_snap, snap, JNI_FALSE);
        if (localBounds != NULL) env->ReleasePrimitiveArrayCritical(obj_localBounds, localBounds, JNI_FALSE);
        if (boundsSnap != NULL) env->ReleasePrimitiveArrayCritical(obj_boundsSnap, boundsSnap, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_imguizmo_ImGuizmo_nViewManipulate(JNIEnv* env, jclass clazz, jfloatArray obj_view, jfloat length, jfloat positionX, jfloat positionY, jfloat sizeX, jfloat sizeY, jint backgroundColor) {

//@line:492

        auto view = obj_view == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_view, JNI_FALSE);
        ImVec2 position = ImVec2(positionX, positionY);
        ImVec2 size = ImVec2(sizeX, sizeY);
        ImGuizmo::ViewManipulate(&view[0], length, position, size, backgroundColor);
        if (view != NULL) env->ReleasePrimitiveArrayCritical(obj_view, view, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_imguizmo_ImGuizmo_nSetID(JNIEnv* env, jclass clazz, jint id) {


//@line:507

        ImGuizmo::SetID(id);
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_imguizmo_ImGuizmo_nIsOver__I(JNIEnv* env, jclass clazz, jint operation) {


//@line:518

        return ImGuizmo::IsOver(static_cast<ImGuizmo::OPERATION>(operation));
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imguizmo_ImGuizmo_nSetGizmoSizeClipSpace(JNIEnv* env, jclass clazz, jfloat value) {


//@line:526

        ImGuizmo::SetGizmoSizeClipSpace(value);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_imguizmo_ImGuizmo_nAllowAxisFlip(JNIEnv* env, jclass clazz, jboolean value) {


//@line:539

        ImGuizmo::AllowAxisFlip(value);
    

}

