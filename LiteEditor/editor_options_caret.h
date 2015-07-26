//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: editor_options_caret.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#ifndef CODELITE_LITEEDITOR_EDITOR_OPTIONS_CARET_BASE_CLASSES_H
#define CODELITE_LITEEDITOR_EDITOR_OPTIONS_CARET_BASE_CLASSES_H

#include <wx/settings.h>
#include <wx/xrc/xmlres.h>
#include <wx/xrc/xh_bmp.h>
#include <wx/panel.h>
#include <wx/artprov.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/checkbox.h>
#if wxVERSION_NUMBER >= 2900
#include <wx/persist.h>
#include <wx/persist/toplevel.h>
#include <wx/persist/bookctrl.h>
#include <wx/persist/treebook.h>
#endif

class EditorSettingsCaretBase : public wxPanel
{
protected:
    wxStaticText* m_staticText1;
    wxTextCtrl* m_spinCtrlBlinkPeriod;
    wxStaticText* m_staticText3;
    wxTextCtrl* m_spinCtrlCaretWidth;
    wxCheckBox* m_checkBoxScrollBeyondLastLine;
    wxCheckBox* m_checkBoxAdjustScrollbarSize;
    wxCheckBox* m_checkBoxCaretOnVirtualSpace;
    wxCheckBox* m_checkBoxCaretUseCamelCase;

protected:

public:
    wxStaticText* GetStaticText1() { return m_staticText1; }
    wxTextCtrl* GetSpinCtrlBlinkPeriod() { return m_spinCtrlBlinkPeriod; }
    wxStaticText* GetStaticText3() { return m_staticText3; }
    wxTextCtrl* GetSpinCtrlCaretWidth() { return m_spinCtrlCaretWidth; }
    wxCheckBox* GetCheckBoxScrollBeyondLastLine() { return m_checkBoxScrollBeyondLastLine; }
    wxCheckBox* GetCheckBoxAdjustScrollbarSize() { return m_checkBoxAdjustScrollbarSize; }
    wxCheckBox* GetCheckBoxCaretOnVirtualSpace() { return m_checkBoxCaretOnVirtualSpace; }
    wxCheckBox* GetCheckBoxCaretUseCamelCase() { return m_checkBoxCaretUseCamelCase; }
    EditorSettingsCaretBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxTAB_TRAVERSAL);
    virtual ~EditorSettingsCaretBase();
};

#endif
