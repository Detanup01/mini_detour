#include <mini_detour/mini_detour_export.h>

MiniDetour::Hook_t* CreateHook()
{
    MiniDetour::Hook_t* ptr = new MiniDetour::Hook_t{};
    return ptr;
}