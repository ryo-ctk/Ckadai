
////////////////////////////////////////////
//プログラム名：プログラム課題11          //
//作成者名    ：西浦嶺                    //
//作成日      ：2017/4/25                 //
//機能概要    ：パスワード判定            //
////////////////////////////////////////////

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define BUFMAX 256

void main(void)
{
	static char password[BUFMAX] = "VICTORY"; //パスワード
	char	buf[BUFMAX];
	int		i=0;
	int		A;
	while(i<3)
	{
	printf("Please enter your password=>");//パスワード入力
	scanf("%s",buf);
        i++;
		for(A=0;A<=strlen(buf);A++)
		{
    /* アルファベットの小文字なら変換 */
    if(buf[A]>=97&&buf[A]<=122)
      buf[A]=buf[A]-32;
		}
		
	  if(strcmp(buf,password) == 0)//パスワード判定
	    {//一度目の入力
	 	   // i=0;
	    	printf("PASSWORD OK");//一致
	    	i=0;
		//return;
		break;//終了
		}
		//else
		//{
		// printf("Please enter your password=>");  //不一致のためもう一度入力	
		//}	
	}
	//printf("%d",i);
	if (i >= 3)
	{
		printf("PASSWORD NG\n");
	}	
}

 
