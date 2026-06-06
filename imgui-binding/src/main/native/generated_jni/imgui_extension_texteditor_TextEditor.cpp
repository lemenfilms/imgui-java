#include <imgui_extension_texteditor_TextEditor.h>

//@line:29

        #include "_texteditor.h"
        #define THIS ((TextEditor*)STRUCT_PTR)

        static jintArray TextEditorPaletteToArray(JNIEnv* env, const TextEditor::Palette& palette) {
            const auto size = static_cast<jsize>(palette.size());
            jintArray result = env->NewIntArray(size);
            std::vector<jint> values(static_cast<size_t>(size));
            for (size_t i = 0; i < palette.size(); ++i) {
                values[i] = static_cast<jint>(palette[i]);
            }
            env->SetIntArrayRegion(result, 0, size, values.data());
            return result;
        }

        static void TextEditorArrayToPalette(JNIEnv* env, jintArray source, TextEditor::Palette& destination) {
            const auto maxCount = static_cast<jsize>(destination.size());
            auto valueCount = env->GetArrayLength(source);
            valueCount = valueCount < maxCount ? valueCount : maxCount;
            std::vector<jint> values(static_cast<size_t>(valueCount));
            env->GetIntArrayRegion(source, 0, valueCount, values.data());
            for (jsize i = 0; i < valueCount; ++i) {
                destination[static_cast<size_t>(i)] = static_cast<ImU32>(values[static_cast<size_t>(i)]);
            }
        }
     JNIEXPORT jlong JNICALL Java_imgui_extension_texteditor_TextEditor_nCreate(JNIEnv* env, jobject object) {


//@line:56

        return (uintptr_t)(new TextEditor());
    

}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nSetTabSize(JNIEnv* env, jobject object, jint value) {


//@line:64

        THIS->SetTabSize(value);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nSetLanguage(JNIEnv* env, jobject object, jlong languagePtr) {


//@line:72

        THIS->SetLanguage(reinterpret_cast<const TextEditor::Language*>(languagePtr));
    

}

JNIEXPORT jint JNICALL Java_imgui_extension_texteditor_TextEditor_nGetTabSize(JNIEnv* env, jobject object) {


//@line:80

        return THIS->GetTabSize();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nSetInsertSpacesOnTabs(JNIEnv* env, jobject object, jboolean value) {


//@line:88

        THIS->SetInsertSpacesOnTabs(value);
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_texteditor_TextEditor_nIsInsertSpacesOnTabs(JNIEnv* env, jobject object) {


//@line:96

        return THIS->IsInsertSpacesOnTabs();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nSetLineSpacing(JNIEnv* env, jobject object, jfloat value) {


//@line:104

        THIS->SetLineSpacing(value);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_texteditor_TextEditor_nGetLineSpacing(JNIEnv* env, jobject object) {


//@line:112

        return THIS->GetLineSpacing();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nSetReadOnlyEnabled(JNIEnv* env, jobject object, jboolean value) {


//@line:120

        THIS->SetReadOnlyEnabled(value);
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_texteditor_TextEditor_nIsReadOnlyEnabled(JNIEnv* env, jobject object) {


//@line:128

        return THIS->IsReadOnlyEnabled();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nSetAutoIndentEnabled(JNIEnv* env, jobject object, jboolean value) {


//@line:136

        THIS->SetAutoIndentEnabled(value);
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_texteditor_TextEditor_nIsAutoIndentEnabled(JNIEnv* env, jobject object) {


//@line:144

        return THIS->IsAutoIndentEnabled();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nSetShowWhitespacesEnabled(JNIEnv* env, jobject object, jboolean value) {


//@line:152

        THIS->SetShowWhitespacesEnabled(value);
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_texteditor_TextEditor_nIsShowWhitespacesEnabled(JNIEnv* env, jobject object) {


//@line:160

        return THIS->IsShowWhitespacesEnabled();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nSetShowSpacesEnabled(JNIEnv* env, jobject object, jboolean value) {


//@line:168

        THIS->SetShowSpacesEnabled(value);
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_texteditor_TextEditor_nIsShowSpacesEnabled(JNIEnv* env, jobject object) {


//@line:176

        return THIS->IsShowSpacesEnabled();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nSetShowTabsEnabled(JNIEnv* env, jobject object, jboolean value) {


//@line:184

        THIS->SetShowTabsEnabled(value);
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_texteditor_TextEditor_nIsShowTabsEnabled(JNIEnv* env, jobject object) {


//@line:192

        return THIS->IsShowTabsEnabled();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nSetShowLineNumbersEnabled(JNIEnv* env, jobject object, jboolean value) {


//@line:200

        THIS->SetShowLineNumbersEnabled(value);
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_texteditor_TextEditor_nIsShowLineNumbersEnabled(JNIEnv* env, jobject object) {


//@line:208

        return THIS->IsShowLineNumbersEnabled();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nSetShowScrollbarMiniMapEnabled(JNIEnv* env, jobject object, jboolean value) {


//@line:216

        THIS->SetShowScrollbarMiniMapEnabled(value);
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_texteditor_TextEditor_nIsShowScrollbarMiniMapEnabled(JNIEnv* env, jobject object) {


//@line:224

        return THIS->IsShowScrollbarMiniMapEnabled();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nSetShowPanScrollIndicatorEnabled(JNIEnv* env, jobject object, jboolean value) {


//@line:232

        THIS->SetShowPanScrollIndicatorEnabled(value);
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_texteditor_TextEditor_nIsShowPanScrollIndicatorEnabled(JNIEnv* env, jobject object) {


//@line:240

        return THIS->IsShowPanScrollIndicatorEnabled();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nSetShowMatchingBrackets(JNIEnv* env, jobject object, jboolean value) {


//@line:248

        THIS->SetShowMatchingBrackets(value);
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_texteditor_TextEditor_nIsShowingMatchingBrackets(JNIEnv* env, jobject object) {


//@line:256

        return THIS->IsShowingMatchingBrackets();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nSetCompletePairedGlyphs(JNIEnv* env, jobject object, jboolean value) {


//@line:264

        THIS->SetCompletePairedGlyphs(value);
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_texteditor_TextEditor_nIsCompletingPairedGlyphs(JNIEnv* env, jobject object) {


//@line:272

        return THIS->IsCompletingPairedGlyphs();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nSetOverwriteEnabled(JNIEnv* env, jobject object, jboolean value) {


//@line:280

        THIS->SetOverwriteEnabled(value);
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_texteditor_TextEditor_nIsOverwriteEnabled(JNIEnv* env, jobject object) {


//@line:288

        return THIS->IsOverwriteEnabled();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nSetMiddleMousePanMode(JNIEnv* env, jobject object) {


//@line:296

        THIS->SetMiddleMousePanMode();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nSetMiddleMouseScrollMode(JNIEnv* env, jobject object) {


//@line:304

        THIS->SetMiddleMouseScrollMode();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_texteditor_TextEditor_nIsMiddleMousePanMode(JNIEnv* env, jobject object) {


//@line:312

        return THIS->IsMiddleMousePanMode();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nSetText(JNIEnv* env, jobject object, jstring obj_text) {

//@line:320

        auto text = obj_text == NULL ? NULL : (char*)env->GetStringUTFChars(obj_text, JNI_FALSE);
        THIS->SetText(text);
        if (text != NULL) env->ReleaseStringUTFChars(obj_text, text);
    
}

JNIEXPORT jstring JNICALL Java_imgui_extension_texteditor_TextEditor_nGetText(JNIEnv* env, jobject object) {


//@line:330

        return env->NewStringUTF(THIS->GetText().c_str());
    

}

JNIEXPORT jstring JNICALL Java_imgui_extension_texteditor_TextEditor_nGetCursorText(JNIEnv* env, jobject object, jlong cursor) {


//@line:338

        return env->NewStringUTF(THIS->GetCursorText(cursor).c_str());
    

}

JNIEXPORT jstring JNICALL Java_imgui_extension_texteditor_TextEditor_nGetLineText(JNIEnv* env, jobject object, jint line) {


//@line:346

        return env->NewStringUTF(THIS->GetLineText(line).c_str());
    

}

JNIEXPORT jstring JNICALL Java_imgui_extension_texteditor_TextEditor_nGetSectionText(JNIEnv* env, jobject object, jint startLine, jint startColumn, jint endLine, jint endColumn) {


//@line:354

        return env->NewStringUTF(THIS->GetSectionText(startLine, startColumn, endLine, endColumn).c_str());
    

}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nReplaceSectionText(JNIEnv* env, jobject object, jint startLine, jint startColumn, jint endLine, jint endColumn, jstring obj_text) {

//@line:362

        auto text = obj_text == NULL ? NULL : (char*)env->GetStringUTFChars(obj_text, JNI_FALSE);
        THIS->ReplaceSectionText(startLine, startColumn, endLine, endColumn, text);
        if (text != NULL) env->ReleaseStringUTFChars(obj_text, text);
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_texteditor_TextEditor_nIsEmpty(JNIEnv* env, jobject object) {


//@line:376

        return THIS->IsEmpty();
    

}

JNIEXPORT jint JNICALL Java_imgui_extension_texteditor_TextEditor_nGetLineCount(JNIEnv* env, jobject object) {


//@line:384

        return THIS->GetLineCount();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nRender__Ljava_lang_String_2(JNIEnv* env, jobject object, jstring obj_title) {

//@line:408

        auto title = obj_title == NULL ? NULL : (char*)env->GetStringUTFChars(obj_title, JNI_FALSE);
        THIS->Render(title);
        if (title != NULL) env->ReleaseStringUTFChars(obj_title, title);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nRender__Ljava_lang_String_2FF(JNIEnv* env, jobject object, jstring obj_title, jfloat sizeX, jfloat sizeY) {

//@line:414

        auto title = obj_title == NULL ? NULL : (char*)env->GetStringUTFChars(obj_title, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        THIS->Render(title, size);
        if (title != NULL) env->ReleaseStringUTFChars(obj_title, title);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nRender__Ljava_lang_String_2FFZ(JNIEnv* env, jobject object, jstring obj_title, jfloat sizeX, jfloat sizeY, jboolean border) {

//@line:421

        auto title = obj_title == NULL ? NULL : (char*)env->GetStringUTFChars(obj_title, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        THIS->Render(title, size, border);
        if (title != NULL) env->ReleaseStringUTFChars(obj_title, title);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nSetFocus(JNIEnv* env, jobject object) {


//@line:436

        THIS->SetFocus();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nCut(JNIEnv* env, jobject object) {


//@line:444

        THIS->Cut();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nCopy(JNIEnv* env, jobject object) {


//@line:452

        THIS->Copy();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nPaste(JNIEnv* env, jobject object) {


//@line:460

        THIS->Paste();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nUndo(JNIEnv* env, jobject object) {


//@line:468

        THIS->Undo();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nRedo(JNIEnv* env, jobject object) {


//@line:476

        THIS->Redo();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_texteditor_TextEditor_nCanUndo(JNIEnv* env, jobject object) {


//@line:484

        return THIS->CanUndo();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_texteditor_TextEditor_nCanRedo(JNIEnv* env, jobject object) {


//@line:492

        return THIS->CanRedo();
    

}

JNIEXPORT jlong JNICALL Java_imgui_extension_texteditor_TextEditor_nGetUndoIndex(JNIEnv* env, jobject object) {


//@line:500

        return THIS->GetUndoIndex();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nSetCursor(JNIEnv* env, jobject object, jint line, jint column) {


//@line:508

        THIS->SetCursor(line, column);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nSelectAll(JNIEnv* env, jobject object) {


//@line:516

        THIS->SelectAll();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nSelectLine(JNIEnv* env, jobject object, jint line) {


//@line:524

        THIS->SelectLine(line);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nSelectLines(JNIEnv* env, jobject object, jint start, jint end) {


//@line:532

        THIS->SelectLines(start, end);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nSelectRegion(JNIEnv* env, jobject object, jint startLine, jint startColumn, jint endLine, jint endColumn) {


//@line:540

        THIS->SelectRegion(startLine, startColumn, endLine, endColumn);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nSelectToBrackets__(JNIEnv* env, jobject object) {


//@line:552

        THIS->SelectToBrackets();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nSelectToBrackets__Z(JNIEnv* env, jobject object, jboolean includeBrackets) {


//@line:556

        THIS->SelectToBrackets(includeBrackets);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nGrowSelectionsToCurlyBrackets(JNIEnv* env, jobject object) {


//@line:564

        THIS->GrowSelectionsToCurlyBrackets();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nShrinkSelectionsToCurlyBrackets(JNIEnv* env, jobject object) {


//@line:572

        THIS->ShrinkSelectionsToCurlyBrackets();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nAddNextOccurrence(JNIEnv* env, jobject object) {


//@line:580

        THIS->AddNextOccurrence();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nSelectAllOccurrences(JNIEnv* env, jobject object) {


//@line:588

        THIS->SelectAllOccurrences();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_texteditor_TextEditor_nAnyCursorHasSelection(JNIEnv* env, jobject object) {


//@line:596

        return THIS->AnyCursorHasSelection();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_texteditor_TextEditor_nAllCursorsHaveSelection(JNIEnv* env, jobject object) {


//@line:604

        return THIS->AllCursorsHaveSelection();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_texteditor_TextEditor_nCurrentCursorHasSelection(JNIEnv* env, jobject object) {


//@line:612

        return THIS->CurrentCursorHasSelection();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nClearCursors(JNIEnv* env, jobject object) {


//@line:620

        THIS->ClearCursors();
    

}

JNIEXPORT jlong JNICALL Java_imgui_extension_texteditor_TextEditor_nGetNumberOfCursors(JNIEnv* env, jobject object) {


//@line:628

        return THIS->GetNumberOfCursors();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nGetMainCursorPosition(JNIEnv* env, jobject object, jobject dst) {


//@line:642

        Jni::TextEditorCursorPositionCpy(env, THIS->GetMainCursorPosition(), dst);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nGetCurrentCursorPosition(JNIEnv* env, jobject object, jobject dst) {


//@line:656

        Jni::TextEditorCursorPositionCpy(env, THIS->GetCurrentCursorPosition(), dst);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nGetCursorPosition(JNIEnv* env, jobject object, jobject dst, jlong cursor) {


//@line:670

        Jni::TextEditorCursorPositionCpy(env, THIS->GetCursorPosition(cursor), dst);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nGetCursorSelection(JNIEnv* env, jobject object, jobject dst, jlong cursor) {


//@line:684

        Jni::TextEditorCursorSelectionCpy(env, THIS->GetCursorSelection(cursor), dst);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nGetMainCursorSelection(JNIEnv* env, jobject object, jobject dst) {


//@line:698

        Jni::TextEditorCursorSelectionCpy(env, THIS->GetMainCursorSelection(), dst);
    

}

JNIEXPORT jstring JNICALL Java_imgui_extension_texteditor_TextEditor_nGetWordAtScreenPos(JNIEnv* env, jobject object, jfloat screenPosX, jfloat screenPosY) {

//@line:710

        ImVec2 screenPos = ImVec2(screenPosX, screenPosY);
        auto _result = env->NewStringUTF(THIS->GetWordAtScreenPos(screenPos).c_str());
        return _result;
    
}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nScrollToLine(JNIEnv* env, jobject object, jint line, jint alignment) {


//@line:720

        THIS->ScrollToLine(line, static_cast<TextEditor::Scroll>(alignment));
    

}

JNIEXPORT jint JNICALL Java_imgui_extension_texteditor_TextEditor_nGetFirstVisibleLine(JNIEnv* env, jobject object) {


//@line:732

        return THIS->GetFirstVisibleLine();
    

}

JNIEXPORT jint JNICALL Java_imgui_extension_texteditor_TextEditor_nGetLastVisibleLine(JNIEnv* env, jobject object) {


//@line:740

        return THIS->GetLastVisibleLine();
    

}

JNIEXPORT jint JNICALL Java_imgui_extension_texteditor_TextEditor_nGetFirstVisibleColumn(JNIEnv* env, jobject object) {


//@line:748

        return THIS->GetFirstVisibleColumn();
    

}

JNIEXPORT jint JNICALL Java_imgui_extension_texteditor_TextEditor_nGetLastVisibleColumn(JNIEnv* env, jobject object) {


//@line:756

        return THIS->GetLastVisibleColumn();
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_texteditor_TextEditor_nGetLineHeight(JNIEnv* env, jobject object) {


//@line:764

        return THIS->GetLineHeight();
    

}

JNIEXPORT jfloat JNICALL Java_imgui_extension_texteditor_TextEditor_nGetGlyphWidth(JNIEnv* env, jobject object) {


//@line:772

        return THIS->GetGlyphWidth();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nSelectFirstOccurrenceOf__Ljava_lang_String_2(JNIEnv* env, jobject object, jstring obj_text) {

//@line:788

        auto text = obj_text == NULL ? NULL : (char*)env->GetStringUTFChars(obj_text, JNI_FALSE);
        THIS->SelectFirstOccurrenceOf(text);
        if (text != NULL) env->ReleaseStringUTFChars(obj_text, text);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nSelectFirstOccurrenceOf__Ljava_lang_String_2Z(JNIEnv* env, jobject object, jstring obj_text, jboolean caseSensitive) {

//@line:794

        auto text = obj_text == NULL ? NULL : (char*)env->GetStringUTFChars(obj_text, JNI_FALSE);
        THIS->SelectFirstOccurrenceOf(text, caseSensitive);
        if (text != NULL) env->ReleaseStringUTFChars(obj_text, text);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nSelectFirstOccurrenceOf__Ljava_lang_String_2ZZ(JNIEnv* env, jobject object, jstring obj_text, jboolean caseSensitive, jboolean wholeWord) {

//@line:800

        auto text = obj_text == NULL ? NULL : (char*)env->GetStringUTFChars(obj_text, JNI_FALSE);
        THIS->SelectFirstOccurrenceOf(text, caseSensitive, wholeWord);
        if (text != NULL) env->ReleaseStringUTFChars(obj_text, text);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nSelectNextOccurrenceOf__Ljava_lang_String_2(JNIEnv* env, jobject object, jstring obj_text) {

//@line:818

        auto text = obj_text == NULL ? NULL : (char*)env->GetStringUTFChars(obj_text, JNI_FALSE);
        THIS->SelectNextOccurrenceOf(text);
        if (text != NULL) env->ReleaseStringUTFChars(obj_text, text);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nSelectNextOccurrenceOf__Ljava_lang_String_2Z(JNIEnv* env, jobject object, jstring obj_text, jboolean caseSensitive) {

//@line:824

        auto text = obj_text == NULL ? NULL : (char*)env->GetStringUTFChars(obj_text, JNI_FALSE);
        THIS->SelectNextOccurrenceOf(text, caseSensitive);
        if (text != NULL) env->ReleaseStringUTFChars(obj_text, text);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nSelectNextOccurrenceOf__Ljava_lang_String_2ZZ(JNIEnv* env, jobject object, jstring obj_text, jboolean caseSensitive, jboolean wholeWord) {

//@line:830

        auto text = obj_text == NULL ? NULL : (char*)env->GetStringUTFChars(obj_text, JNI_FALSE);
        THIS->SelectNextOccurrenceOf(text, caseSensitive, wholeWord);
        if (text != NULL) env->ReleaseStringUTFChars(obj_text, text);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nSelectAllOccurrencesOf__Ljava_lang_String_2(JNIEnv* env, jobject object, jstring obj_text) {

//@line:848

        auto text = obj_text == NULL ? NULL : (char*)env->GetStringUTFChars(obj_text, JNI_FALSE);
        THIS->SelectAllOccurrencesOf(text);
        if (text != NULL) env->ReleaseStringUTFChars(obj_text, text);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nSelectAllOccurrencesOf__Ljava_lang_String_2Z(JNIEnv* env, jobject object, jstring obj_text, jboolean caseSensitive) {

//@line:854

        auto text = obj_text == NULL ? NULL : (char*)env->GetStringUTFChars(obj_text, JNI_FALSE);
        THIS->SelectAllOccurrencesOf(text, caseSensitive);
        if (text != NULL) env->ReleaseStringUTFChars(obj_text, text);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nSelectAllOccurrencesOf__Ljava_lang_String_2ZZ(JNIEnv* env, jobject object, jstring obj_text, jboolean caseSensitive, jboolean wholeWord) {

//@line:860

        auto text = obj_text == NULL ? NULL : (char*)env->GetStringUTFChars(obj_text, JNI_FALSE);
        THIS->SelectAllOccurrencesOf(text, caseSensitive, wholeWord);
        if (text != NULL) env->ReleaseStringUTFChars(obj_text, text);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nReplaceTextInCurrentCursor(JNIEnv* env, jobject object, jstring obj_text) {

//@line:870

        auto text = obj_text == NULL ? NULL : (char*)env->GetStringUTFChars(obj_text, JNI_FALSE);
        THIS->ReplaceTextInCurrentCursor(text);
        if (text != NULL) env->ReleaseStringUTFChars(obj_text, text);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nReplaceTextInAllCursors(JNIEnv* env, jobject object, jstring obj_text) {

//@line:880

        auto text = obj_text == NULL ? NULL : (char*)env->GetStringUTFChars(obj_text, JNI_FALSE);
        THIS->ReplaceTextInAllCursors(text);
        if (text != NULL) env->ReleaseStringUTFChars(obj_text, text);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nOpenFindReplaceWindow(JNIEnv* env, jobject object) {


//@line:890

        THIS->OpenFindReplaceWindow();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nCloseFindReplaceWindow(JNIEnv* env, jobject object) {


//@line:898

        THIS->CloseFindReplaceWindow();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nSetFindButtonLabel(JNIEnv* env, jobject object, jstring obj_label) {

//@line:906

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        THIS->SetFindButtonLabel(label);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nSetFindAllButtonLabel(JNIEnv* env, jobject object, jstring obj_label) {

//@line:916

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        THIS->SetFindAllButtonLabel(label);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nSetReplaceButtonLabel(JNIEnv* env, jobject object, jstring obj_label) {

//@line:926

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        THIS->SetReplaceButtonLabel(label);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nSetReplaceAllButtonLabel(JNIEnv* env, jobject object, jstring obj_label) {

//@line:936

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        THIS->SetReplaceAllButtonLabel(label);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
    
}

JNIEXPORT jboolean JNICALL Java_imgui_extension_texteditor_TextEditor_nHasFindString(JNIEnv* env, jobject object) {


//@line:946

        return THIS->HasFindString();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nFindNext(JNIEnv* env, jobject object) {


//@line:954

        THIS->FindNext();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nFindAll(JNIEnv* env, jobject object) {


//@line:962

        THIS->FindAll();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nAddMarker(JNIEnv* env, jobject object, jint line, jint lineNumberColor, jint textColor, jstring obj_lineNumberTooltip, jstring obj_textTooltip) {

//@line:970

        auto lineNumberTooltip = obj_lineNumberTooltip == NULL ? NULL : (char*)env->GetStringUTFChars(obj_lineNumberTooltip, JNI_FALSE);
        auto textTooltip = obj_textTooltip == NULL ? NULL : (char*)env->GetStringUTFChars(obj_textTooltip, JNI_FALSE);
        THIS->AddMarker(line, lineNumberColor, textColor, lineNumberTooltip, textTooltip);
        if (lineNumberTooltip != NULL) env->ReleaseStringUTFChars(obj_lineNumberTooltip, lineNumberTooltip);
        if (textTooltip != NULL) env->ReleaseStringUTFChars(obj_textTooltip, textTooltip);
    
}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nClearMarkers(JNIEnv* env, jobject object) {


//@line:990

        THIS->ClearMarkers();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_texteditor_TextEditor_nHasMarkers(JNIEnv* env, jobject object) {


//@line:998

        return THIS->HasMarkers();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nIndentLines(JNIEnv* env, jobject object) {


//@line:1006

        THIS->IndentLines();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nDeindentLines(JNIEnv* env, jobject object) {


//@line:1014

        THIS->DeindentLines();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nMoveUpLines(JNIEnv* env, jobject object) {


//@line:1022

        THIS->MoveUpLines();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nMoveDownLines(JNIEnv* env, jobject object) {


//@line:1030

        THIS->MoveDownLines();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nToggleComments(JNIEnv* env, jobject object) {


//@line:1038

        THIS->ToggleComments();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nSelectionToLowerCase(JNIEnv* env, jobject object) {


//@line:1046

        THIS->SelectionToLowerCase();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nSelectionToUpperCase(JNIEnv* env, jobject object) {


//@line:1054

        THIS->SelectionToUpperCase();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nStripTrailingWhitespaces(JNIEnv* env, jobject object) {


//@line:1062

        THIS->StripTrailingWhitespaces();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nTabsToSpaces(JNIEnv* env, jobject object) {


//@line:1070

        THIS->TabsToSpaces();
    

}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nSpacesToTabs(JNIEnv* env, jobject object) {


//@line:1078

        THIS->SpacesToTabs();
    

}

JNIEXPORT jintArray JNICALL Java_imgui_extension_texteditor_TextEditor_getPalette(JNIEnv* env, jobject object) {


//@line:1082

        return TextEditorPaletteToArray(env, THIS->GetPalette());
    

}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nSetPalette(JNIEnv* env, jobject object, jintArray obj_palette) {
	int* palette = (int*)env->GetPrimitiveArrayCritical(obj_palette, 0);


//@line:1090

        auto newPalette = THIS->GetPalette();
        TextEditorArrayToPalette(env, obj_palette, newPalette);
        THIS->SetPalette(newPalette);
    
	env->ReleasePrimitiveArrayCritical(obj_palette, palette, 0);

}

JNIEXPORT jintArray JNICALL Java_imgui_extension_texteditor_TextEditor_getDefaultPalette(JNIEnv* env, jclass clazz) {


//@line:1096

        return TextEditorPaletteToArray(env, TextEditor::GetDefaultPalette());
    

}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nSetDefaultPalette(JNIEnv* env, jclass clazz, jintArray obj_palette) {
	int* palette = (int*)env->GetPrimitiveArrayCritical(obj_palette, 0);


//@line:1104

        auto newPalette = TextEditor::GetDefaultPalette();
        TextEditorArrayToPalette(env, obj_palette, newPalette);
        TextEditor::SetDefaultPalette(newPalette);
    
	env->ReleasePrimitiveArrayCritical(obj_palette, palette, 0);

}

JNIEXPORT jintArray JNICALL Java_imgui_extension_texteditor_TextEditor_getDarkPalette(JNIEnv* env, jclass clazz) {


//@line:1110

        return TextEditorPaletteToArray(env, TextEditor::GetDarkPalette());
    

}

JNIEXPORT jintArray JNICALL Java_imgui_extension_texteditor_TextEditor_getLightPalette(JNIEnv* env, jclass clazz) {


//@line:1114

        return TextEditorPaletteToArray(env, TextEditor::GetLightPalette());
    

}

JNIEXPORT jint JNICALL Java_imgui_extension_texteditor_TextEditor_getPaletteColor(JNIEnv* env, jobject object, jint colorIndex) {


//@line:1126

        const auto& palette = THIS->GetPalette();
        const auto index = static_cast<size_t>(colorIndex);
        if (index >= palette.size()) {
            jclass exClass = env->FindClass("java/lang/ArrayIndexOutOfBoundsException");
            env->ThrowNew(exClass, "Invalid TextEditor color index");
            return 0;
        }
        return static_cast<jint>(palette[index]);
    

}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_setPaletteColor(JNIEnv* env, jobject object, jint colorIndex, jint value) {


//@line:1141

        auto palette = THIS->GetPalette();
        const auto index = static_cast<size_t>(colorIndex);
        if (index >= palette.size()) {
            jclass exClass = env->FindClass("java/lang/ArrayIndexOutOfBoundsException");
            env->ThrowNew(exClass, "Invalid TextEditor color index");
            return;
        }
        palette[index] = static_cast<ImU32>(value);
        THIS->SetPalette(palette);
    

}

JNIEXPORT jlong JNICALL Java_imgui_extension_texteditor_TextEditor_nGetLanguage(JNIEnv* env, jobject object) {


//@line:1161

        return (uintptr_t)THIS->GetLanguage();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_extension_texteditor_TextEditor_nHasLanguage(JNIEnv* env, jobject object) {


//@line:1169

        return THIS->HasLanguage();
    

}

JNIEXPORT jstring JNICALL Java_imgui_extension_texteditor_TextEditor_nGetLanguageName(JNIEnv* env, jobject object) {


//@line:1177

        return env->NewStringUTF(THIS->GetLanguageName().c_str());
    

}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nSetImGuiContext(JNIEnv* env, jclass clazz, jlong ctx) {


//@line:1185

        TextEditor::SetImGuiContext(reinterpret_cast<ImGuiContext*>(ctx));
    

}

JNIEXPORT void JNICALL Java_imgui_extension_texteditor_TextEditor_nSetUserData(JNIEnv* env, jobject object, jint line, jlong data) {


//@line:1193

        THIS->SetUserData(line, reinterpret_cast<void*>(data));
    

}

JNIEXPORT jlong JNICALL Java_imgui_extension_texteditor_TextEditor_nGetUserData(JNIEnv* env, jobject object, jint line) {


//@line:1201

        return reinterpret_cast<jlong>(THIS->GetUserData(line));
    

}


//@line:1205

        #undef THIS
     