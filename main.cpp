#include "luatest.h"
#include "iostream"

using namespace std;

int main()
{
    lua_State *L = luaL_newstate();
    Cluatest::Initialize(L);

    int bRet = luaL_loadfile(L,"test.lua");
    if(bRet)
    {
        cout<<"load file error"<<endl;
        return 0;
    }

    bRet = lua_pcall(L,0,0,0);
    if(bRet)
    {
        cout<<"pcall error"<<endl;
        return 0;
    }

    lua_getglobal(L,"num");
    int num = lua_tonumber(L,-1);
    cout<<"num = "<<num<<endl;        

    lua_close(L);
    return 0;
}