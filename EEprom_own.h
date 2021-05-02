/*
 * EEprom_owm.h
 *
 *  Created on: Apr 29, 2021
 *      Author: MeGa
 */

#ifndef EEPROM_OWN_H_
#define EEPROM_OWN_H_
#include <types.h>
#include <avr/io.h>
#include <util/delay.h>

extern void eeprom_write_one_byte(U8_C data,U16_T address);
extern char eeprom_read_one_byte(U16_T address);
extern void eeprom_WRITE_number_of_bytes(U16_T address, U8_C number_of_bytes , U8_C * Ram_address);

#endif /* EEPROM_OWN_H_ */
