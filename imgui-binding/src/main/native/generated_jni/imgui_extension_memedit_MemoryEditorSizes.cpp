#include <imgui_extension_memedit_MemoryEditorSizes.h>

//@line:19

        #include "_memedit.h"
        #define THIS ((MemoryEditor::Sizes*)STRUCT_PTR)
     JNIEXPORT jlong JNICALL Java_imgui_extension_memedit_MemoryEditorSizes_nCreate(JNIEnv* env, jobject object) {


//@line:24

        return (uintptr_t)(new MemoryEditor::Sizes());
    

}

JNIEXPORT jint JNICALL Java_imgui_extension_memedit_MemoryEditorSizes_nGetAddrDigitsCount(JNIEnv* env, jobject object) {


//@line:36

        return THIS->AddrDigitsCount;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_memedit_MemoryEditorSizes_nSetAddrDigitsCount(JNIEnv* env, jobject object, jint value) {


//@line:40

        THIS->AddrDigitsCount = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_memedit_MemoryEditorSizes_nGetLineHeight(JNIEnv* env, jobject object) {


//@line:52

        return THIS->LineHeight;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_memedit_MemoryEditorSizes_nSetLineHeight(JNIEnv* env, jobject object, jfloat value) {


//@line:56

        THIS->LineHeight = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_memedit_MemoryEditorSizes_nGetGlyphWidth(JNIEnv* env, jobject object) {


//@line:68

        return THIS->GlyphWidth;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_memedit_MemoryEditorSizes_nSetGlyphWidth(JNIEnv* env, jobject object, jfloat value) {


//@line:72

        THIS->GlyphWidth = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_memedit_MemoryEditorSizes_nGetHexCellWidth(JNIEnv* env, jobject object) {


//@line:84

        return THIS->HexCellWidth;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_memedit_MemoryEditorSizes_nSetHexCellWidth(JNIEnv* env, jobject object, jfloat value) {


//@line:88

        THIS->HexCellWidth = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_memedit_MemoryEditorSizes_nGetSpacingBetweenMidCols(JNIEnv* env, jobject object) {


//@line:100

        return THIS->SpacingBetweenMidCols;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_memedit_MemoryEditorSizes_nSetSpacingBetweenMidCols(JNIEnv* env, jobject object, jfloat value) {


//@line:104

        THIS->SpacingBetweenMidCols = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_memedit_MemoryEditorSizes_nGetOffsetHexMinX(JNIEnv* env, jobject object) {


//@line:116

        return THIS->OffsetHexMinX;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_memedit_MemoryEditorSizes_nSetOffsetHexMinX(JNIEnv* env, jobject object, jfloat value) {


//@line:120

        THIS->OffsetHexMinX = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_memedit_MemoryEditorSizes_nGetOffsetHexMaxX(JNIEnv* env, jobject object) {


//@line:132

        return THIS->OffsetHexMaxX;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_memedit_MemoryEditorSizes_nSetOffsetHexMaxX(JNIEnv* env, jobject object, jfloat value) {


//@line:136

        THIS->OffsetHexMaxX = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_memedit_MemoryEditorSizes_nGetOffsetAsciiMinX(JNIEnv* env, jobject object) {


//@line:148

        return THIS->OffsetAsciiMinX;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_memedit_MemoryEditorSizes_nSetOffsetAsciiMinX(JNIEnv* env, jobject object, jfloat value) {


//@line:152

        THIS->OffsetAsciiMinX = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_memedit_MemoryEditorSizes_nGetOffsetAsciiMaxX(JNIEnv* env, jobject object) {


//@line:164

        return THIS->OffsetAsciiMaxX;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_memedit_MemoryEditorSizes_nSetOffsetAsciiMaxX(JNIEnv* env, jobject object, jfloat value) {


//@line:168

        THIS->OffsetAsciiMaxX = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_memedit_MemoryEditorSizes_nGetWindowWidth(JNIEnv* env, jobject object) {


//@line:180

        return THIS->WindowWidth;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_memedit_MemoryEditorSizes_nSetWindowWidth(JNIEnv* env, jobject object, jfloat value) {


//@line:184

        THIS->WindowWidth = value;
    

}


//@line:188

        #undef THIS
     