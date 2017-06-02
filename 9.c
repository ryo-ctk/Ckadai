
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	char i;
	unsigned char a[7]={"VZ@GTRP"};

	for(i=0 ; i<7 ; i++)
	{
	  if( 0 != ( a[i] & 0x01 ) ) 
		{ 
			
			a[i] = a[i] - 1;
		
		}
		else
		{
		
		a[i] = a[i]+ 1 ;
		
		}
		
		//printf("%d\n",a[i]);
		
		
	//if 2ビット目反転-----------------------------------
		if( 0 != ( a[i] & 0x04) )
		{
			(a[i] = a[i] - 4);
		}
		else
		{
			a[i] = a[i] + 4;
		}
		
		//printf("%x\n",a[i]);
		
	//if 4ビット目反転-----------------------------------
		    
		
		if( 0 != ( a[i] & 0x10 ) )
		{
			a[i] = a[i] - 16;
		}
		else
		{
			a[i] = a[i] + 16;
		}
		
		printf("%c\n",a[i]);
	
	}
	
}
