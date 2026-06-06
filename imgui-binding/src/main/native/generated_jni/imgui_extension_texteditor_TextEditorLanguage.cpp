#include <imgui_extension_texteditor_TextEditorLanguage.h>

//@line:15

        #include "_texteditor.h"
        #define THIS ((const TextEditor::Language*)STRUCT_PTR)
     JNIEXPORT jstring JNICALL Java_imgui_extension_texteditor_TextEditorLanguage_nGetName(JNIEnv* env, jobject object) {


//@line:24

        return env->NewStringUTF(THIS->name.c_str());
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_texteditor_TextEditorLanguage_nGetCaseSensitive(JNIEnv* env, jobject object) {


//@line:32

        return THIS->caseSensitive;
    

}

JNIEXPORT jint JNICALL Java_imgui_extension_texteditor_TextEditorLanguage_nGetPreprocess(JNIEnv* env, jobject object) {


//@line:40

        return THIS->preprocess;
    

}

JNIEXPORT jstring JNICALL Java_imgui_extension_texteditor_TextEditorLanguage_nGetSingleLineComment(JNIEnv* env, jobject object) {


//@line:48

        return env->NewStringUTF(THIS->singleLineComment.c_str());
    

}

JNIEXPORT jstring JNICALL Java_imgui_extension_texteditor_TextEditorLanguage_nGetSingleLineCommentAlt(JNIEnv* env, jobject object) {


//@line:56

        return env->NewStringUTF(THIS->singleLineCommentAlt.c_str());
    

}

JNIEXPORT jstring JNICALL Java_imgui_extension_texteditor_TextEditorLanguage_nGetCommentStart(JNIEnv* env, jobject object) {


//@line:64

        return env->NewStringUTF(THIS->commentStart.c_str());
    

}

JNIEXPORT jstring JNICALL Java_imgui_extension_texteditor_TextEditorLanguage_nGetCommentEnd(JNIEnv* env, jobject object) {


//@line:72

        return env->NewStringUTF(THIS->commentEnd.c_str());
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_texteditor_TextEditorLanguage_nGetHasSingleQuotedStrings(JNIEnv* env, jobject object) {


//@line:80

        return THIS->hasSingleQuotedStrings;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_texteditor_TextEditorLanguage_nGetHasDoubleQuotedStrings(JNIEnv* env, jobject object) {


//@line:88

        return THIS->hasDoubleQuotedStrings;
    

}

JNIEXPORT jstring JNICALL Java_imgui_extension_texteditor_TextEditorLanguage_nGetOtherStringStart(JNIEnv* env, jobject object) {


//@line:96

        return env->NewStringUTF(THIS->otherStringStart.c_str());
    

}

JNIEXPORT jstring JNICALL Java_imgui_extension_texteditor_TextEditorLanguage_nGetOtherStringEnd(JNIEnv* env, jobject object) {


//@line:104

        return env->NewStringUTF(THIS->otherStringEnd.c_str());
    

}

JNIEXPORT jstring JNICALL Java_imgui_extension_texteditor_TextEditorLanguage_nGetOtherStringAltStart(JNIEnv* env, jobject object) {


//@line:112

        return env->NewStringUTF(THIS->otherStringAltStart.c_str());
    

}

JNIEXPORT jstring JNICALL Java_imgui_extension_texteditor_TextEditorLanguage_nGetOtherStringAltEnd(JNIEnv* env, jobject object) {


//@line:120

        return env->NewStringUTF(THIS->otherStringAltEnd.c_str());
    

}

JNIEXPORT jint JNICALL Java_imgui_extension_texteditor_TextEditorLanguage_nGetStringEscape(JNIEnv* env, jobject object) {


//@line:128

        return THIS->stringEscape;
    

}

JNIEXPORT jlong JNICALL Java_imgui_extension_texteditor_TextEditorLanguage_nC(JNIEnv* env, jclass clazz) {


//@line:136

        return (uintptr_t)TextEditor::Language::C();
    

}

JNIEXPORT jlong JNICALL Java_imgui_extension_texteditor_TextEditorLanguage_nCpp(JNIEnv* env, jclass clazz) {


//@line:144

        return (uintptr_t)TextEditor::Language::Cpp();
    

}

JNIEXPORT jlong JNICALL Java_imgui_extension_texteditor_TextEditorLanguage_nCs(JNIEnv* env, jclass clazz) {


//@line:152

        return (uintptr_t)TextEditor::Language::Cs();
    

}

JNIEXPORT jlong JNICALL Java_imgui_extension_texteditor_TextEditorLanguage_nAngelScript(JNIEnv* env, jclass clazz) {


//@line:160

        return (uintptr_t)TextEditor::Language::AngelScript();
    

}

JNIEXPORT jlong JNICALL Java_imgui_extension_texteditor_TextEditorLanguage_nLua(JNIEnv* env, jclass clazz) {


//@line:168

        return (uintptr_t)TextEditor::Language::Lua();
    

}

JNIEXPORT jlong JNICALL Java_imgui_extension_texteditor_TextEditorLanguage_nPython(JNIEnv* env, jclass clazz) {


//@line:176

        return (uintptr_t)TextEditor::Language::Python();
    

}

JNIEXPORT jlong JNICALL Java_imgui_extension_texteditor_TextEditorLanguage_nGlsl(JNIEnv* env, jclass clazz) {


//@line:184

        return (uintptr_t)TextEditor::Language::Glsl();
    

}

JNIEXPORT jlong JNICALL Java_imgui_extension_texteditor_TextEditorLanguage_nHlsl(JNIEnv* env, jclass clazz) {


//@line:192

        return (uintptr_t)TextEditor::Language::Hlsl();
    

}

JNIEXPORT jlong JNICALL Java_imgui_extension_texteditor_TextEditorLanguage_nJson(JNIEnv* env, jclass clazz) {


//@line:200

        return (uintptr_t)TextEditor::Language::Json();
    

}

JNIEXPORT jlong JNICALL Java_imgui_extension_texteditor_TextEditorLanguage_nMarkdown(JNIEnv* env, jclass clazz) {


//@line:208

        return (uintptr_t)TextEditor::Language::Markdown();
    

}

JNIEXPORT jlong JNICALL Java_imgui_extension_texteditor_TextEditorLanguage_nSql(JNIEnv* env, jclass clazz) {


//@line:216

        return (uintptr_t)TextEditor::Language::Sql();
    

}


//@line:220

        #undef THIS
     