#include	<stdio.h>


char Delete_Space (char x[50])
{	
	int	k , i;
	char y[50];

	for (i= 0 ; i < 50 ; i++)
	{
	    if(x[i] == '_')
		{

		}
		else
		{
			y[k] = x[i];
			k++;
		}
	}
	
	printf("%s\n",y);
}
	

void main(void)
{	
	static char	 a[50] = "A_B__C___D_E__FG__" ;
	static char	 b[50] = "B__B__B_C_D___B__" ;
	static char	 c[50] = "I_have_a_pen" ;
	//char	z[50];
	
	
	Delete_Space(a);	
	
	Delete_Space(b);
	
	Delete_Space(c);
	
}