/*
 * Epson Inkjet Printer Driver (ESC/P-R) for Linux
 * Copyright (C) 2002-2005 AVASYS CORPORATION.
 * Copyright (C) Seiko Epson Corporation 2002-2013.
 *
 *  This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110, USA.
 */

#ifndef ERR_H
#define ERR_H

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <stdarg.h>

#define DEBUG_PATH "/tmp/eps_debug.txt"

enum msgtype {
	MSGTYPE_ERROR = 0,
	MSGTYPE_WARNING,
	MSGTYPE_INFO,
	MSGTYPE_MESSAGE
};



void err_init (const char *);
void err_msg (enum msgtype, const char *, ...);
void err_fatal (const char *, ...);
void err_system (const char *, ...);
void debug_msg(const char *fmt, ...);


#endif /* ERR_H */
