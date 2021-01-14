#include <stdio.h>                                   
#include <stdint.h>

   
int get_string (char *ch)
{

			while(*ch != '\0')
		{
			//putchar(*ch); 
			printf("%c\n",*ch);
			ch++;
	
		}

	
}
int get1_string (char *ch1)
{

			while(*ch1 != '\0')
		{
			//putchar(*ch); 
			printf("%c\n",*ch1);
			ch1++;
	
		}

	
}

int set_bit (int *sb)
{

		//while(*sb != '\0')
		   for(int i=0;*sb !='\0';i++)
		   {
			 *sb = *sb | (1<< 1);
			 printf("%d\n",*sb);
			 *sb++;
		   }
		
		

}
int main()
{
   //char a   = 'sa';
   
   /*char a[]="sanji";
   get_string ("hello");
   
   get1_string (a);*/
   int setbit[] = {0b00000000,0b10000000};
   set_bit(setbit);
}