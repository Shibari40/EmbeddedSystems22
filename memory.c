#include <xc.h>

#pragma config WRT = OFF        // Flash Memory Self-Write Protection (Write protection off)
#pragma config CPD = OFF        // Data Memory Code Protection (Data memory code protection is disabled)

#define EEPROM_SIZE 256         // Size of EEPROM in bytes

void writeEEPROM(unsigned int address, unsigned char data)
{
    // Wait for any previous write operation to complete
    while(EECON1bits.WR);

    // Set the address and data registers
    EEADR = address;
    EEDATA = data;

    // Enable writes to the EEPROM and start the write operation
    EECON1bits.WREN = 1;
    EECON2 = 0x55;
    EECON2 = 0xAA;
    EECON1bits.WR = 1;

    // Disable writes to the EEPROM
    EECON1bits.WREN = 0;
}

unsigned char readEEPROM(unsigned int address)
{
    // Set the address register
    EEADR = address;

    // Start the read operation
    EECON1bits.RD = 1;

    // Return the data
    return EEDATA;
}