/******************************************************************************
*
* Notepad2-mod
*
* Version.h
*
* See License.txt for details about distribution and modification.
*
*                                       (c) XhmikosR 2010-2016
*                                       https://github.com/XhmikosR/notepad2-mod
*
*
******************************************************************************/


#ifndef NOTEPAD2_VERSION_H
#define NOTEPAD2_VERSION_H

#include "VersionRev.h"

#ifndef _T
#if !defined(ISPP_INVOKED) && (defined(UNICODE) || defined(_UNICODE))
#define _T(text) L##text
#else
#define _T(text) text
#endif
#endif

#define STR_HLP(x) #x
#define STR(x) STR_HLP(x)

#define DO_STRINGIFY(x) _T(#x)
#define STRINGIFY(x)    DO_STRINGIFY(x)

#define MY_APPNAME                   L"Notepad2Crypt"
#define VERSION_FILEVERSION_NUM      VERSION_MAJOR,VERSION_MINOR,VERSION_REV,VERSION_BUILD
#define VERSION_FILEVERSION          STRINGIFY(VERSION_MAJOR) L"." STRINGIFY(VERSION_MINOR) L"." \
                                     STRINGIFY(VERSION_REV) L"." STRINGIFY(VERSION_BUILD)
#define VERSION_LEGALCOPYRIGHT       L"Copyright � 2008-2016 Florian Balmer (Notepad2)"
//#define VERSION_LEGALCOPYRIGHT_LONG  L"� Florian Balmer 2008-2016"
#define VERSION_AUTHORNAME           L"Florian Balmer"
#define VERSION_WEBPAGEDISPLAY       L"flo's freeware - http://www.flos-freeware.ch"
#define VERSION_EMAILDISPLAY         L"florian.balmer@gmail.com"
#define VERSION_COMPANYNAME          L"Florian Balmer et al."
#define VERSION_SCIPAGEDISPLAY       L"http://www.scintilla.org/"
#define VERSION_MODPAGEDISPLAY       L"https://xhmikosr.github.io/notepad2-mod/"
#define VERSION_WEBPAGE2DISPLAY      L"http://www.regexlab.com/deelx/"

#if defined(_WIN64)
#define VERSION_FILEVERSION_LONG  L"Notepad2Crypt (64-bit) " VERSION_FILEVERSION L"\n" SCINTILLA_BUILD
#else
#define VERSION_FILEVERSION_LONG  L"Notepad2Crypt " VERSION_FILEVERSION L"\n" SCINTILLA_BUILD
#endif

// Compiler specific
#if defined(WDK_BUILD)
#if _MSC_VER == 1600
#if (_MSC_FULL_VER >= 160040219)
#define VER_CPL    L"WDK (MSVC 2010 SP1)"
#else
#define VER_CPL    L"WDK (MSVC 2010)"
#endif
#elif _MSC_VER == 1500
#if (_MSC_FULL_VER == 150030729)
#define VER_CPL    L"WDK"
#else
#define VER_CPL    L"WDK (version unknown)"
#endif
#endif
#elif defined(_MSC_VER)
#if _MSC_VER == 1910
#if (_MSC_FULL_VER >= 191025017)
#define VER_CPL    "MSVC 2017"
#endif
#elif _MSC_VER == 1900
#if (_MSC_FULL_VER >= 191025017)
#define VER_CPL    "MSVC 2017"
#elif (_MSC_FULL_VER >= 190024210)
#define VER_CPL    "MSVC 2015 Update 3"
#elif (_MSC_FULL_VER == 190023918)
#define VER_CPL    "MSVC 2015 Update 2"
#elif (_MSC_FULL_VER == 190023506)
#define VER_CPL    "MSVC 2015 Update 1"
#elif (_MSC_FULL_VER == 190023026)
#define VER_CPL    "MSVC 2015"
#elif (_MSC_FULL_VER < 190023026)
#define VER_CPL    "MSVC 2015 Preview/Beta/RC"
#else
#define VER_CPL    "MSVC 2015"
#endif
#elif _MSC_VER == 1800
#if (_MSC_FULL_VER == 180040629)
#define VER_CPL    "MSVC 2013 Update 5"
#elif (_MSC_FULL_VER == 180031101)
#define VER_CPL    "MSVC 2013 Update 4"
#elif (_MSC_FULL_VER == 180030723)
#define VER_CPL    "MSVC 2013 Update 3"
#elif (_MSC_FULL_VER == 180030501)
#define VER_CPL    "MSVC 2013 Update 2"
#elif (_MSC_FULL_VER < 180021005)
#define VER_CPL    "MSVC 2013 Preview/Beta/RC"
#else
#define VER_CPL    "MSVC 2013"
#endif
#elif _MSC_VER == 1700
#if (_MSC_FULL_VER == 170061030)
#define VER_CPL    "MSVC 2012 Update 4"
#elif (_MSC_FULL_VER == 170060610)
#define VER_CPL    "MSVC 2012 Update 3"
#elif (_MSC_FULL_VER == 170060315)
#define VER_CPL    "MSVC 2012 Update 2"
#elif (_MSC_FULL_VER == 170051106)
#define VER_CPL    "MSVC 2012 Update 1"
#elif (_MSC_FULL_VER < 170050727)
#define VER_CPL    "MSVC 2012 Beta/RC/PR"
#else
#define VER_CPL    "MSVC 2012"
#endif
#elif _MSC_VER == 1600
#if (_MSC_FULL_VER >= 160040219)
#define VER_CPL    "MSVC 2010 SP1"
#else
#define VER_CPL    "MSVC 2010"
#endif
#elif _MSC_VER == 1500
#if (_MSC_FULL_VER >= 150030729)
#define VER_CPL    "MSVC 2008 SP1"
#else
#define VER_CPL    "MSVC 2008"
#endif
#else
#define VER_CPL    "MSVC (version unknown)"
#endif
#else
#define VER_CPL    "(Unknown compiler)"
#endif

#define VERSION_COMPILER STRINGIFY(VER_CPL)

#pragma message("Compiler Version: " VER_CPL "  (#" STR(_MSC_FULL_VER) ")")

#endif // NOTEPAD2_VERSION_H
