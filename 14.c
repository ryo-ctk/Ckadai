////////////////////////////////////////////
//�v���O�������F�v���O�����ۑ�14          //
//�쐬�Җ�    �F���Y ��                   //
//�쐬��      �F2017/5/                   //
//�@�\�T�v    �F10�i����10�i������ɕϊ�  //
////////////////////////////////////////////


#include    <stdio.h>
#define     MAX    256
    /* �������ߐ錾 */
void itodec (int x,char *y ) ;



void main(void)
{
	int work;
	char buf[MAX];

	printf("Please input data =>");   //�f�[�^����͂��Ă�������
	scanf("%d",&work);                //�ϊ��������l�i10�i���j�����
	
	itodec(work,buf);                 //������
	printf("\n" "moji =>");
	printf("%s\n",buf);               //10�i������Ƃ��ĕ\��
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

	
  //if(work<0)                      //work��0��菬�����Ȃ�i�}�C�i�X�Ȃ�j
  //  {
  //  	work = work * -1;         //work�~-1����i���̐��ɂ���j
 //   }
	

	if( work < 0 )
	{
		*y++ = '-';
		work *= -1;	
	}
	
	
  while(work > 0)                 //0�ɂȂ�܂ŌJ��Ԃ�
	{
    
    j = work % 10;                // ���͂������l��10�Ŋ���A���̗]��Ə�������
    work = work / 10;             //���̐��l�Ɗ��������l��u��������
    buf[i] = dec[j];
    i++;
   }
  i--;

	
	//if(work<0)
	//{
//		work=work*-1;
//	}

    for(j=i; j>=0; j--)           //�]����t���ɂ��Ă���
	  {
	  y[t]=buf[j];                //����*���ɓn���������Ȃ��Ƃ����Ȃ�
    	t++;                      //buf�͋t���ɓ��邽��--�����ǂ��͂��̂܂܏��Ȃ̂�++�ɂȂ�
	  }
	  i--;
	
//	if(work<0)
//	{
//		work=work*-1;
//	}
	
}