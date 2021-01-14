
//#define CHECK_BIT(value,n)  (value & (1<<n)) >> n

#include <stdio.h>
#include <stdint.h>

int main()
{
	
	uint8_t binary = 0b00000000;
	int position   = 4;
	
	/****set bit*******/
	
	binary = binary|(1<<position);
	printf("%d\n",binary);
	
	/*****clear bit*************/
	
	binary = binary & ~(1<<position);
	printf("%d\n",binary);
	
	/*********toggle bit******************/
	
	binary = binary^(1<<position);
	printf("%d\n",binary);
	
	/************************************/
	
	binary = binary^(1<<position);
	printf("%d\n",binary);
	
	/***********check bit**************************/
	
	binary = (binary & (1<<position)) >> position;
	printf("%d\n",binary);
	
	
	return 0;
	
}