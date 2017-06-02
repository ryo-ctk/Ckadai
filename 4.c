#include	<stdio.h>
#define		DATAMAX	9999
#define		DATAMIN	0
#define		MAX	12
	
void  main( void )
{
	int   i,j,uriage[MAX];
		uriage[0] = 50;
		uriage[1] = 100;
		uriage[2] = 150;
		uriage[3] = 200;
		uriage[4] = 250;
		uriage[5] = 300;
		uriage[6] = 350;
		uriage[7] = 400;
		uriage[8] = 450;
		uriage[9] = 500;
		uriage[10] = 550;
		uriage[11] = 600;
	int	MaxVal=DATAMIN,
		MinVal=DATAMAX,
		Sum=0,
		Avg=0;

	for(i=0 ; i<MAX ; i++){
            if(uriage[i]>MaxVal){
		MaxVal=uriage[i];
		}
	}
	for(i=0 ; i<MAX ; i++){
	    if(uriage[i]<MinVal){
	       MinVal=uriage[i]; 
	    }
	}
	for(i=0 ; i<MAX ; i++){
	    Sum += uriage[i];
         }
	Avg=Sum/MAX	;

	
	printf("%d\n",MaxVal);
        printf("%d\n",MinVal);
	printf("%d\n",Avg);
	

	
      
}