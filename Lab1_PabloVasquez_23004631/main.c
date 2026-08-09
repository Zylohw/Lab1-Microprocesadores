#include "RTE_Components.h"
#include CMSIS_device_header
#include <stdio.h>
#include "utilities.h"
#include "utilities.c"



int main() 
{
    uint32_t num = 0;
    printf("bitSet\r\n");
    num = 0;
    printf("Antes:  0x%08X\r\n", num);
    bitSet(&num, 0);
    printf("bit 0:  0x%08X\r\n", num);
    bitSet(&num, 31);
    printf("bit 31: 0x%08X\r\n", num);
    bitSet(&num, 0);
    printf("repetir bit 0 (ya estaba en 1): 0x%08X\r\n", num);

    printf("bitClear \r\n");
    num = 0xFFFFFFFF;
    printf("Antes:  0x%08X\r\n", num);
    bitClear(&num, 0);
    printf("bit 0:  0x%08X\r\n", num);
    bitClear(&num, 31);
    printf("bit 31: 0x%08X\r\n", num);
    bitClear(&num, 0);
    printf("repetir bit 0 (ya estaba en 0): 0x%08X\r\n", num);

    printf("bitToggle \r\n");
    num = 0;
    printf("Antes:  0x%08X\r\n", num);
    bitToggle(&num, 5);
    printf("toggle bit 5:      0x%08X\r\n", num);
    bitToggle(&num, 5);
    printf("toggle bit 5 otra vez (debe volver): 0x%08X\r\n", num);

    printf("stringLength\r\n");
    uint8_t str1[] = "";
    uint8_t str2[] = "Hola";
    uint8_t str3[] = "Universidad Galileo";
    printf("Longitud de \"\": %u\r\n", stringLength(str1));
    printf("Longitud de \"Hola\": %u\r\n", stringLength(str2));
    printf("Longitud de \"Universidad Galileo\": %u\r\n", stringLength(str3)); 
   
}