/*
Copyright 2021 mtei

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#pragma once

#define MATRIX_IN_PORTS  \
    (Port_C, MCU_GPIO, C0), \
    (Port_B, MCU_GPIO, B0), \
    (Port_A, MCU_GPIO, A0)
//"cols": ["B10", "B2", "B1", "B0", "C5", "C4", "A7", "A6"],
#define MATRIX_IN_PINS  \
    (0, Port_B, 10),  \
    (1, Port_B, 2),  \
    (2, Port_B, 1),  \
    (3, Port_B, 0), \
    (4, Port_C, 5), \
    (5, Port_C, 4), \
    (6, Port_A, 7), \
    (7, Port_A, 6)

#define MATRIX_OUT_PORTS \
    (Port_D, MCU_GPIO, D0), \
    (Port_C, MCU_GPIO, C0), \
    (Port_B, MCU_GPIO, B0), \
    (Port_F, MCU_GPIO, F0), \
    (Port_A, MCU_GPIO, A0)

//"rows": ["A4", "A5", "F5", "F4","A3","A2","B9","B8","B7","B6","B5","B4","B3","D2","C12","B13"]
#define MATRIX_OUT_PINS \
    (0, Port_A, 4), \
    (1, Port_A, 5), \
    (2, Port_F, 5), \
    (3, Port_F, 4), \
    (4, Port_A, 3), \
    (5, Port_A, 2), \
    (6, Port_B, 9), \
    (7, Port_B, 8), \
    (8, Port_B, 7), \
    (9, Port_B, 6), \
    (10, Port_B, 5), \
    (11, Port_B, 4), \
    (12, Port_B, 3), \
    (13, Port_D, 2), \
    (14, Port_C, 12), \
    (15, Port_B, 13)
