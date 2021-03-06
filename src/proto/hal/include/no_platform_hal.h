/*
    Copyright 2016-2019 (C) Alexey Dynda

    This file is part of Tiny Protocol Library.

    Protocol Library is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Protocol Library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with Protocol Library.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include <stdint.h>

/* For fastest version of protocol assign all defines to zero.
 * In this case protocol supports no CRC field, and
 * all api functions become not thread-safe.
 */

#ifndef CONFIG_ENABLE_CHECKSUM
#   define CONFIG_ENABLE_CHECKSUM
#endif

#ifndef CONFIG_ENABLE_FCS16
#   define CONFIG_ENABLE_FCS16
#endif

//#ifndef CONFIG_ENABLE_FCS32
//#   define CONFIG_ENABLE_FCS32
//#endif

/**
 * Mutex type used by Tiny Protocol implementation.
 * The type declaration depends on platform.
 */
typedef uint8_t tiny_mutex_t;

/**
 * Events group type used by Tiny Protocol implementation.
 * The type declaration depends on platform.
 */
typedef uint8_t tiny_events_t;



