/*
 * Copyright (c) 2007 Ivan Leben
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library in the file COPYING;
 * if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */

#ifndef __SHPARAMS_H
#define __SHPARAMS_H 1

extern SHint shParamToInt(const void *values, SHint floats, SHint index);
extern VGfloat shParamToFloat(const void *values, SHint floats, SHint index);
extern void shIntToParam(SHint i, SHint count, void *output, SHint floats, SHint index);
extern void shFloatToParam(SHfloat f, SHint count, void *output, SHint floats, SHint index);
#endif /* __SHPARAMS_H */
