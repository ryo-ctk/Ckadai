/************************************************************/
/* 関数名   ： zeller                                       */
/* 機能概要 ： ツェラーの公式                               */
/* 作成者   ： 西浦 嶺                                      */
/* 作成日   ： 2017/6/13                                    */
/************************************************************/

#include <stdio.h>

int	zeller(int year,int month)
{	
	int d =1;
	int youbi;
	
	/* 1月か2月なら前年の13月と14月にする        */
	if(1 == month || 2 == month )
	{
		year  = year  - 1;
		month = month +12;	
	}
	
	
	/* ツェラーの公式      ０ １ ２ ３ ４ ５ ６  */
	/* 1日の曜日を求める   日 月 火 水 木 金 土  */
	youbi = ( year + year/4 - year/100 + year/400 + ( 13*month + 8 )/5 + d ) %7 ;
	
	
	
	/* 年と月を戻す      */
	
	if( 13 == month || 14 == month )
	{
		year  = year  + 1;
		month = month -12;	
	}
	return(youbi);
}	