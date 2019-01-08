/*-----------------------------------------------------------------
 Copyright (C) 2015
	Matthew Scholefield

 This program is free software; you can redistribute it and/or
 modify it under the terms of the GNU General Public License
 as published by the Free Software Foundation; either version 2
 of the License, or (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.

------------------------------------------------------------------*/
#pragma once

extern u16 bmpImageBuffer[256*192];
void vramcpy_ui (void* dest, const void* src, int size);
void clearBrightness(void);
void runGraphicIrq(void);
void loadTitleGraphics();
void startRendering(bool top);
bool isRenderingTop();

template<typename T> inline const T abs(T const & x)
{
	return ( x < 0) ? -x : x;
}