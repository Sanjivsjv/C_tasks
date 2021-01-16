#include <stdio.h>
#include <string.h>

typedef struct 
{
	char name[25];
	unsigned int roll_no;
	unsigned int age;
	char dept[4];
}data;


int main()
{
	
	data x;
	
	/***********************************************/
	
	printf("enter the name ");
	scanf("%s", &x.name);
	printf("enter the roll no ");
	scanf("%d",& x.roll_no);
	printf("enter the age ");
	scanf("%d",& x.age);
	printf("enter the dept ");
	scanf("%s",& x.dept);
	
	/*************************************************/
	
	printf("Name %s\n", x.name);
	printf("Roll No. %d\n", x.roll_no);
	printf("Age  %d\n", x.age);
	printf("Dept %s\n", x.dept);
	
	/*************************************************/
	
}