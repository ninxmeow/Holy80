/*
 * matrix.c testing macros
 *   MATRIX_DEBUG_SCAN:  Measuring execution time of `matrix_scan()`
 *   MATRIX_DEBUG_DELAY: Observation of delay after `unselect_row()`
 */
#pragma once

void uart_print_init(uint32_t baudrate);
void print_uart(uint8_t *p,uint8_t l);
