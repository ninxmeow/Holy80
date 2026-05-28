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

        // "cols": ["B10","B2","B1","B12","A11","A12","F6","F7","A15","C10","C11","C12","D2","B3","B4","B5"],
        // "rows": ["F4", "F5", "A4", "A5","A6","A3"]

#define MATRIX_OUT_PORTS  \
    (Port_C, MCU_GPIO, C0), \
    (Port_D, MCU_GPIO, D0), \
    (Port_B, MCU_GPIO, B0),\
    (Port_A, MCU_GPIO, A0)

#define MATRIX_OUT_PINS  \
    (0, Port_C, 12),  \
    (1, Port_D, 2), \
    (2, Port_B, 3),  \
    (3, Port_B, 4), \
    (4, Port_A, 7), \
    (5, Port_A, 6)

#define MATRIX_IN_PORTS \
    (Port_F, MCU_GPIO, F0), \
    (Port_A, MCU_GPIO, A0), \
    (Port_C, MCU_GPIO, C0), \
    (Port_B, MCU_GPIO, B0)


#define MATRIX_IN_PINS \
    (0, Port_F, 4), \
    (1, Port_A, 3), \
    (2, Port_A, 2), \
    (3, Port_A, 5), \
    (4, Port_A, 4), \
    (5, Port_A, 1), \
    (6, Port_F, 5), \
    (7, Port_C, 5), \
    (8, Port_C, 4), \
    (9, Port_A, 12), \
    (10, Port_A, 11), \
    (11, Port_B, 10), \
    (12, Port_B, 2), \
    (13, Port_B, 1), \
    (14, Port_B, 0), \
    (15, Port_C, 10), \
    (16, Port_C, 11)

