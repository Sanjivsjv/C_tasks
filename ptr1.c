#include <stdio.h>
#include <stdint.h>
/*
0 - 1 byte/char/ 8 bits
1 - "
...... 
4 - 1 int
5 - "
6 - "
7 - "

int a = 1650;

&a ==> 2000

2000 - 01110010  ==>  72
2001 - 00000110  ==>  06
2002 - 00000000
2003 - 00000000

0x12345678

int * +1  ==> +4 
short int * +1  ==> +2
char * +1  ==> +1

int *addr;

(short int *)(addr)+1

2000 - 0x78
2001 - 0x56
2002 - 0x34  <--
2003 - 0x12

00000000 00000000 00000110 01110010

*/
int main()
{
	int a = 0x12345678; /* 4 bytes */
	
	int *addr = &a;
	
	printf("%x\n", addr);
	printf("%x\n", *((uint8_t *)(addr) + 2));
    printf("%x\n", *((uint16_t *)(addr) + 1));
	
	return 0;
}