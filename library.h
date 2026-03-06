#ifdef BUILD_DLL
#define DLL_PORTING __declspec(dllexport)
#else
#define DLL_PORTING __declspec(dllimport)
#endif

DLL_PORTING int GetNumber();
