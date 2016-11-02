 extern "C" {
  #include "lua.h"
  #include "lualib.h"
  #include "lauxlib.h"
}

class Cluatest
{
 public:
         static int Initialize(lua_State* L); 
};