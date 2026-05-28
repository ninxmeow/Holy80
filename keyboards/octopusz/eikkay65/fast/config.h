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

#define MATRIX_OUT_PORTS  \
    (Port_C, MCU_GPIO, C0), \
    (Port_A, MCU_GPIO, A0)

#define MATRIX_OUT_PINS  \
    (0, Port_C, 9),  \
    (1, Port_A, 8),  \
    (2, Port_A, 9),  \
    (3, Port_A, 11), \
    (4, Port_A, 12)

#define MATRIX_IN_PORTS \
    (Port_D, MCU_GPIO, D0), \
    (Port_C, MCU_GPIO, C0), \
    (Port_B, MCU_GPIO, B0), \
    (Port_A, MCU_GPIO, A0)


#define MATRIX_IN_PINS \
    (0, Port_C, 10), \
    (1, Port_C, 11), \
    (2, Port_C, 12), \
    (3, Port_D, 2), \
    (4, Port_B, 3), \
    (5, Port_A, 4), \
    (6, Port_B, 4), \
    (7, Port_B, 5), \
    (8, Port_B, 6), \
    (9, Port_B, 7), \
    (10, Port_B, 8), \
    (11, Port_B, 9), \
    (12, Port_C, 2), \
    (13, Port_C, 0), \
    (14, Port_C, 14)
