 extern "C" {
  #include "lua.h"
  #include "lualib.h"
  #include "lauxlib.h"
}

3 class Cluatest
 {
  public:
          static int Initialize(lua_State* L); 
 };