// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently,
// but are changed infrequently

#pragma once

#include <vcclr_local.h>

#ifdef EXPORT
  #define DECL __declspec(dllexport)
#else
  #define DECL __declspec(dllimport)
#endif
