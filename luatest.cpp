#include "luatest.h"

static int GetNum(lua_State *L)
{
    lua_pushnumber(L,123456);
    return 1;
}

static luaL_Reg lua_lib[] = {
    {"GetNum",GetNum},
    {NULL,NULL}
};

int Cluatest::Initialize(lua_State* L)
{
     luaL_register(L,"Global",(luaL_Reg*)lua_lib);
     lua_pop(L,1);
     return 0;
}
     