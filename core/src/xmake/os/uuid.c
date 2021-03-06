/*!The Make-like Build Utility based on Lua
 * 
 * XMake is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2.1 of the License, or
 * (at your option) any later version.
 * 
 * XMake is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public License
 * along with XMake; 
 * If not, see <a href="http://www.gnu.org/licenses/"> http://www.gnu.org/licenses/</a>
 * 
 * Copyright (C) 2015 - 2016, ruki All rights reserved.
 *
 * @author      ruki
 * @file        uuid.c
 *
 */

/* //////////////////////////////////////////////////////////////////////////////////////
 * trace
 */
#define TB_TRACE_MODULE_NAME                "uuid"
#define TB_TRACE_MODULE_DEBUG               (0)

/* //////////////////////////////////////////////////////////////////////////////////////
 * includes
 */
#include "prefix.h"

/* //////////////////////////////////////////////////////////////////////////////////////
 * implementation
 */
tb_int_t xm_os_uuid(lua_State* lua)
{
    // check
    tb_assert_and_check_return_val(lua, 0);

    // get the name  
    tb_char_t const* name = luaL_optstring(lua, 1, tb_null);

    // make uuid
    tb_char_t uuid[37];
	lua_pushstring(lua, tb_uuid_make_cstr(uuid, name));

    // ok
    return 1;
}
