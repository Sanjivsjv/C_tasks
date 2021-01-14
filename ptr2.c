#include <stdio.h>
#include <stdint.h>
#include <string.h>

/*

2000  - 0x41   4008
2001  - 0x42



2008          4016

memcpy(4008,2000, 8);

*/
int main()
{
	uint8_t a[4] = {};
	int num = 0x34992012;
	
	memcpy(a,&num,4);

    for(int i=0; i< 4; i++)
	  printf("%x\n", a[i]);

	return 0;
}