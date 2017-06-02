
////////////////////////////////////////////
//プログラム名：プログラム課題12          //
//作成者名    ：西浦嶺                    //
//作成日      ：2017/4/26-27              //
//機能概要    ：2分探索                   //
////////////////////////////////////////////

#include <stdio.h>
#define MAX	10

void main(void)
{
	static int data[MAX] = {5,10,15,20,25,30,35,40,45,50};//データ
	int		work;            //入力する数値
	int		left = 0;        //左端
	int		right = 9;     //右端
	int		I;               //中央値
	int		j;
	printf("Please input data=>");// "データを入力してください"
	scanf("%d",&work);//入力
        
	    while(left <= right)//rightがleft以上の間継続
	{
        I = (left + right) / 2;//中央値=左端+右端÷2
        j++;                   //何回目の処理かカウント
		if (data[I] == work)   //入力した数値がデータ中央値と一致すれば
		{
			
         printf("%dbanme\n",j);//何番目か表示
           j=0;
			break;//終了
			
        }
		else if (data[I] < work) //データの中央値より入力した数値が大きければ
		{
            left = I + 1;//左端を中央値+1に変更
        } 
		else 
		{
            right = I - 1;//右を中央値-1に変更
        	
        }
    }
 // printf("%d\n",j);
	if ( j >= 1 )//IがMAX以上なら
	{
		printf("Not found");//見つかりませんと表示
	}	
}

 