/** @file keymaker.cc
 * @brief Build key strings for MSet ordering or collapsing.
 */
/* Copyright (C) 2007,2009,2011,2015 Olly Betts
 * Copyright (C) 2010 Richard Boulton
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301 USA
 */

#include <config.h>

#include "xapian/keymaker.h"

#include "xapian/document.h"

#include <string>
#include <vector>

using namespace std;

namespace Xapian {

KeyMaker::~KeyMaker() { }

}
