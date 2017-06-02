////////////////////////////////////////////
//プログラム名：プログラム課題10          //
//作成者名    ：西浦嶺                    //
//作成日      ：2017/4/25                 //
//機能概要    ：バブルソート（昇順・降順）//
////////////////////////////////////////////

#include <stdio.h>


int main(void)
{

int data[5] = {3, 9, 21, 45,119 };

int i, j;

int dumy;

	
for(i = 0; i< 5; i++)
 {
printf("%d\n", data[i]);
 }

printf("\n");

for(i = 0; i < 5; i++)
	{
     for(j = i + 1; j < 5; j++)
		{
         if(data[i] > data[j])
			{
              dumy = data[i];
              data[i] = data[j];
              data[j] = dumy;
            }
         } 
     }

printf("\n");

for(i = 0; i < 5; i++)
	{
     for(j = i + 1; j < 5; j++)
		{
         if(data[i] < data[j])
         dumy = data[i];
         data[i] = data[j];
         data[j] = dumy;
        }
     }

for(i = 0; i < 5; i++)
	{
      printf("%d\n", data[i]);
    }

return 0;
}