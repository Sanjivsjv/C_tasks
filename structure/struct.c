#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct 
{
	char name[25];
	unsigned int roll_no;
	unsigned int age;
	char dept[4];
}student_detail;


void print_details(student_detail x)
{
	printf("Name %s\n", x.name);
	printf("Roll No. %d\n", x.roll_no);
	printf("Age  %d\n", x.age);
	printf("Dept %s\n", x.dept);
}

void set_details(student_detail *x)
{
	strcpy(x->name, "Sanjeev");
	x->roll_no = 54;
	x->age = 26;
	strcpy(x->dept, "ECE");
}

void set_age(student_detail *x, unsigned int age)
{
	x->age = age;
}


int main()
{
	student_detail a,b;
	set_details(&a);
	b = a;
	print_details(a);
	set_age(&b, 20);
	print_details(b);
	
   return 0;
}

