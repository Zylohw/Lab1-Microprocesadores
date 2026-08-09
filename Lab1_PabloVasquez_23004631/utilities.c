#include "utilities.h"
void bitSet(uint32_t*ptr,uint8_t bit)
{
    *ptr |= 1<<bit;
}

void bitClear(uint32_t *ptr, uint8_t bit)
{
    *ptr &= ~(1<<bit);    
}

void bitToggle(uint32_t *ptr,uint8_t bit)
{
    *ptr ^= 1<<bit;
}

uint8_t stringLength(uint8_t *str)
{
    uint8_t contador = 0 ;
    while(*str != '\0')
    {
        contador++;
        str = str + 1; 
    }
    return contador;

}