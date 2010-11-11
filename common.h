/**
  * GreenPois0n Syringe - common.h
  * Copyright (C) 2010 Chronic-Dev Team
  * Copyright (C) 2010 Joshua Hill
  *
  * This program is free software: you can redistribute it and/or modify
  * it under the terms of the GNU General Public License as published by
  * the Free Software Foundation, either version 3 of the License, or
  * (at your option) any later version.
  *
  * This program is distributed in the hope that it will be useful,
  * but WITHOUT ANY WARRANTY; without even the implied warranty of
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  * GNU General Public License for more details.
  *
  * You should have received a copy of the GNU General Public License
  * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 **/

#ifndef COMMON_H
#define COMMON_H

#ifdef __cplusplus
extern "C" {
#endif

#ifdef SYRINGE_EXPORTS
#define LIBIRECOVERY_EXPORTS
#endif

#include "libirecovery.h"

#define SYRINGE_EXPORT LIBIRECOVERY_EXPORT

#ifdef _WIN32
#define sleep(n) Sleep(1000 * n)
#ifdef _MSC_VER
#pragma comment (lib, "setupapi.lib")
#define snprintf _snprintf
#endif
#endif

#define info(...) printf(__VA_ARGS__)
#define error(...) fprintf(stderr, __VA_ARGS__)
#define debug(...) if(libpois0n_debug) fprintf(stderr, __VA_ARGS__)

extern int libpois0n_debug;
extern irecv_client_t client;
extern irecv_device_t device;

#ifdef __cplusplus
}
#endif

#endif
