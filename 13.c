
////////////////////////////////////////////
//�v���O�������F�v���O�����ۑ�13          //
//�쐬�Җ�    �F���Y ��                   //
//�쐬��      �F2017/5/                   //
//�@�\�T�v    �F10�i����16�i���ɕϊ�      //
////////////////////////////////////////////


#include    <stdio.h>
#define     MAX    256
    /* �������ߐ錾 */

void itohex (int x,char *y ) 
{
  int i=0,j=0;
  int num;
  char henkan[16] = "0123456789ABCDEF";
  char answer[10];

  printf("Please input data =>");//�f�[�^�����Ă�������
  //scanf("%d",&num); //����

  while(work > 0)//0�ɂȂ�܂ŌJ��Ԃ�
	{
    // ���͂������l��16�Ŋ���A���̗]��Ə�������
    j = num % 16;
    num = num / 16;//���̐��l�Ɗ��������l��u��������
    answer[i] = henkan[j];
    i++;
   }
  i--;

  //printf("hexadecimal=>");//16�i���ɕϊ���̐������o��

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
