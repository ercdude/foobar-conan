#pragma once

#ifdef _WIN32
    #ifdef EXPORTS_DLL
        // If marked to export, mark as dllexport to MSVC mark a symbol as exported from a DLL.
        #define EXPORT_API __declspec(dllexport)
    #else
        // If not marked to export, use dllimport to import that exported symbol to another file.
        #define EXPORT_API __declspec(dllimport)
    #endif
#else
    #define EXPORT_API
#endif


EXPORT_API int foo(int a, int b);
EXPORT_API int fooQt();
EXPORT_API int fooZip();
