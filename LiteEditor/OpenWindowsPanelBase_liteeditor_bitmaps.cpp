//
// This file was automatically generated by wxrc, do not edit by hand.
//

#include <wx/wxprec.h>

#ifdef __BORLANDC__
    #pragma hdrstop
#endif

#include <wx/filesys.h>
#include <wx/fs_mem.h>
#include <wx/xrc/xmlres.h>
#include <wx/xrc/xh_all.h>

#if wxCHECK_VERSION(2,8,5) && wxABI_VERSION >= 20805
    #define XRC_ADD_FILE(name, data, size, mime) \
        wxMemoryFSHandler::AddFileWithMimeType(name, data, size, mime)
#else
    #define XRC_ADD_FILE(name, data, size, mime) \
        wxMemoryFSHandler::AddFile(name, data, size)
#endif

static size_t xml_res_size_0 = 383;
static unsigned char xml_res_file_0[] = {
137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,16,0,0,0,16,8,6,0,0,
0,31,243,255,97,0,0,0,6,98,75,71,68,0,255,0,255,0,255,160,189,167,147,0,
0,0,9,112,72,89,115,0,0,13,215,0,0,13,215,1,66,40,155,120,0,0,0,7,116,73,
77,69,7,222,12,18,6,52,38,182,170,175,82,0,0,1,12,73,68,65,84,56,203,237,
210,77,43,69,113,16,199,241,207,189,137,141,13,59,161,46,43,69,217,73,137,
21,43,165,80,30,86,118,94,129,66,148,181,164,212,93,200,43,16,82,94,0,59,
41,143,165,172,36,162,172,208,85,119,167,92,54,115,234,116,58,123,27,83,
83,255,102,154,249,125,255,51,195,191,165,173,128,50,222,112,140,214,136,
143,226,17,63,25,127,194,88,186,193,4,190,177,136,7,236,70,252,5,7,24,206,
248,30,94,139,41,245,53,28,98,29,43,152,66,119,228,107,104,10,127,15,194,
143,32,1,147,161,222,131,18,138,184,195,121,208,36,216,21,116,4,122,13,
179,137,250,45,246,81,135,123,244,97,58,26,52,96,53,10,198,209,30,234,59,
121,234,141,241,191,206,160,184,196,73,204,97,43,4,78,131,102,27,45,133,
80,121,198,76,40,36,115,57,195,64,12,235,2,131,24,194,124,228,251,99,19,
170,88,198,92,102,77,71,232,138,247,66,206,218,151,240,9,27,169,162,114,
36,71,240,21,177,106,206,13,36,190,89,136,130,94,212,227,42,181,154,18,
218,112,19,36,205,25,130,10,174,255,254,254,127,1,81,71,79,231,198,102,
199,75,0,0,0,0,73,69,78,68,174,66,96,130};

static size_t xml_res_size_1 = 206;
static unsigned char xml_res_file_1[] = {
60,63,120,109,108,32,118,101,114,115,105,111,110,61,34,49,46,48,34,32,101,
110,99,111,100,105,110,103,61,34,85,84,70,45,56,34,63,62,10,60,114,101,
115,111,117,114,99,101,32,120,109,108,110,115,61,34,104,116,116,112,58,
47,47,119,119,119,46,119,120,119,105,110,100,111,119,115,46,111,114,103,
47,119,120,120,114,99,34,62,10,32,32,60,111,98,106,101,99,116,32,99,108,
97,115,115,61,34,119,120,66,105,116,109,97,112,34,32,110,97,109,101,61,
34,115,111,114,116,34,62,79,112,101,110,87,105,110,100,111,119,115,80,97,
110,101,108,66,97,115,101,95,108,105,116,101,101,100,105,116,111,114,95,
98,105,116,109,97,112,115,46,99,112,112,36,114,101,115,95,115,111,114,116,
46,112,110,103,60,47,111,98,106,101,99,116,62,10,60,47,114,101,115,111,
117,114,99,101,62,10};

void wxCrafterKq0OgDInitBitmapResources()
{

    // Check for memory FS. If not present, load the handler:
    {
        wxMemoryFSHandler::AddFile(wxT("XRC_resource/dummy_file"), wxT("dummy one"));
        wxFileSystem fsys;
        wxFSFile *f = fsys.OpenFile(wxT("memory:XRC_resource/dummy_file"));
        wxMemoryFSHandler::RemoveFile(wxT("XRC_resource/dummy_file"));
        if (f) delete f;
        else wxFileSystem::AddHandler(new wxMemoryFSHandlerBase);
    }

    XRC_ADD_FILE(wxT("XRC_resource/OpenWindowsPanelBase_liteeditor_bitmaps.cpp$res_sort.png"), xml_res_file_0, xml_res_size_0, wxT("image/png"));
    XRC_ADD_FILE(wxT("XRC_resource/OpenWindowsPanelBase_liteeditor_bitmaps.cpp$C__src_codelite_LiteEditor_OpenWindowsPanelBase_liteeditor_bitmaps.xrc"), xml_res_file_1, xml_res_size_1, wxT("text/xml"));
    wxXmlResource::Get()->Load(wxT("memory:XRC_resource/OpenWindowsPanelBase_liteeditor_bitmaps.cpp$C__src_codelite_LiteEditor_OpenWindowsPanelBase_liteeditor_bitmaps.xrc"));
}
