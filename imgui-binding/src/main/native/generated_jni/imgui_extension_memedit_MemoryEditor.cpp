#include <imgui_extension_memedit_MemoryEditor.h>

//@line:23

        #include "_memedit.h"
        #define THIS ((MemoryEditor*)STRUCT_PTR)
        #define MemoryEditorSizes MemoryEditor::Sizes
     JNIEXPORT jlong JNICALL Java_imgui_extension_memedit_MemoryEditor_nCreate(JNIEnv* env, jobject object) {


//@line:29

        return (uintptr_t)(new MemoryEditor());
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_memedit_MemoryEditor_nGetOpen(JNIEnv* env, jobject object) {


//@line:41

        return THIS->Open;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_memedit_MemoryEditor_nSetOpen(JNIEnv* env, jobject object, jboolean value) {


//@line:45

        THIS->Open = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_memedit_MemoryEditor_nGetReadOnly(JNIEnv* env, jobject object) {


//@line:57

        return THIS->ReadOnly;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_memedit_MemoryEditor_nSetReadOnly(JNIEnv* env, jobject object, jboolean value) {


//@line:61

        THIS->ReadOnly = value;
    

}

JNIEXPORT jint JNICALL Java_imgui_extension_memedit_MemoryEditor_nGetCols(JNIEnv* env, jobject object) {


//@line:73

        return THIS->Cols;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_memedit_MemoryEditor_nSetCols(JNIEnv* env, jobject object, jint value) {


//@line:77

        THIS->Cols = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_memedit_MemoryEditor_nGetOptShowOptions(JNIEnv* env, jobject object) {


//@line:89

        return THIS->OptShowOptions;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_memedit_MemoryEditor_nSetOptShowOptions(JNIEnv* env, jobject object, jboolean value) {


//@line:93

        THIS->OptShowOptions = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_memedit_MemoryEditor_nGetOptShowDataPreview(JNIEnv* env, jobject object) {


//@line:105

        return THIS->OptShowDataPreview;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_memedit_MemoryEditor_nSetOptShowDataPreview(JNIEnv* env, jobject object, jboolean value) {


//@line:109

        THIS->OptShowDataPreview = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_memedit_MemoryEditor_nGetOptShowHexII(JNIEnv* env, jobject object) {


//@line:121

        return THIS->OptShowHexII;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_memedit_MemoryEditor_nSetOptShowHexII(JNIEnv* env, jobject object, jboolean value) {


//@line:125

        THIS->OptShowHexII = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_memedit_MemoryEditor_nGetOptShowAscii(JNIEnv* env, jobject object) {


//@line:137

        return THIS->OptShowAscii;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_memedit_MemoryEditor_nSetOptShowAscii(JNIEnv* env, jobject object, jboolean value) {


//@line:141

        THIS->OptShowAscii = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_memedit_MemoryEditor_nGetOptGreyOutZeroes(JNIEnv* env, jobject object) {


//@line:153

        return THIS->OptGreyOutZeroes;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_memedit_MemoryEditor_nSetOptGreyOutZeroes(JNIEnv* env, jobject object, jboolean value) {


//@line:157

        THIS->OptGreyOutZeroes = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_memedit_MemoryEditor_nGetOptUpperCaseHex(JNIEnv* env, jobject object) {


//@line:169

        return THIS->OptUpperCaseHex;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_memedit_MemoryEditor_nSetOptUpperCaseHex(JNIEnv* env, jobject object, jboolean value) {


//@line:173

        THIS->OptUpperCaseHex = value;
    

}

JNIEXPORT jint JNICALL Java_imgui_extension_memedit_MemoryEditor_nGetOptMidColsCount(JNIEnv* env, jobject object) {


//@line:185

        return THIS->OptMidColsCount;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_memedit_MemoryEditor_nSetOptMidColsCount(JNIEnv* env, jobject object, jint value) {


//@line:189

        THIS->OptMidColsCount = value;
    

}

JNIEXPORT jint JNICALL Java_imgui_extension_memedit_MemoryEditor_nGetOptAddrDigitsCount(JNIEnv* env, jobject object) {


//@line:201

        return THIS->OptAddrDigitsCount;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_memedit_MemoryEditor_nSetOptAddrDigitsCount(JNIEnv* env, jobject object, jint value) {


//@line:205

        THIS->OptAddrDigitsCount = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_memedit_MemoryEditor_nGetOptFooterExtraHeight(JNIEnv* env, jobject object) {


//@line:217

        return THIS->OptFooterExtraHeight;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_memedit_MemoryEditor_nSetOptFooterExtraHeight(JNIEnv* env, jobject object, jfloat value) {


//@line:221

        THIS->OptFooterExtraHeight = value;
    

}

JNIEXPORT jint JNICALL Java_imgui_extension_memedit_MemoryEditor_nGetHighlightColor(JNIEnv* env, jobject object) {


//@line:233

        return THIS->HighlightColor;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_memedit_MemoryEditor_nSetHighlightColor(JNIEnv* env, jobject object, jint value) {


//@line:237

        THIS->HighlightColor = value;
    

}

JNIEXPORT void JNICALL Java_imgui_extension_memedit_MemoryEditor_nGotoAddrAndHighlight(JNIEnv* env, jobject object, jlong addrMin, jlong addrMax) {


//@line:245

        THIS->GotoAddrAndHighlight(addrMin, addrMax);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_memedit_MemoryEditor_nCalcSizes(JNIEnv* env, jobject object, jlong s, jlong memSize, jlong baseDisplayAddr) {


//@line:253

        THIS->CalcSizes(*reinterpret_cast<MemoryEditorSizes*>(s), memSize, baseDisplayAddr);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_memedit_MemoryEditor_nDrawWindow__Ljava_lang_String_2JJ(JNIEnv* env, jobject object, jstring obj_title, jlong memData, jlong memSize) {

//@line:265

        auto title = obj_title == NULL ? NULL : (char*)env->GetStringUTFChars(obj_title, JNI_FALSE);
        THIS->DrawWindow(title, reinterpret_cast<void*>(memData), memSize);
        if (title != NULL) env->ReleaseStringUTFChars(obj_title, title);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_memedit_MemoryEditor_nDrawWindow__Ljava_lang_String_2JJJ(JNIEnv* env, jobject object, jstring obj_title, jlong memData, jlong memSize, jlong baseDisplayAddr) {

//@line:271

        auto title = obj_title == NULL ? NULL : (char*)env->GetStringUTFChars(obj_title, JNI_FALSE);
        THIS->DrawWindow(title, reinterpret_cast<void*>(memData), memSize, baseDisplayAddr);
        if (title != NULL) env->ReleaseStringUTFChars(obj_title, title);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_memedit_MemoryEditor_nDrawContents__JJ(JNIEnv* env, jobject object, jlong memData, jlong memSize) {


//@line:285

        THIS->DrawContents(reinterpret_cast<void*>(memData), memSize);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_memedit_MemoryEditor_nDrawContents__JJJ(JNIEnv* env, jobject object, jlong memData, jlong memSize, jlong baseDisplayAddr) {


//@line:289

        THIS->DrawContents(reinterpret_cast<void*>(memData), memSize, baseDisplayAddr);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_memedit_MemoryEditor_nDrawOptionsLine(JNIEnv* env, jobject object, jlong s, jlong memData, jlong memSize, jlong baseDisplayAddr) {


//@line:297

        THIS->DrawOptionsLine(*reinterpret_cast<MemoryEditorSizes*>(s), reinterpret_cast<void*>(memData), memSize, baseDisplayAddr);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_memedit_MemoryEditor_nDrawPreviewLine(JNIEnv* env, jobject object, jlong s, jlong memDataVoid, jlong memSize, jlong baseDisplayAddr) {


//@line:305

        THIS->DrawPreviewLine(*reinterpret_cast<MemoryEditorSizes*>(s), reinterpret_cast<void*>(memDataVoid), memSize, baseDisplayAddr);
    

}


//@line:309

        #undef MemoryEditorSizes
        #undef THIS
     