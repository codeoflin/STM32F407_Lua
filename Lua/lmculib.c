#include "lua.h"
#include "lauxlib.h"
#include "lualib.h"
static int myfun(lua_State* L)
{
	lua_writestring("myfun is succeed!",0);
	return 1;
}
static const struct luaL_Reg mculib[] = 
{
	{"myfun",myfun},
	{NULL,NULL}
};
LUALIB_API int luaopen_mcu(lua_State* L)
{
	luaL_newlib(L,mculib);
	return 1;
}