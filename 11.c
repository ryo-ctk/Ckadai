
////////////////////////////////////////////
//�v���O�������F�v���O�����ۑ�11          //
//�쐬�Җ�    �F���Y��                    //
//�쐬��      �F2017/4/25                 //
//�@�\�T�v    �F�p�X���[�h����            //
////////////////////////////////////////////

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define BUFMAX 256

void main(void)
{
	static char password[BUFMAX] = "VICTORY"; //�p�X���[�h
	char	buf[BUFMAX];
	int		i=0;
	int		A;
	while(i<3)
	{
	printf("Please enter your password=>");//�p�X���[�h����
	scanf("%s",buf);
        i++;
		for(A=0;A<=strlen(buf);A++)
		{
    /* �A���t�@�x�b�g�̏������Ȃ�ϊ� */
    if(buf[A]>=97&&buf[A]<=122)
      buf[A]=buf[A]-32;
		}
		
	  if(strcmp(buf,password) == 0)//�p�X���[�h����
	    {//��x�ڂ̓���
	 	   // i=0;
	    	printf("PASSWORD OK");//��v
	    	i=0;
		//return;
		break;//�I��
		}
		//else
		//{
		// printf("Please enter your password=>");  //�s��v�̂��߂�����x����	
		//}	
	}
	//printf("%d",i);
	if (i >= 3)
	{
		printf("PASSWORD NG\n");
	}	
}

 
