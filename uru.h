/************************************************************/
/* 関数名   ： uru                                          */
/* 機能概要 ： うるう年か判定し、うるう年ならば29日とする   */
/* 作成者   ： 西浦 嶺                                      */
/* 作成日   ： 2017/6/13                                    */
/************************************************************/

//#include <stdio.h>

int uru(int year)
{	
		/* 最終日の日付              */
	extern int last[];
	
		/*うるう年か判定*/
		if( 0 == year % 4 )//割り切れないなら平年
		{	
			
			/* 4で割り切れたなら100で割る           */
			
			if( 0== year %100 )
			{ 
			
				/* 100で割り切れたなら400で割る     */
				
				if(0==year%400)
				{
				
					/* 400で割り切れたならうるう年  */
					
					printf("うるう年です\n");
					
					last[1] = last [1] +1;
					
					printf("(4,100,400で割り切れた)\n");
				}
			
			}
			
			/* 100で割り切れない場合             */
			else
			{
				/* 100で割り切れないならうるう年 */
				
				printf("うるう年です\n");
				
				last[1] = last [1] +1;
				
				printf("(4で割れて100で割り切れない)\n");
			
			}
		}
	
	printf("\n");
	
//	return(last[12]);
	
}