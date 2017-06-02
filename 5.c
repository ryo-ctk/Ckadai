#include	<stdio.h>


char	main(void)
{
	static char a[50]="A_B__C___D_E__FG__";
	char	    b[50];
	
	
	int	k , i;
	

	for (i= 0 ; i < 50 ; i++)
	{
	    if(a[i] == '_')
		{

		}
		else
		{
			b[k] = a[i];
			k++;
		}
	}
	
	printf("%s\n",b);
}