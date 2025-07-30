#include "mini_detour.h"

#if WIN32
#define EXPORT extern "C" __declspec( dllexport )
#elif GNUC
#define EXPORT extern "C" __attribute__ ((visibility("default"))) 
#else
#define EXPORT extern "C" 
#endif

EXPORT MiniDetour::Hook_t* CreateHook();

EXPORT void DisposeHook(MiniDetour::Hook_t* hook);

EXPORT void Hook_RestoreOnDestroy(MiniDetour::Hook_t* hook, bool restore);

EXPORT bool Hook_CanHook(MiniDetour::Hook_t* hook, void* functionToHook);

EXPORT void* Hook_HookFunction(MiniDetour::Hook_t* hook, void* functionToHook, void* newFunction);

EXPORT void* Hook_RestoreFunction(MiniDetour::Hook_t* hook);

EXPORT void* Hook_GetHookFunction(MiniDetour::Hook_t* hook);

EXPORT void* Hook_GetOriginalFunction(MiniDetour::Hook_t* hook);
