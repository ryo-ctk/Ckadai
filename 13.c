
////////////////////////////////////////////
//プログラム名：プログラム課題13          //
//作成者名    ：西浦 嶺                   //
//作成日      ：2017/5/                   //
//機能概要    ：10進数を16進数に変換      //
////////////////////////////////////////////


#include    <stdio.h>
#define     MAX    256
    /* ﾌﾟﾛﾄﾀｲﾌﾟ宣言 */

void itohex (int x,char *y ) 
{
  int i=0,j=0;
  int num;
  char henkan[16] = "0123456789ABCDEF";
  char answer[10];

  printf("Please input data =>");//データを入れてください
  //scanf("%d",&num); //入力

  while(work > 0)//0になるまで繰り返す
	{
    // 入力した数値を16で割り、その余りと商をだす
    j = num % 16;
    num = num / 16;//元の数値と割った数値を置き換える
    answer[i] = henkan[j];
    i++;
   }
  i--;

  //printf("hexadecimal=>");//16進数に変換後の数字を出力

  for(j=i; j>=0; j--) {
   // printf("%c",answer[j]);
  }
 printf("\n");
}



void main(void)
{
	int work;
	char buf[MAX];
	printf("Please input data =>");
	scanf("%d",&work);
	itohex(work,buf);
	printf("%s\n",buf);
}
