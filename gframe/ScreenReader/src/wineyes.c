

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.00.0595 */
/* at Fri Sep 06 15:13:18 2013
 */
/* Compiler settings for ..\..\wineyes.IDL:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0595 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, LIBID_WindowEyes,0x9AA48166,0x4D1C,0x4C57,0xB5,0x43,0x4B,0x59,0x6C,0x5E,0x1C,0x2F);


MIDL_DEFINE_GUID(IID, IID__Application,0x5E437833,0xECC1,0x46EE,0xAA,0xD6,0x0D,0xE9,0x13,0x81,0x1D,0x3E);


MIDL_DEFINE_GUID(IID, IID__Window,0x138E1F63,0x840E,0x4E85,0x89,0x8E,0x14,0xE1,0x98,0x42,0xC7,0x54);


MIDL_DEFINE_GUID(IID, IID_WindowRectangle,0xF0C26627,0x1E1E,0x4C1B,0x80,0x86,0xA2,0x6B,0xFF,0x12,0x90,0xF6);


MIDL_DEFINE_GUID(IID, IID_ScreenRectangle,0xD75594B7,0x6DF2,0x4FB6,0xA0,0x01,0x28,0xE9,0x3E,0xFF,0x52,0x0C);


MIDL_DEFINE_GUID(IID, IID_ClientRectangle,0xBC5BEE46,0x5487,0x4DDE,0xAD,0xFD,0xBE,0x27,0x25,0x30,0x7C,0x0B);


MIDL_DEFINE_GUID(IID, IID_ClientPoint,0x38373772,0x1B30,0x4C81,0x90,0xBE,0x12,0xAC,0x16,0x9E,0xCC,0x79);


MIDL_DEFINE_GUID(IID, IID_ScreenPoint,0xEC281A02,0xCAA5,0x4BBF,0xA7,0xD3,0x1E,0xBF,0xFC,0xE7,0x74,0x44);


MIDL_DEFINE_GUID(IID, IID_Accessible,0x1291AFC2,0xAD5A,0x4CC2,0xB7,0x63,0xA4,0x40,0xEC,0x9D,0x8B,0x18);


MIDL_DEFINE_GUID(IID, IID_Accessibles,0x50660384,0xFD5C,0x4D0E,0x9A,0xAF,0x72,0x0C,0xD7,0xB0,0xE2,0x78);


MIDL_DEFINE_GUID(IID, IID_AccessibleRole,0x67C68BDD,0x7CA8,0x4877,0x87,0xF1,0xD1,0x37,0xA3,0x67,0xEB,0x4B);


MIDL_DEFINE_GUID(IID, IID_AccessibleState,0x0CF3CFCE,0x234A,0x4AD7,0xA0,0x12,0xBC,0x1E,0xFA,0xDB,0xAA,0xE0);


MIDL_DEFINE_GUID(IID, IID_WindowPoint,0x71A1DFD7,0xCD71,0x49F6,0x9E,0x46,0x62,0xBA,0xB1,0x0D,0xD8,0xB8);


MIDL_DEFINE_GUID(IID, IID_Windows,0xABF05245,0x9E29,0x49FF,0xB6,0xEB,0x6E,0x85,0x78,0x09,0x95,0x78);


MIDL_DEFINE_GUID(IID, IID_WindowStyle,0x8887EE67,0x8612,0x4174,0x82,0xED,0x48,0xB6,0x53,0x88,0xB6,0xCE);


MIDL_DEFINE_GUID(IID, IID_Desktop,0x991A7510,0x8885,0x4A88,0xB0,0x86,0xD7,0x18,0x34,0xE1,0xA0,0x32);


MIDL_DEFINE_GUID(IID, IID_Process,0x713468F4,0x0BB7,0x4DE2,0xB7,0xAE,0x37,0x3C,0x6A,0xE2,0x94,0x9F);


MIDL_DEFINE_GUID(IID, IID_Version,0xB457E747,0x8F0A,0x44D6,0xB8,0x12,0x48,0xA3,0xE7,0xDA,0x4F,0x81);


MIDL_DEFINE_GUID(IID, IID_Clips,0x539C9C74,0x8FF7,0x4718,0xAC,0x9D,0x8D,0x3F,0x1B,0x8C,0xAF,0x66);


MIDL_DEFINE_GUID(IID, IID_Clip,0xE39DC37D,0x7C07,0x4859,0x94,0xFD,0xA6,0x61,0xB8,0xC1,0xF2,0xAC);


MIDL_DEFINE_GUID(IID, IID_Color,0xE8B9CFBA,0x3E39,0x4EA7,0xBF,0x3E,0x87,0xF5,0x2B,0xD8,0xF2,0xA3);


MIDL_DEFINE_GUID(IID, IID_CharacterOffsets,0x3AD09936,0x1812,0x4F02,0xA4,0x30,0xA2,0x57,0xE9,0xA6,0x8B,0xFC);


MIDL_DEFINE_GUID(IID, IID_SetFile,0x66BE9EB6,0x315D,0x4B0E,0x81,0xA7,0xEC,0x3B,0x04,0xCC,0x0A,0x16);


MIDL_DEFINE_GUID(IID, IID_ScreenSettings,0xE52BE567,0xCCE5,0x4C69,0xAB,0x71,0x2C,0xAA,0x45,0x54,0x59,0xA2);


MIDL_DEFINE_GUID(IID, IID_PunctuationSettings,0xBE2E7D51,0x873F,0x4F95,0x94,0xE9,0x53,0x25,0x66,0x22,0x3B,0x83);


MIDL_DEFINE_GUID(IID, IID_LineFilterSettings,0xAE828844,0x7DD7,0x4FA3,0x9B,0x9A,0x80,0xD1,0x8E,0x24,0x14,0x49);


MIDL_DEFINE_GUID(IID, IID_KeyboardSettings,0x16EC8F0F,0x849A,0x4B7F,0xAF,0xF9,0xB3,0x0F,0xA2,0x2F,0x8F,0x54);


MIDL_DEFINE_GUID(IID, IID_SpecialKeySettings,0xD1870316,0xB206,0x4081,0xB2,0x19,0x52,0x5B,0x33,0x8F,0x5B,0x74);


MIDL_DEFINE_GUID(IID, IID_MouseSettings,0x6B979D0D,0x51A4,0x4495,0x89,0xE9,0x8A,0x22,0x1B,0x47,0x1E,0x10);


MIDL_DEFINE_GUID(IID, IID_MouseSearchAttributesSettings,0x6766D2E3,0x4358,0x4F48,0xA9,0xAA,0x76,0x60,0x94,0xDA,0xC0,0x0D);


MIDL_DEFINE_GUID(IID, IID_GeneralSettings,0x560A43E2,0xCFBC,0x44EE,0x82,0xA1,0x11,0x49,0xEB,0xB9,0x56,0x9F);


MIDL_DEFINE_GUID(IID, IID_Verbosity,0x9534C04C,0x344A,0x4E89,0xB5,0xDD,0x00,0xF6,0xB3,0x4C,0x7E,0x8C);


MIDL_DEFINE_GUID(IID, IID_MenuVerbosity,0xCDF3524C,0x57EF,0x440A,0xB5,0x5E,0x9F,0x53,0x79,0xB2,0x33,0xE9);


MIDL_DEFINE_GUID(IID, IID_ActivatedVerbosity,0x163FA9DA,0x59C4,0x471C,0x9E,0x93,0x90,0x7D,0x44,0x89,0x09,0x0B);


MIDL_DEFINE_GUID(IID, IID_FocusedVerbosity,0xFD82F541,0xE59D,0x4092,0x8A,0x52,0x50,0xE8,0x28,0x9C,0xCF,0x9B);


MIDL_DEFINE_GUID(IID, IID_AttributeChangeVerbosity,0xB55EFF9A,0x8946,0x4ED2,0x8C,0x60,0x3E,0xC6,0x9A,0x85,0x41,0x17);


MIDL_DEFINE_GUID(IID, IID_MiscVerbosity,0x4201F55C,0xA4F1,0x40E7,0x87,0x8D,0x9E,0x7B,0x97,0xBF,0x8E,0xBF);


MIDL_DEFINE_GUID(IID, IID_BrowseModeVerbosity,0x6061A38D,0xDD88,0x484B,0x9D,0x72,0x37,0x2A,0xD1,0xBE,0x73,0xA8);


MIDL_DEFINE_GUID(IID, IID_BrowseModeAccessKeyVerbosity,0x70AFC45C,0x6452,0x46A2,0xA9,0x21,0x56,0x34,0xB2,0x61,0x0A,0xC4);


MIDL_DEFINE_GUID(IID, IID_BrowseModeAcronymVerbosity,0x7200CD64,0x3E31,0x4758,0x8F,0x1E,0x69,0xAC,0x82,0xEF,0xAD,0xCC);


MIDL_DEFINE_GUID(IID, IID_BrowseModeFlashVerbosity,0xA387C9D1,0xD42E,0x4976,0xAC,0xA0,0xD1,0x72,0x0C,0x3D,0x3A,0x79);


MIDL_DEFINE_GUID(IID, IID_BrowseModeFormVerbosity,0x9420D69A,0x3034,0x4284,0x9B,0xAA,0x96,0xB9,0x0E,0x75,0xB4,0x05);


MIDL_DEFINE_GUID(IID, IID_BrowseModeHeadingVerbosity,0xED926AC6,0xD32D,0x44EC,0x8E,0x2C,0x9D,0x9D,0xC3,0x35,0x84,0xCB);


MIDL_DEFINE_GUID(IID, IID_BrowseModeLanguageVerbosity,0xBBC0FAF7,0x050E,0x44A3,0xA1,0xD1,0x1F,0x10,0x7F,0x85,0x7E,0x1D);


MIDL_DEFINE_GUID(IID, IID_BrowseModeLinkVerbosity,0x46B44ECA,0x2291,0x48DC,0xB7,0x9E,0x67,0x6C,0xB1,0x2B,0x54,0x56);


MIDL_DEFINE_GUID(IID, IID_BrowseModeListVerbosity,0xA9D9C347,0xED99,0x4E1D,0x8D,0xD6,0x77,0xF8,0x6F,0xCA,0x48,0xA3);


MIDL_DEFINE_GUID(IID, IID_BrowseModeLongDescVerbosity,0xB53306E3,0x72BB,0x48C3,0x87,0xF2,0xDB,0x1F,0xB5,0xEF,0x1D,0xD8);


MIDL_DEFINE_GUID(IID, IID_BrowseModeMiscVerbosity,0x46D8E757,0xB12B,0x4EC4,0x8F,0x5C,0x0B,0xB4,0x8A,0x70,0x80,0x7E);


MIDL_DEFINE_GUID(IID, IID_BrowseModeNewPageVerbosity,0x0AD0EC69,0x44F3,0x4DF9,0x99,0x56,0x73,0x83,0xF6,0x21,0x01,0xF8);


MIDL_DEFINE_GUID(IID, IID_BrowseModeObjectVerbosity,0x057FEC88,0x70FE,0x448A,0xB3,0xC0,0x9B,0x3F,0xFC,0xCB,0x3C,0xB6);


MIDL_DEFINE_GUID(IID, IID_BrowseModeParagraphVerbosity,0x83D4752A,0x5745,0x4AA9,0x85,0xF7,0xD7,0x07,0x4D,0xCC,0xDA,0xBD);


MIDL_DEFINE_GUID(IID, IID_BrowseModeQuoteVerbosity,0x5353CF70,0x8FFF,0x4DB8,0xBF,0x73,0x5A,0xE5,0x66,0x10,0xA1,0x83);


MIDL_DEFINE_GUID(IID, IID_BrowseModeTableVerbosity,0x37931477,0x81C0,0x473C,0xB5,0xC6,0xD1,0xA0,0xBF,0x56,0x5F,0x1A);


MIDL_DEFINE_GUID(IID, IID_WordVerbosity,0x45F09BBF,0x5811,0x49BE,0xBF,0x38,0xF9,0x7A,0xDB,0xAA,0x7D,0x9E);


MIDL_DEFINE_GUID(IID, IID_WordColumnVerbosity,0xE7F432C2,0x6A0D,0x43BC,0xB1,0x06,0xE5,0x41,0x4C,0x23,0xFF,0x24);


MIDL_DEFINE_GUID(IID, IID_WordFieldVerbosity,0x2113D7CE,0x5269,0x4CBC,0x95,0x83,0xC1,0x84,0x40,0x36,0xE1,0xB6);


MIDL_DEFINE_GUID(IID, IID_WordHeaderFooterVerbosity,0xAF1222C1,0xC085,0x4E87,0xB8,0x36,0x49,0x59,0xFB,0xEB,0x72,0x28);


MIDL_DEFINE_GUID(IID, IID_WordMiscVerbosity,0x85E8A2FB,0x7255,0x46FD,0x84,0xEF,0x5C,0xAF,0xBF,0x45,0x9A,0xEF);


MIDL_DEFINE_GUID(IID, IID_WordPictureObjectVerbosity,0xC1DA88D1,0x913A,0x44EB,0x9B,0xF8,0x19,0x05,0x7C,0xC4,0x7D,0x12);


MIDL_DEFINE_GUID(IID, IID_WordReferenceVerbosity,0x037DFDED,0xC37E,0x44A0,0xAA,0xFE,0xC4,0xA1,0x84,0x46,0x54,0xE6);


MIDL_DEFINE_GUID(IID, IID_WordRevisionVerbosity,0xCEA173DD,0x411A,0x4789,0xAB,0x4B,0x93,0x8F,0x9D,0x92,0x4B,0x7B);


MIDL_DEFINE_GUID(IID, IID_WordSectionVerbosity,0x766C76FB,0x6AA8,0x4C0A,0xB9,0xB1,0x2F,0x94,0x6B,0x4C,0xBC,0x40);


MIDL_DEFINE_GUID(IID, IID_WordSpellingGrammarVerbosity,0x61682996,0xACDE,0x4715,0xAB,0xB5,0xF8,0xDB,0xFD,0x62,0x9B,0x40);


MIDL_DEFINE_GUID(IID, IID_WordTableVerbosity,0x918C0986,0xA398,0x4679,0x83,0x60,0x76,0x8C,0x68,0xE4,0x77,0x33);


MIDL_DEFINE_GUID(IID, IID_ExcelVerbosity,0x45968376,0x3971,0x459D,0xAD,0x10,0x27,0x14,0x9C,0x4C,0x3B,0x7D);


MIDL_DEFINE_GUID(IID, IID_ExcelCellVerbosity,0x7FE654A2,0xB097,0x410E,0x9C,0xAD,0x4A,0xDF,0xAB,0x97,0xD6,0xB0);


MIDL_DEFINE_GUID(IID, IID_ExcelMiscVerbosity,0xC6F3B503,0xD467,0x4B69,0xBF,0x02,0xD2,0xED,0x03,0x5F,0x93,0x50);


MIDL_DEFINE_GUID(IID, IID_ExcelSelectionVerbosity,0xD30EB596,0x6B56,0x496D,0xB0,0xF0,0xDF,0xE9,0x1C,0x75,0x17,0xCF);


MIDL_DEFINE_GUID(IID, IID_ExcelSummaryVerbosity,0x384A3D6D,0x5B6B,0x4229,0x87,0x36,0x97,0x89,0x0F,0xD3,0xCA,0x15);


MIDL_DEFINE_GUID(IID, IID_PowerPointVerbosity,0x41648B9D,0xA0EA,0x47C7,0xB6,0x84,0xF2,0xB8,0x3D,0x8B,0x0B,0x70);


MIDL_DEFINE_GUID(IID, IID_PowerPointSlideVerbosity,0x11A3C83E,0x2A8E,0x43B1,0xA6,0x8A,0x32,0xA6,0xAC,0xF7,0x9A,0x9F);


MIDL_DEFINE_GUID(IID, IID_PowerPointPlaybackVerbosity,0x60E556DC,0x75DF,0x4E41,0xBA,0xD5,0x82,0x5C,0x9E,0xA1,0xB6,0xEA);


MIDL_DEFINE_GUID(IID, IID_MouseVerbosity,0x827DE804,0xEF0C,0x40C1,0x93,0x8C,0x85,0xDE,0x3F,0xE9,0x74,0xF4);


MIDL_DEFINE_GUID(IID, IID_BrailleSettings,0xE2C6826E,0xB450,0x4CF9,0xA2,0x17,0x55,0xB6,0x71,0x49,0x9E,0x7F);


MIDL_DEFINE_GUID(IID, IID_BrailleScrollingOptions,0x9131D53A,0x78D6,0x45EA,0x83,0x1E,0xB9,0xD2,0xB9,0x10,0xDB,0x5C);


MIDL_DEFINE_GUID(IID, IID_BrailleControlInformation,0xD36E82D4,0xE54F,0x44FA,0xBB,0xC5,0xE8,0x07,0xB4,0x28,0x37,0x24);


MIDL_DEFINE_GUID(IID, IID_BrailleControlTypes,0x9FE95569,0x2C11,0x4E4E,0x93,0x5F,0xAA,0xB4,0xC3,0x42,0xD3,0xF5);


MIDL_DEFINE_GUID(IID, IID_BrailleControlType,0x8F452D32,0x49C5,0x427F,0x96,0x68,0x2D,0x77,0xB9,0xA2,0x59,0xB2);


MIDL_DEFINE_GUID(IID, IID_BrailleControlStates,0x79936E4D,0x6993,0x420F,0xB6,0xAB,0x88,0xEC,0x50,0x9B,0x40,0x6F);


MIDL_DEFINE_GUID(IID, IID_BrailleControlState,0xD0F53943,0x43F0,0x4979,0xA3,0x90,0x9C,0xCB,0x7A,0x24,0xDA,0xA1);


MIDL_DEFINE_GUID(IID, IID_BrailleDotPatterns,0x951F1617,0x0998,0x4D72,0xBD,0x0D,0x97,0x6B,0x65,0x99,0x73,0x22);


MIDL_DEFINE_GUID(IID, IID_BrailleTables,0x87657888,0x511D,0x4F43,0xBA,0xC7,0xB1,0x3C,0xD5,0x11,0x31,0xEC);


MIDL_DEFINE_GUID(IID, IID_BrailleTable,0x0A5C485D,0x6719,0x4769,0x9D,0x50,0x8A,0x1E,0x6E,0xB1,0xAD,0x3E);


MIDL_DEFINE_GUID(IID, IID_BrailleTableEntry,0x5692B95A,0xBF10,0x451B,0x8F,0xA8,0x1E,0x49,0xBF,0xE4,0x7F,0xE3);


MIDL_DEFINE_GUID(IID, IID_BrailleOptions,0x28E578E8,0x9600,0x4DAF,0x9B,0xA9,0x6A,0x24,0x19,0x81,0x95,0x7A);


MIDL_DEFINE_GUID(IID, IID_BrailleGraphics,0xD88BA939,0xCD75,0x46D8,0x81,0x14,0x8E,0x65,0xDA,0xB4,0x43,0x57);


MIDL_DEFINE_GUID(IID, IID_UserWindows,0xB1AB92CC,0x3C71,0x4A77,0x8F,0xCF,0x12,0xB3,0xA7,0x1C,0x5B,0x09);


MIDL_DEFINE_GUID(IID, IID_UserWindow,0x5CEF409D,0xBA9F,0x4B8A,0xBE,0xFB,0x7C,0x7A,0x27,0x99,0x75,0x50);


MIDL_DEFINE_GUID(IID, IID_UserWindowCoordinates,0x2A8A2434,0x956D,0x41A0,0x89,0x1C,0x71,0xB3,0xE4,0xFE,0x6E,0xF2);


MIDL_DEFINE_GUID(IID, IID_HyperactiveWindows,0x742B480F,0x5A4E,0x4E2D,0xB5,0x44,0xD2,0x1F,0xBE,0xDE,0x9A,0x1C);


MIDL_DEFINE_GUID(IID, IID_HyperactiveWindow,0x86B2E2DF,0x4987,0x4E18,0x87,0x91,0xE6,0x38,0xBF,0xB7,0x74,0xAE);


MIDL_DEFINE_GUID(IID, IID_HyperactiveWindowCommands,0x7EF5AC30,0x72B1,0x46BB,0xB1,0x6E,0xB7,0x28,0xE8,0x3E,0x7C,0x04);


MIDL_DEFINE_GUID(IID, IID_HyperactiveWindowCommand,0x9BD2BD33,0xDF7E,0x44AC,0x8C,0xF8,0xBB,0xAE,0x0B,0xD4,0x71,0x79);


MIDL_DEFINE_GUID(IID, IID_TriggerSearchAttribute,0x250971B8,0xCB84,0x46F3,0x8D,0x24,0x64,0x17,0x68,0x70,0x7D,0xE6);


MIDL_DEFINE_GUID(IID, IID_HotKeys,0xC8CA7C7F,0xE51D,0x43CD,0x83,0x40,0xFD,0x04,0x0E,0x8D,0xAE,0xC6);


MIDL_DEFINE_GUID(IID, IID_Hotkey,0x72A98026,0xB0FC,0x41BA,0x88,0x35,0xFF,0x3F,0x24,0xA0,0x79,0x87);


MIDL_DEFINE_GUID(IID, IID_CursorKeys,0x193004DD,0x1572,0x4966,0x8A,0x3F,0x67,0x10,0xC5,0x4B,0xE4,0xE3);


MIDL_DEFINE_GUID(IID, IID_CursorKey,0x275E3F64,0xD44A,0x4643,0x97,0xD7,0x5C,0x74,0x13,0x20,0xCA,0xD3);


MIDL_DEFINE_GUID(IID, IID_CursorKeyAction,0xE362FB3E,0x5315,0x4ECC,0x9B,0x81,0xFC,0x82,0x81,0xF6,0x47,0x86);


MIDL_DEFINE_GUID(IID, IID_CharacterDictionary,0x2E3A39F9,0x65DA,0x4B7F,0xBD,0x59,0x9A,0xC8,0x49,0x0F,0x17,0xF2);


MIDL_DEFINE_GUID(IID, IID_CharacterEntry,0x9C333E1B,0x3BDA,0x41DF,0xAA,0xB3,0x56,0xF9,0x01,0xF2,0x6D,0x5E);


MIDL_DEFINE_GUID(IID, IID_ColorDictionary,0xFADF1AF7,0x3AC3,0x4E41,0x8F,0x34,0xB0,0x52,0x8C,0xED,0x5D,0x0A);


MIDL_DEFINE_GUID(IID, IID_ColorEntry,0x2853890E,0x9D0C,0x4368,0x8E,0x79,0xF9,0xD7,0xE8,0x8F,0x86,0x04);


MIDL_DEFINE_GUID(IID, IID_ExceptionDictionary,0x7569E232,0x5C97,0x4CE8,0xA4,0x32,0x4A,0x54,0x9E,0x77,0xA1,0x75);


MIDL_DEFINE_GUID(IID, IID_ExceptionEntry,0xDD771ED5,0x2FDA,0x4C0F,0xBF,0x4E,0xD3,0x3A,0x37,0x9D,0x88,0x5B);


MIDL_DEFINE_GUID(IID, IID_GraphicDictionary,0x61CF7E57,0x96B5,0x40C8,0x82,0x3A,0xA2,0x5C,0xC2,0x9C,0x7F,0x93);


MIDL_DEFINE_GUID(IID, IID_GraphicEntry,0xE60B1E71,0x548F,0x4B34,0xBD,0x81,0x99,0x00,0x3E,0xA6,0x92,0x2A);


MIDL_DEFINE_GUID(IID, IID_KeyLabelDictionary,0x781865FC,0x9E31,0x46C9,0x81,0x40,0xE4,0xAF,0x15,0xA8,0x17,0x0B);


MIDL_DEFINE_GUID(IID, IID_KeyLabelEntry,0x8EE54CC0,0x2617,0x450E,0xBF,0xF0,0x55,0x35,0x6D,0xA3,0x0A,0x9C);


MIDL_DEFINE_GUID(IID, IID_GlobalSettings,0xD5C04D9E,0xF114,0x43BD,0x89,0xC8,0x52,0x77,0x18,0x2A,0x8A,0x56);


MIDL_DEFINE_GUID(IID, IID_SetFileScope,0x201A7966,0xE51C,0x48FD,0xBE,0x98,0xE6,0xF9,0x2F,0x1D,0x11,0x16);


MIDL_DEFINE_GUID(IID, IID_ScreenSettingsScope,0xE5EF0F40,0x35D1,0x4581,0xB5,0xB9,0xF1,0x78,0xCA,0x9A,0xBF,0x5D);


MIDL_DEFINE_GUID(IID, IID_PunctuationSettingsScope,0x9FBAB55B,0x0436,0x4157,0xB2,0x2F,0xEE,0x7F,0x2E,0xD9,0xB6,0xCD);


MIDL_DEFINE_GUID(IID, IID_KeyboardSettingsScope,0xB3509CBF,0x064F,0x4796,0x84,0xD1,0x90,0x4D,0x31,0x5A,0xBA,0xFB);


MIDL_DEFINE_GUID(IID, IID_SpecialKeySettingsScope,0x3E143270,0x1E9D,0x4F20,0x86,0xA5,0xC3,0x05,0xC1,0xFC,0x37,0xC0);


MIDL_DEFINE_GUID(IID, IID_MouseSettingsScope,0x340B121B,0x9D18,0x4149,0x90,0x88,0xF1,0x25,0xBE,0x7B,0xC1,0x9D);


MIDL_DEFINE_GUID(IID, IID_GeneralSettingsScope,0x652A6567,0x793B,0x4502,0xAD,0x03,0x6A,0x98,0x9D,0x6E,0x7C,0x45);


MIDL_DEFINE_GUID(IID, IID_BrailleSettingsScope,0xBC7FCC1D,0x28AA,0x437D,0x8B,0x73,0xB8,0x96,0xB6,0xF8,0xB7,0x4C);


MIDL_DEFINE_GUID(IID, IID_BrailleScrollingOptionsScope,0xDCC11043,0x4D97,0x4B4F,0xB5,0x1D,0x4C,0x02,0x73,0x6E,0x60,0xE8);


MIDL_DEFINE_GUID(IID, IID_BrailleControlInformationScope,0xDB1A0515,0xEF94,0x410F,0x8A,0xA5,0xAE,0xAA,0xC1,0x8D,0x90,0x69);


MIDL_DEFINE_GUID(IID, IID_BrailleOptionsScope,0xAE632BB5,0xD26F,0x4DB3,0xAB,0xCA,0x57,0x5A,0x6B,0x5F,0x3C,0x37);


MIDL_DEFINE_GUID(IID, IID_BrailleGraphicsScope,0x1A8CAEAD,0x0FA1,0x42BD,0xA1,0xEF,0x21,0xD1,0x88,0xEA,0xA7,0xD0);


MIDL_DEFINE_GUID(IID, IID_HotkeysScope,0x944F4E76,0x6622,0x4CE3,0xA3,0x10,0xB9,0x88,0x81,0xB9,0x4C,0x9F);


MIDL_DEFINE_GUID(IID, IID_HotkeyScope,0x6B44A13F,0xC36F,0x4586,0x86,0xDB,0x8D,0xE7,0x68,0xAC,0x71,0x25);


MIDL_DEFINE_GUID(IID, IID_VerbosityScope,0xDB786D7D,0xE09A,0x4255,0xA2,0x02,0xDA,0x80,0x1F,0xA0,0xF0,0xCB);


MIDL_DEFINE_GUID(IID, IID_MenuVerbosityScope,0x7B87A15F,0x1B6A,0x4083,0xAE,0xE8,0x16,0xA0,0x7E,0x27,0x07,0xD1);


MIDL_DEFINE_GUID(IID, IID_ActivatedVerbosityScope,0xDC114DA2,0x23B9,0x4F7E,0x80,0xD4,0xEF,0x20,0xD5,0x9A,0x52,0x54);


MIDL_DEFINE_GUID(IID, IID_FocusedVerbosityScope,0x43B5F04F,0x0ED8,0x47A7,0xA3,0xEA,0xCD,0xBC,0xA2,0x95,0x4B,0xB2);


MIDL_DEFINE_GUID(IID, IID_AttributeChangeVerbosityScope,0xAB2625DB,0x32A2,0x4779,0xAC,0xA6,0xFC,0x9C,0xAF,0x5B,0x02,0xB1);


MIDL_DEFINE_GUID(IID, IID_MiscVerbosityScope,0xED5F090D,0x9C93,0x4653,0x8A,0xEB,0xA5,0x22,0xE0,0x7B,0xF7,0xF5);


MIDL_DEFINE_GUID(IID, IID_BrowseModeVerbosityScope,0xAC4B0D0E,0x7984,0x4150,0xAB,0x27,0xB7,0x69,0x11,0x33,0xDF,0xFA);


MIDL_DEFINE_GUID(IID, IID_BrowseModeAccessKeyVerbosityScope,0xB3B06C36,0x650E,0x4F33,0xA9,0x4C,0x80,0x7F,0xB4,0xCC,0xB4,0xF5);


MIDL_DEFINE_GUID(IID, IID_BrowseModeAcronymVerbosityScope,0x44E8C463,0xF909,0x44FE,0xB3,0x6C,0xD7,0xCF,0xCF,0x36,0x97,0x9C);


MIDL_DEFINE_GUID(IID, IID_BrowseModeFlashVerbosityScope,0xB46E1DE9,0x2FED,0x4FFC,0xA7,0x1F,0xAA,0x01,0xE1,0xF8,0xC1,0x69);


MIDL_DEFINE_GUID(IID, IID_BrowseModeFormVerbosityScope,0x95E8595F,0xB6E7,0x468C,0x9E,0xEE,0xEE,0x44,0x60,0x0E,0xF3,0xF0);


MIDL_DEFINE_GUID(IID, IID_BrowseModeHeadingVerbosityScope,0x64A65943,0xA1CC,0x4096,0xA9,0xD3,0x11,0x9E,0xCC,0x57,0xC0,0x80);


MIDL_DEFINE_GUID(IID, IID_BrowseModeLanguageVerbosityScope,0x9617234B,0xC55A,0x40EA,0xB3,0x0C,0x58,0xD9,0x11,0x48,0x10,0xB7);


MIDL_DEFINE_GUID(IID, IID_BrowseModeLinkVerbosityScope,0x0696AB43,0x3979,0x44B1,0xAA,0x09,0x73,0x79,0xB4,0xE9,0xE5,0xA4);


MIDL_DEFINE_GUID(IID, IID_BrowseModeListVerbosityScope,0xDDF6295A,0x63CC,0x4A94,0xA8,0xE3,0x1F,0x29,0xB7,0x71,0xFD,0x34);


MIDL_DEFINE_GUID(IID, IID_BrowseModeLongDescVerbosityScope,0xA29DCA3D,0x496B,0x40C9,0xA7,0x2C,0x7A,0xAC,0xE0,0x4F,0xC8,0xA9);


MIDL_DEFINE_GUID(IID, IID_BrowseModeMiscVerbosityScope,0x51E2B4A8,0x060A,0x4FA6,0x94,0xC5,0xE2,0xF7,0xB4,0x7A,0x3D,0x21);


MIDL_DEFINE_GUID(IID, IID_BrowseModeNewPageVerbosityScope,0x6E71A7D0,0x6353,0x411F,0x93,0x82,0xA2,0x59,0xDA,0xD2,0x82,0x56);


MIDL_DEFINE_GUID(IID, IID_BrowseModeObjectVerbosityScope,0xB3A95367,0x3F11,0x4F5F,0x83,0x96,0xDD,0x04,0xF9,0xAF,0x54,0xF6);


MIDL_DEFINE_GUID(IID, IID_BrowseModeParagraphVerbosityScope,0xC9F99E65,0x5A95,0x431E,0xAA,0x11,0x2F,0xE3,0x14,0x0F,0x9F,0xED);


MIDL_DEFINE_GUID(IID, IID_BrowseModeQuoteVerbosityScope,0xFB6EC9D5,0x60A6,0x43A4,0x9E,0x69,0xFD,0x29,0xBF,0x1D,0xBF,0xCB);


MIDL_DEFINE_GUID(IID, IID_BrowseModeTableVerbosityScope,0x2FFC450F,0xE611,0x4B78,0x81,0x13,0x7D,0x32,0xFE,0x6B,0xF0,0xFC);


MIDL_DEFINE_GUID(IID, IID_MouseVerbosityScope,0x462EC9EF,0x4EC6,0x458C,0x87,0x97,0x03,0x64,0x28,0x90,0x7A,0x27);


MIDL_DEFINE_GUID(IID, IID_Settings2,0x589E2BBB,0xAD90,0x4DD2,0x91,0xEA,0xA8,0x0B,0xC3,0x13,0x72,0xB1);


MIDL_DEFINE_GUID(IID, IID__Mouse,0xC065C0A0,0x1E67,0x49F3,0xBB,0xDD,0x3E,0x0A,0x9F,0xDD,0x5E,0xDA);


MIDL_DEFINE_GUID(IID, IID__MousePointer,0xB3E482A3,0x7EE0,0x4B15,0xAA,0x04,0x47,0x0D,0x0C,0x4D,0x2D,0x13);


MIDL_DEFINE_GUID(IID, IID_Cursor,0xE45E7F76,0xB7BE,0x4C73,0x91,0x9D,0xC3,0x89,0x40,0x64,0xD2,0x28);


MIDL_DEFINE_GUID(IID, IID__Keyboard,0x993F763F,0x0743,0x4D46,0xBC,0x63,0x9E,0xF2,0x70,0x50,0x91,0xA3);


MIDL_DEFINE_GUID(IID, IID_Keys,0xEF11A9E8,0xF13D,0x41DC,0xAA,0x78,0x35,0x3B,0x4A,0x6C,0x96,0xCC);


MIDL_DEFINE_GUID(IID, IID__Key,0xEECEC524,0x6269,0x43CA,0x95,0xC0,0x2B,0x93,0x02,0x4B,0x58,0x54);


MIDL_DEFINE_GUID(IID, IID_RegisteredKey,0xB43442C2,0xFB5D,0x4204,0xA2,0xE2,0x1B,0xFA,0x0D,0x10,0xD0,0x4A);


MIDL_DEFINE_GUID(IID, IID_RegisteredHotkeys,0x07C2E45E,0x8C6D,0x4980,0xAD,0x88,0xA1,0xA9,0x30,0xC9,0xBF,0x5C);


MIDL_DEFINE_GUID(IID, IID_RegisteredHotkey,0x23587EDB,0xE616,0x486A,0x85,0x10,0xD1,0xFD,0x46,0xDA,0x24,0xB2);


MIDL_DEFINE_GUID(IID, IID_LoadedScript,0x61358C41,0x8FC6,0x41AF,0x95,0xE9,0x16,0x27,0xFD,0xCE,0x27,0x79);


MIDL_DEFINE_GUID(IID, IID_CharacterDictionaries,0xF571E9C7,0xEC2D,0x452F,0x82,0xF9,0x3E,0x5F,0xB3,0xCB,0xD8,0x55);


MIDL_DEFINE_GUID(IID, IID_ColorDictionaries,0x04819B3B,0xC4D7,0x4D62,0x88,0x4F,0x09,0xDF,0x0C,0x43,0x6C,0xED);


MIDL_DEFINE_GUID(IID, IID_ExceptionDictionaries,0x27721E7C,0xF61F,0x425B,0xB8,0x59,0xE9,0x1E,0xA9,0xD4,0x7D,0x92);


MIDL_DEFINE_GUID(IID, IID_GraphicDictionaries,0xAD9AD626,0xFEF9,0x4F4D,0xBA,0x55,0x99,0x06,0xF8,0x03,0x87,0x79);


MIDL_DEFINE_GUID(IID, IID_KeyLabelDictionaries,0x57BB2672,0x9231,0x4E08,0x94,0x8B,0xB4,0x50,0xA2,0xA5,0xA6,0xD6);


MIDL_DEFINE_GUID(IID, IID__BrailleDisplays,0xBDFE3BAB,0xA96D,0x4994,0xBE,0x3D,0x23,0x79,0x66,0xDA,0x8F,0x4A);


MIDL_DEFINE_GUID(IID, IID__BrailleDisplay,0x7FD24DC7,0x78CC,0x4A03,0xA2,0x95,0xC4,0x49,0xBB,0xC5,0x21,0xB8);


MIDL_DEFINE_GUID(IID, IID_BrailleHotKey,0x0B85C700,0x4EB2,0x4212,0x97,0x2E,0x4B,0x2F,0x46,0xCA,0xB8,0x32);


MIDL_DEFINE_GUID(IID, IID_BrailleActions,0xA217A21C,0x6183,0x420B,0x8E,0x07,0x87,0xEE,0x9C,0x4D,0xF6,0x1E);


MIDL_DEFINE_GUID(IID, IID_BrailleAction,0x82B55C40,0xAFF9,0x4DA3,0x9B,0xD3,0x43,0x92,0x27,0xDD,0x02,0x89);


MIDL_DEFINE_GUID(IID, IID_BrailleHotKeys,0xF7A4D96B,0x0044,0x4665,0x91,0xA9,0xB5,0x40,0x41,0xA3,0xAC,0xAF);


MIDL_DEFINE_GUID(IID, DIID_BrailleDisplaysEvents,0x9A96CCBD,0x4E68,0x4D73,0xB5,0xD7,0xEB,0xF3,0xD4,0x5C,0xC9,0x30);


MIDL_DEFINE_GUID(IID, IID__BrailleDisplaysEvents,0xFA8E9BAF,0xCA70,0x48AA,0xA0,0xF7,0x8F,0xF1,0x9B,0x05,0x32,0x0B);


MIDL_DEFINE_GUID(IID, IID__SharedObjects,0x8B8674B2,0x9D28,0x4968,0x86,0x66,0x23,0x4A,0xE4,0x22,0x92,0x20);


MIDL_DEFINE_GUID(IID, IID__ClientInformation,0xA5082F96,0xBC80,0x4AE8,0x82,0xCC,0x51,0x10,0x1E,0xD9,0x1A,0x11);


MIDL_DEFINE_GUID(IID, IID_Signature,0xAA5276FD,0x6C33,0x4209,0x87,0x10,0xF0,0xE2,0xA6,0x17,0xAA,0x42);


MIDL_DEFINE_GUID(IID, IID_WECursor,0xA3DCEA0A,0xBEFA,0x4B2E,0x9C,0x01,0x66,0x81,0x30,0x4B,0xA5,0x95);


MIDL_DEFINE_GUID(IID, IID_Text,0xA3E20300,0x8EF2,0x4E7F,0xA4,0x85,0x6F,0xBA,0x94,0xDC,0xDC,0xDA);


MIDL_DEFINE_GUID(IID, IID_Screen,0x232A9364,0x2638,0x4DA3,0x83,0x3F,0x65,0x24,0xC6,0x22,0x0D,0x6F);


MIDL_DEFINE_GUID(IID, IID__Synthesizers,0x34DA2E1F,0x7A7C,0x47A9,0x89,0x4D,0xF3,0xE8,0x67,0x3B,0x00,0xD0);


MIDL_DEFINE_GUID(IID, IID__Synthesizer,0xBC8EE32D,0x00B9,0x4EF1,0xA5,0x8D,0xF8,0x57,0x03,0xB9,0xCD,0x4C);


MIDL_DEFINE_GUID(IID, IID_Engine,0x060585CE,0x18DF,0x4131,0x91,0x38,0x4C,0xEC,0x7A,0x66,0x4B,0x43);


MIDL_DEFINE_GUID(IID, IID_Engines,0xA153F258,0x36B0,0x4D4A,0xAB,0xC8,0x70,0xCA,0xCD,0x32,0x3F,0x65);


MIDL_DEFINE_GUID(IID, IID_IniFile,0x3706B606,0x932A,0x4C9D,0xAD,0xBD,0x9B,0x93,0xC7,0xBE,0x4E,0x8D);


MIDL_DEFINE_GUID(IID, IID__Speech,0xF6344F01,0xA798,0x46FE,0x87,0x36,0xF3,0x21,0xA6,0x9F,0x71,0xE6);


MIDL_DEFINE_GUID(IID, IID__MSAAEvents,0x27EE6A61,0x246B,0x45CB,0x87,0xC0,0x8A,0x64,0xE5,0x77,0x44,0x5A);


MIDL_DEFINE_GUID(IID, IID_MSAAEventBlock,0x11CA4E4B,0x148D,0x4311,0x9B,0x1A,0x6B,0xCC,0x2C,0x46,0x66,0x47);


MIDL_DEFINE_GUID(IID, IID_Clipboard,0x72A9B17D,0x98B3,0x44F7,0x9B,0xE1,0xA5,0xE8,0x92,0x17,0x02,0x62);


MIDL_DEFINE_GUID(IID, IID__BrowseMode,0x7298ACC8,0x3023,0x469A,0xBF,0xC7,0x71,0x35,0xF9,0xF8,0x56,0x1F);


MIDL_DEFINE_GUID(IID, IID_BrowseModeLines,0xE5EFF012,0x6802,0x4DC8,0x99,0x0F,0x57,0x1D,0x68,0x56,0xDC,0xDD);


MIDL_DEFINE_GUID(IID, IID_BrowseModeLine,0x08C8FAFF,0xDFBD,0x48EF,0x85,0xA3,0x6E,0x68,0x86,0xAB,0x84,0x57);


MIDL_DEFINE_GUID(IID, IID_WEDialogs,0xA84F8D09,0x34E2,0x4408,0x82,0xCC,0x3E,0x8E,0x78,0xBF,0x26,0x4C);


MIDL_DEFINE_GUID(IID, IID__Braille,0x6B0AFC3B,0x4428,0x483B,0x88,0x01,0x89,0xD0,0x35,0xC6,0xBC,0xC0);


MIDL_DEFINE_GUID(IID, IID_BrailleAttributes,0x27A1F779,0x31DB,0x466E,0x8A,0x62,0x57,0xDB,0xB8,0x9D,0x35,0x04);


MIDL_DEFINE_GUID(IID, IID_OSVersion,0x9A7FD9FF,0xD729,0x4B3E,0x8D,0x60,0xDE,0x0B,0x03,0x4B,0x07,0xFC);


MIDL_DEFINE_GUID(IID, IID__Dialog,0x6465FE90,0xC00C,0x47E3,0xB2,0xDC,0x27,0x8E,0x48,0x64,0x77,0xFC);


MIDL_DEFINE_GUID(IID, IID_Menu,0x76E1A66A,0x8A64,0x4A49,0x83,0x27,0x8C,0x8F,0x63,0x34,0xE4,0x4F);


MIDL_DEFINE_GUID(IID, IID_StartupOptions,0x3841E91D,0x3759,0x4C7F,0xBD,0x7D,0x0A,0xF8,0x29,0xF0,0x7E,0x54);


MIDL_DEFINE_GUID(IID, IID_WEPM,0x22FCD0A5,0x7CF1,0x46B1,0xBE,0x14,0x01,0xCF,0xE8,0x6E,0x55,0xC0);


MIDL_DEFINE_GUID(IID, IID_Profiles,0xB8488AFB,0x0E95,0x409D,0xAD,0x01,0xCA,0x14,0x10,0xE5,0xEA,0x50);


MIDL_DEFINE_GUID(IID, IID_Profile,0x2F930915,0x3D94,0x47A1,0xB5,0x5E,0xD0,0x0C,0x92,0xBC,0xC7,0xE1);


MIDL_DEFINE_GUID(IID, IID_Utilities,0x9E254D3E,0x8463,0x40AD,0x9F,0x09,0xFC,0x95,0x71,0x05,0x3B,0x66);


MIDL_DEFINE_GUID(IID, IID_LocaleInformation,0xD0638E9F,0x6409,0x4D32,0xAD,0xDD,0x2C,0xA5,0xE0,0xA0,0x7F,0x56);


MIDL_DEFINE_GUID(IID, IID_LoadedScripts,0x7FB8C7BB,0x7424,0x440D,0xB4,0x8F,0x07,0xED,0xA2,0x0E,0xF2,0xB9);


MIDL_DEFINE_GUID(IID, IID_WindowMessage,0xC8D9D673,0xEE50,0x481D,0xA8,0x3B,0x2D,0x7B,0x9A,0x39,0xC4,0x0C);


MIDL_DEFINE_GUID(IID, IID__WindowEvents,0x17369702,0xDCC0,0x4588,0x88,0x3D,0xF7,0x7D,0x1B,0xDC,0x38,0x68);


MIDL_DEFINE_GUID(IID, IID__Control,0x24D22926,0x0C9C,0x4021,0x81,0x52,0x49,0x60,0xFD,0xD7,0x90,0xB5);


MIDL_DEFINE_GUID(IID, IID_TreeView,0x6EA73B9F,0xA405,0x4CC4,0xA1,0xB2,0xA5,0xFF,0x7C,0xA0,0xD6,0x5B);


MIDL_DEFINE_GUID(IID, IID_TreeViewItem,0x37F7BC02,0x68C6,0x4085,0xA7,0x28,0x24,0xC2,0x75,0x9C,0xC6,0xB1);


MIDL_DEFINE_GUID(IID, IID_TreeViewItems,0x0F706D22,0x6B84,0x4701,0x99,0xB7,0x22,0x34,0xA8,0x64,0xE3,0x17);


MIDL_DEFINE_GUID(IID, IID__ApplicationEvents,0xD3AE5D19,0x1833,0x4CC1,0x86,0x47,0x19,0x4C,0x20,0x12,0x70,0xAB);


MIDL_DEFINE_GUID(IID, DIID_ApplicationEvents,0xDCFE6A7D,0x1541,0x4EAD,0xBC,0x3A,0xBB,0x91,0x08,0xC3,0x6C,0x7F);


MIDL_DEFINE_GUID(IID, IID__SharedObjectEvents,0x410CB436,0x7831,0x4707,0xA0,0x1F,0x64,0xE4,0x25,0xFF,0x1F,0x0E);


MIDL_DEFINE_GUID(IID, DIID_SharedObjectEvents,0x88A69BF3,0x4F8B,0x406B,0x97,0x20,0x29,0xC2,0x55,0x42,0xBD,0x9D);


MIDL_DEFINE_GUID(IID, IID__ClientInformationEvents,0xA09E1E00,0x2B3C,0x4E53,0x90,0x05,0x40,0xD4,0x00,0xCE,0x03,0x9A);


MIDL_DEFINE_GUID(IID, DIID_ClientInformationEvents,0xB571F50F,0xAB45,0x487D,0xB3,0x20,0x66,0x98,0x9E,0xDB,0x30,0x5A);


MIDL_DEFINE_GUID(IID, IID__Script,0x9426C016,0x0F4F,0x4E32,0xBE,0xE8,0xBF,0xD4,0x66,0xC8,0xCF,0xCF);


MIDL_DEFINE_GUID(IID, IID__ScriptEvents,0x54EA3DCB,0x7CED,0x4EE6,0xA8,0xEB,0x60,0x19,0x7B,0x90,0x16,0x57);


MIDL_DEFINE_GUID(IID, DIID_ScriptEvents,0xAFAD796F,0x288A,0x4947,0xB4,0x42,0x19,0x54,0x1C,0xBF,0x9F,0x9D);


MIDL_DEFINE_GUID(IID, IID__MouseEvents,0xA7F54D0C,0x4DBD,0x4B50,0xA0,0x81,0xE8,0x03,0x93,0x52,0xD1,0x18);


MIDL_DEFINE_GUID(IID, DIID_MouseEvents,0xC54C5FB5,0x92D8,0x4F03,0x83,0x54,0x64,0x6E,0xB1,0x29,0xA6,0x2F);


MIDL_DEFINE_GUID(IID, IID_IWEConnectionPointSink,0xF46B74A4,0x5BD8,0x45F5,0x8D,0xCD,0x6B,0x9C,0x01,0x4A,0xAE,0xFD);


MIDL_DEFINE_GUID(IID, DIID_WindowEvents,0x609D3D91,0x10E3,0x474A,0x89,0x22,0x72,0x51,0xAF,0x61,0x57,0xA5);


MIDL_DEFINE_GUID(IID, IID__KeyEvents,0xDAA21096,0x0EF0,0x45B5,0xB2,0x42,0x31,0x5B,0x37,0x9E,0xF2,0xD8);


MIDL_DEFINE_GUID(IID, DIID_KeyEvents,0x67AAE81E,0xD763,0x4BB2,0xB1,0xC0,0xCD,0x84,0x21,0x37,0x56,0x88);


MIDL_DEFINE_GUID(IID, IID__BrailleEvents,0xE864F32C,0x5E06,0x49A5,0x97,0xFA,0x75,0x2E,0xC7,0xAF,0xEF,0x28);


MIDL_DEFINE_GUID(IID, DIID_BrailleEvents,0x1FD1FE04,0x9D70,0x43D9,0xAC,0xE3,0x62,0xDC,0x85,0x9B,0xB9,0x3D);


MIDL_DEFINE_GUID(IID, IID__BrailleDisplayEvents,0xB8ED3390,0xBCD5,0x46EB,0xBB,0x41,0xE7,0x6E,0x0A,0x18,0x75,0x09);


MIDL_DEFINE_GUID(IID, DIID_BrailleDisplayEvents,0x7E518B60,0x494B,0x4153,0xBD,0xC0,0x05,0x01,0xD2,0x32,0x2F,0xE5);


MIDL_DEFINE_GUID(IID, IID__SpeechEvents,0x05911DA0,0xF272,0x4FDB,0x8C,0xDB,0x24,0xB9,0x16,0x95,0x7F,0x72);


MIDL_DEFINE_GUID(IID, DIID_SpeechEvents,0xA2F3EB81,0xCFCC,0x4D1E,0x80,0x33,0x21,0x82,0x2A,0x9A,0x6F,0x68);


MIDL_DEFINE_GUID(IID, IID__MouseCursorEvents,0x737AF3CD,0xF235,0x4D32,0x82,0x63,0x5D,0x91,0x8B,0xA4,0x4E,0x3F);


MIDL_DEFINE_GUID(IID, DIID_MouseCursorEvents,0x3DAC6012,0xCCAE,0x4BC3,0x92,0x3B,0x1D,0x57,0xDA,0x9B,0xA5,0xE9);


MIDL_DEFINE_GUID(IID, IID__EditBox,0xF38F6DFC,0x06E8,0x42A0,0x8C,0x64,0x91,0x38,0xFC,0x36,0x63,0x7D);


MIDL_DEFINE_GUID(IID, IID__Pushbutton,0xF7125E61,0x8E5D,0x44AA,0x86,0xDC,0xE2,0xBC,0x92,0xD4,0x0C,0x73);


MIDL_DEFINE_GUID(IID, IID__CheckBox,0xFDF989F9,0x5D53,0x46B1,0xA3,0x1B,0x4E,0x1E,0xC6,0x62,0xD3,0x16);


MIDL_DEFINE_GUID(IID, IID__RadioButton,0xC8508D98,0xADC2,0x47E3,0xA5,0x1E,0xCE,0xB0,0x43,0x65,0x92,0xDF);


MIDL_DEFINE_GUID(IID, IID_GroupBox,0x6182416D,0xF3D5,0x4602,0x8B,0x5A,0x47,0x56,0x1B,0xEE,0x7E,0xCB);


MIDL_DEFINE_GUID(IID, IID_Static,0xCF8CAE4C,0x15C6,0x4226,0x89,0x84,0x1C,0x66,0x35,0x21,0x71,0xDE);


MIDL_DEFINE_GUID(IID, IID__ComboBox,0x86E0723D,0xA77F,0x44D8,0xAE,0x7B,0x42,0x7D,0x4A,0xEB,0x9F,0xA5);


MIDL_DEFINE_GUID(IID, IID__ListBox,0xF8209E01,0xC266,0x4FC1,0x96,0xF7,0x61,0xEA,0x7C,0x30,0xBF,0x4A);


MIDL_DEFINE_GUID(IID, IID__UpDown,0xB34DF9B0,0x5781,0x4CB5,0xBF,0x97,0xCE,0x70,0x04,0xAE,0x7F,0xA5);


MIDL_DEFINE_GUID(IID, IID_ProgressBar,0x20134F69,0x7A84,0x4198,0x95,0x60,0xDA,0x2C,0xA8,0x70,0x16,0xCA);


MIDL_DEFINE_GUID(IID, IID__TrackBar,0xFEA9E0B5,0x7AEB,0x4F65,0x9D,0xF7,0x36,0x96,0x87,0x60,0x76,0xAD);


MIDL_DEFINE_GUID(IID, IID_TabControl,0x13C16134,0x27DB,0x4D84,0xBE,0xB2,0x14,0x84,0x2A,0xEE,0x4B,0x40);


MIDL_DEFINE_GUID(IID, IID_TreeViewEventInfo,0x723D6972,0xA7FE,0x46AC,0xBA,0xBF,0x69,0xF3,0x7D,0x28,0xC9,0x53);


MIDL_DEFINE_GUID(IID, IID_ListViewItem,0xBD6EA316,0xF119,0x4E3B,0xB6,0xD5,0x0F,0x89,0xAA,0x4C,0xEB,0x32);


MIDL_DEFINE_GUID(IID, IID_ListViewItems,0x1189BF9D,0xC69F,0x43CB,0xAD,0x9A,0x39,0xB7,0x7D,0x27,0x44,0xCD);


MIDL_DEFINE_GUID(IID, IID_ListViewColumn,0x202E439E,0x5524,0x4CFA,0x92,0x6D,0xA9,0xBD,0x4A,0x60,0x2B,0x05);


MIDL_DEFINE_GUID(IID, IID_ListViewColumns,0x88E0CD20,0x399A,0x4D9E,0x8E,0xE1,0x61,0x6A,0x40,0x49,0xAD,0xA3);


MIDL_DEFINE_GUID(IID, IID_ListView,0x4FD84575,0x2DE1,0x4823,0x89,0xFD,0xCA,0x13,0xBE,0x72,0xAB,0xA5);


MIDL_DEFINE_GUID(IID, IID_UpDownEventInfo,0x1FFA0BD0,0xF1B0,0x436D,0x98,0xEB,0x1A,0xCB,0x5F,0xFB,0xE1,0xFF);


MIDL_DEFINE_GUID(IID, IID__SynthesizersEvents,0x529A02D5,0x8E8C,0x4C07,0x8D,0xD2,0xB7,0xA9,0x16,0x39,0x0A,0xA5);


MIDL_DEFINE_GUID(IID, DIID_SynthesizersEvents,0x93280A3E,0x5C14,0x4B12,0x8B,0x79,0x75,0xCB,0x45,0x40,0x00,0xDD);


MIDL_DEFINE_GUID(IID, IID___MSAAEvents,0x8D8B648D,0x6C23,0x48A9,0xA5,0x44,0x6B,0xCD,0x01,0x0F,0xA1,0x3D);


MIDL_DEFINE_GUID(IID, DIID_MSAAEvents,0x324CC008,0xE06C,0x477B,0x96,0xB7,0x07,0x1C,0x50,0xC6,0xFE,0xCE);


MIDL_DEFINE_GUID(IID, IID__BrowseModeEvents,0x14397875,0x7E87,0x42A6,0xB3,0x38,0x0D,0x05,0x3F,0xC0,0x8C,0xA4);


MIDL_DEFINE_GUID(IID, DIID_BrowseModeEvents,0xD12B2FFD,0x52B7,0x43D9,0xA1,0x8D,0xA5,0x57,0x45,0xCC,0xCB,0x67);


MIDL_DEFINE_GUID(CLSID, CLSID_BrailleDisplays,0x589C86A7,0x883E,0x43B0,0x96,0x0E,0xD5,0x5E,0xE8,0xE3,0xDA,0x84);


MIDL_DEFINE_GUID(CLSID, CLSID_Application,0x76D4F4E6,0x3E5D,0x43E8,0xB9,0xD9,0xFC,0x58,0x68,0x4A,0x6B,0x8C);


MIDL_DEFINE_GUID(CLSID, CLSID_Keyboard,0x43C8DC45,0x4F69,0x4898,0x8D,0x9D,0x78,0x3D,0xE6,0x15,0xAF,0xD7);


MIDL_DEFINE_GUID(CLSID, CLSID_Key,0xB7D5D28F,0xA998,0x4EFB,0xB2,0xE9,0x8B,0xDB,0xA3,0x08,0x6F,0x36);


MIDL_DEFINE_GUID(CLSID, CLSID_Script,0x86352B61,0xB01A,0x4A1B,0xBB,0x40,0xDC,0x92,0x12,0x1F,0x67,0x81);


MIDL_DEFINE_GUID(CLSID, CLSID_Window,0x37018039,0x132B,0x43EF,0xB0,0x79,0xB6,0xA1,0x3D,0x2C,0x02,0xD1);


MIDL_DEFINE_GUID(CLSID, CLSID_ClientInformation,0xBDA6DF44,0xCFD0,0x4DEC,0x94,0x7F,0x36,0x4D,0x83,0xC4,0xB0,0x79);


MIDL_DEFINE_GUID(CLSID, CLSID_Mouse,0xE9C3515D,0x58AB,0x4B80,0x9D,0x6B,0xA4,0x7E,0x25,0x78,0xEE,0xD7);


MIDL_DEFINE_GUID(CLSID, CLSID_Dialog,0xB2ADCAFA,0xC744,0x43CF,0x85,0x91,0x4A,0xAB,0x3E,0x6F,0xED,0xED);


MIDL_DEFINE_GUID(CLSID, CLSID_MousePointer,0x45B8228B,0x2DCD,0x4F35,0x9A,0xE8,0x13,0xF6,0x27,0x29,0x41,0xE4);


MIDL_DEFINE_GUID(CLSID, CLSID_Control,0x5F118E43,0xC234,0x4879,0xA6,0x55,0x2A,0x8F,0x00,0x41,0xB4,0x63);


MIDL_DEFINE_GUID(CLSID, CLSID_EditBox,0x9ABF4CC0,0xA154,0x4248,0xBD,0x84,0xB5,0x3D,0x2A,0xAD,0x51,0xE7);


MIDL_DEFINE_GUID(CLSID, CLSID_Pushbutton,0xE9B4A950,0xBDAD,0x443A,0xBA,0x63,0x63,0x70,0x75,0x83,0x5D,0x76);


MIDL_DEFINE_GUID(CLSID, CLSID_CheckBox,0x61C99FFB,0x1A53,0x4106,0xBA,0xB4,0x04,0xD8,0x88,0xAC,0xAD,0x1E);


MIDL_DEFINE_GUID(CLSID, CLSID_RadioButton,0x648C7A43,0xCB4B,0x47B5,0x9D,0xBD,0xC6,0x4A,0x3E,0x60,0xB9,0x66);


MIDL_DEFINE_GUID(CLSID, CLSID_ComboBox,0xA9CC725C,0x1A13,0x4780,0xBC,0x7E,0xAE,0xF3,0x89,0x8D,0x18,0xCA);


MIDL_DEFINE_GUID(CLSID, CLSID_ListBox,0xABD450AB,0x9039,0x4BA6,0x83,0x96,0xE9,0x7B,0x2C,0x67,0xB0,0x16);


MIDL_DEFINE_GUID(CLSID, CLSID_UpDown,0xCADB2DDD,0x9D9E,0x4EAE,0xAC,0x1C,0xC5,0x5E,0x4A,0x00,0x03,0x37);


MIDL_DEFINE_GUID(CLSID, CLSID_TrackBar,0x876B6B1A,0xC823,0x4BBF,0x8B,0x5B,0xD5,0x7D,0x08,0x80,0x07,0x73);


MIDL_DEFINE_GUID(CLSID, CLSID_Synthesizer,0xD353FC81,0x02D3,0x4967,0xB1,0x1E,0xA5,0x41,0xA0,0x6A,0xD1,0xB5);


MIDL_DEFINE_GUID(CLSID, CLSID_Speech,0x215AA611,0x9C86,0x48B3,0x89,0xE5,0xEC,0x14,0x52,0xAD,0xAE,0x8B);


MIDL_DEFINE_GUID(CLSID, CLSID_MSAAEventSource,0xA330FEFD,0xF752,0x4A37,0xBA,0xE4,0xEE,0xCE,0x1D,0x99,0x8E,0xA3);


MIDL_DEFINE_GUID(CLSID, CLSID_BrowseMode,0xEAACAB81,0x2159,0x4768,0x82,0x08,0x42,0x21,0x0C,0xC6,0xD4,0x84);


MIDL_DEFINE_GUID(CLSID, CLSID_SharedObjects,0xCDC696E2,0x2B07,0x434C,0x8F,0x11,0x87,0x92,0x4E,0x56,0x98,0x3D);


MIDL_DEFINE_GUID(CLSID, CLSID_brailleDisplay,0x34FE5E9B,0x27E3,0x4CB9,0x8C,0x5D,0x5E,0x8D,0xD1,0xFE,0x77,0x1D);


MIDL_DEFINE_GUID(CLSID, CLSID_Braille,0x4DB82E86,0x92F3,0x4CD1,0xBE,0xDF,0x17,0xD9,0x63,0xD3,0x25,0xAB);


MIDL_DEFINE_GUID(CLSID, CLSID_Synthesizers,0x88EB8543,0x46B6,0x4642,0xB0,0x17,0x63,0xC7,0xDA,0xAC,0x13,0xD0);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



