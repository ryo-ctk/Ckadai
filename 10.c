////////////////////////////////////////////
//�v���O�������F�v���O�����ۑ�10          //
//�쐬�Җ�    �F���Y��                    //
//�쐬��      �F2017/4/25                 //
//�@�\�T�v    �F�o�u���\�[�g�i�����E�~���j//
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