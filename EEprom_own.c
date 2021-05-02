/*
 * EEprom_own.c
 *
 *  Created on: Apr 29, 2021
 *      Author: MeGa
 */
#include <EEprom_own.h>
#include <types.h>
#define MAX_eeprom_SIZE           1024
void eeprom_write_one_byte(U8_C data, U16_T address){


	while(EECR & (1<<EEWE));       /* Wait for completion of previous write */

	EEAR = address;           /* Set up address and data registers */
	EEDR = data;

	EECR |= (1<<EEMWE);               /* Write logical one to EEMWE */

	EECR |= (1<<EEWE);                  /* Start eeprom write by setting EEWE */

}
char eeprom_read_one_byte(U16_T address){



	while(EECR & (1<<EEWE))          /* Wait for completion of previous write */
	;

	EEAR = address;             /* Set up address register */

	EECR |= (1<<EERE);             	/* Start eeprom read by writing EERE */

	return EEDR ;        	/* Return data from data register */

}

