
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct FILE_BUF    //�\���̂̐錾
   { 
    char num[5];     //����
    char kind;       //���
    char crlf[2];    //���s�R�[�h
   }data;

 //�ЂƂ܂�1�A2��3�ɂ܂Ƃ߂�
 //test1,test2�̃f�[�^��test3�ɏ������ފ֐�
 int mainb(void)
{
    //�t�@�C���\���̂ւ̃|�C���^��錾
    //�Ǎ��ݗp�t�@�C���|�C���^:f1,f2
    //�������ݗp�t�@�C���|�C���^:f3
    FILE *f1,*f2,*f3;
    char str[256];
	
    f1 = fopen("test1.dat","r");  //�ǂݍ��݃��[�h�Ńt�@�C�����J��
    f2 = fopen("test2.dat","r"); 
    f3 = fopen("test3.dat","w");  //�������݃��[�h�Ńt�@�C�����J��


    while(fgets(str,256,f1))
    {

        fputs(str,f3); //str �Ɋi�[����Ă��镶�����f3�ɏ�������
    }
	
	  while(fgets(str,256,f2))
    {

       
        fputs(str,f3); //str �Ɋi�[����Ă��镶�����f3�ɏ�������
    }

    fclose(f3);  //f3�N���[�Y
   
    fclose(f1); //f1�N���[�Y
	
	fclose(f2); //f2�N���[�Y
   

}

///////////////////////////main////////////////////////////////////
int main()
{
	struct FILE_BUF data[8]; // �\���̕ϐ��錾
	
    char *p1; //fread�Ɏg���|�C���^�inum�j
    static char w1[5];  //work�ϐ�1�inum�j

    char *p2; //fread�Ɏg���|�C���^�ikind�j
    static char w2;  //work�ϐ�2�ikind�j
   
    char *p3; //fread�Ɏg���|�C���^�ictrl�j
    static char w3[2];  //work�ϐ�3�ictrl�j
	
    p1 = w1;
	p2 = &w2;
	p3 = w3;
	int i;
	int a=0;
	int b=0;
	
	//test3(f3)�̒��g��w1,2,3�Ɋi�[����֐�
    // �\���̓Ǎ�
       FILE *f3 = fopen("test3.dat", "rb");  // 1.�o�C�i�����[�h�œǍ��t�@�C���I�[�v��


	
	for(i=0;i<8;i++)
	{
       fread(p1, sizeof(char), 5, f3);    // char�^5�������Ǎ�(num)
		strcpy(data[i].num,w1);
       fread(p2, sizeof(char), 1, f3);    // char�^1�������Ǎ�(kind)
	   data[i].kind = w2;
       fread(p3, sizeof(char), 2, f3);   // char�^3�������Ǎ�(crlf)
	   strcpy(data[i].crlf,w3);
	  
		printf("%d\n",i );
		printf("%s",data ); 
	}
	printf("123\n");
	
	
		printf("rupe%s",data ); 
	
	              //�z��ɓ����Ă�����̂��m�F
	fclose(f3);     // 3.�Ǎ��t�@�C���N���[�Y

}

	
