
////////////////////////////////////////////
//�v���O�������F�v���O�����ۑ�12          //
//�쐬�Җ�    �F���Y��                    //
//�쐬��      �F2017/4/26-27              //
//�@�\�T�v    �F2���T��                   //
////////////////////////////////////////////

#include <stdio.h>
#define MAX	10

void main(void)
{
	static int data[MAX] = {5,10,15,20,25,30,35,40,45,50};//�f�[�^
	int		work;            //���͂��鐔�l
	int		left = 0;        //���[
	int		right = 9;     //�E�[
	int		I;               //�����l
	int		j;
	printf("Please input data=>");// "�f�[�^����͂��Ă�������"
	scanf("%d",&work);//����
        
	    while(left <= right)//right��left�ȏ�̊Ԍp��
	{
        I = (left + right) / 2;//�����l=���[+�E�[��2
        j++;                   //����ڂ̏������J�E���g
		if (data[I] == work)   //���͂������l���f�[�^�����l�ƈ�v�����
		{
			
         printf("%dbanme\n",j);//���Ԗڂ��\��
           j=0;
			break;//�I��
			
        }
		else if (data[I] < work) //�f�[�^�̒����l�����͂������l���傫�����
		{
            left = I + 1;//���[�𒆉��l+1�ɕύX
        } 
		else 
		{
            right = I - 1;//�E�𒆉��l-1�ɕύX
        	
        }
    }
 // printf("%d\n",j);
	if ( j >= 1 )//I��MAX�ȏ�Ȃ�
	{
		printf("Not found");//������܂���ƕ\��
	}	
}

 