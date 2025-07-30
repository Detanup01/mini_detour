#include "mini_detour.h"

#if WIN32
#define EXPORT extern "C" __declspec( dllexport )
#elif GNUC
#define EXPORT extern "C" __attribute__ ((visibility("default"))) 
#else
#define EXPORT extern "C" 
#endif

EXPORT MiniDetour::Hook_t* CreateHook();