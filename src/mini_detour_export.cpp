#include <mini_detour/mini_detour_export.h>

// MiniDetour::Hook_t related exports

MiniDetour::Hook_t* CreateHook()
{
    MiniDetour::Hook_t* ptr = new MiniDetour::Hook_t{};
    return ptr;
}

void DisposeHook(MiniDetour::Hook_t* hook)
{
    delete hook;
}

void Hook_RestoreOnDestroy(MiniDetour::Hook_t* hook, bool restore)
{
    hook->RestoreOnDestroy(restore);
}

bool Hook_CanHook(MiniDetour::Hook_t* hook, void* functionToHook)
{
    return hook->CanHook(functionToHook);
}

void* Hook_HookFunction(MiniDetour::Hook_t* hook, void* functionToHook, void* newFunction)
{
    return hook->HookFunction(functionToHook, newFunction);
}

void* Hook_RestoreFunction(MiniDetour::Hook_t* hook)
{
    return hook->RestoreFunction();
}

void* Hook_GetHookFunction(MiniDetour::Hook_t* hook)
{
    return hook->GetHookFunction();
}

void* Hook_GetOriginalFunction(MiniDetour::Hook_t* hook)
{
    return hook->GetOriginalFunction();
}