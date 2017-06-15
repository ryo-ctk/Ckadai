
//*****************************************************************************************//
//*課題名    ： プログラム課題  万年カレンダー                                            *//
//*課題内容  ： 入力した年、月のカレンダーを表示する                                      *//
//*作者名    ： 西浦  嶺                                                                  *//
//*作成日    ： 2017年6月12日                                                             *//
//*最終更新日： 2017年6月13日                                                             *//
//*****************************************************************************************//

#include <stdio.h>
#include <stdlib.h>
/* main内、exitを利用するため    */

	/* 最終日の日付              */
	int last[]={31,28,31,30,31,30,31,31,30,31,30,31};

int	uru    (int year);
int	zeller (int year,int month);
int	hyouzi (int year,int month,int youbi);


/************************************************************/
/* 関数名   ： main                                         */
/* 機能概要 ： 年、月の入力                                 */
/* 作成者   ： 西浦 嶺                                      */
/* 作成日   ： 2017/6/12                                    */
/************************************************************/

int main()
{
	
	int i;
	int j;
	int year  = 0;	 /* 年       */
	int month = 0;   /* 月       */
	int d     = 1;   /* 1日      */
	int youbi = 0;   /* 公式の解 */


	
	char seisuu[5];
	
	/* 何年を表示するか */
	for( ; ; )
	{
		printf("年を入力 =>"); 
	
//		scanf("%d",&year);
		gets(seisuu);
		year=atoi(seisuu);
		
		/* 入力された月が0ならプログラムを終了する */
		if(0 == year)
		{
			printf("プログラムを終了しました");
			
			exit(0);
		}
		
		/* 9999より大きいか-1以下であれば再入力    */
		if ( year > 9999 || year <=-1 )
		{
			printf("1から9999を入力してください\n");
			
		}else
		
		{
			
		/*  1から9999ならループを抜ける            */
			break;
		
		}
	}

	
	/* 何月を表示するか */
	for( ; ; )
	{
		printf("月を入力 =>"); 
	
//		scanf("%d",&month);
		gets(seisuu);
		month=atoi(seisuu);
		
		if ( month > 12 || month <= 0 )
		{
			printf("1から12を入力してください\n");
		}
		else
		{
			break;
		}
	}
	
		printf("\n");
	

	uru( year);

	zeller( year, month);
	
	youbi = zeller( year, month);

	hyouzi( year, month, youbi);
	
}