////////////////////////////////////////////
//プログラム名：プログラム課題14          //
//作成者名    ：西浦 嶺                   //
//作成日      ：2017/5/                   //
//機能概要    ：10進数を10進文字列に変換  //
////////////////////////////////////////////


#include    <stdio.h>
#define     MAX    256
    /* ﾌﾟﾛﾄﾀｲﾌﾟ宣言 */
void itodec (int x,char *y ) ;



void main(void)
{
	int work;
	char buf[MAX];

	printf("Please input data =>");   //データを入力してください
	scanf("%d",&work);                //変換したい値（10進数）を入力
	
	itodec(work,buf);                 //実引数
	printf("\n" "moji =>");
	printf("%s\n",buf);               //10進文字列として表示
	printf("\n" "suuji=>");
	printf("%d\n",buf);
}

void itodec (int x,char *y ) 
{
  int i=0;
  int j=0;
  int t=0;	
  int work = x;
  char dec[10] = "0123456789";
  char buf[MAX];

	
  //if(work<0)                      //workが0より小さいなら（マイナスなら）
  //  {
  //  	work = work * -1;         //work×-1する（正の数にする）
 //   }
	

	if( work < 0 )
	{
		*y++ = '-';
		work *= -1;	
	}
	
	
  while(work > 0)                 //0になるまで繰り返す
	{
    
    j = work % 10;                // 入力した数値を10で割り、その余りと商をだす
    work = work / 10;             //元の数値と割った数値を置き換える
    buf[i] = dec[j];
    i++;
   }
  i--;

	
	//if(work<0)
	//{
//		work=work*-1;
//	}

    for(j=i; j>=0; j--)           //余りを逆順にしている
	  {
	  y[t]=buf[j];                //引数*ｙに渡す式を作らないといけない
    	t++;                      //bufは逆順に入るため--だけどｙはそのまま順なので++になる
	  }
	  i--;
	
//	if(work<0)
//	{
//		work=work*-1;
//	}
	
}