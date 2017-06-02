
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct FILE_BUF    //構造体の宣言
   { 
    char num[5];     //数字
    char kind;       //種別
    char crlf[2];    //改行コード
   }data;

 //ひとまず1、2を3にまとめる
 //test1,test2のデータをtest3に書き込む関数
 int mainb(void)
{
    //ファイル構造体へのポインタを宣言
    //読込み用ファイルポインタ:f1,f2
    //書き込み用ファイルポインタ:f3
    FILE *f1,*f2,*f3;
    char str[256];
	
    f1 = fopen("test1.dat","r");  //読み込みモードでファイルを開く
    f2 = fopen("test2.dat","r"); 
    f3 = fopen("test3.dat","w");  //書き込みモードでファイルを開く


    while(fgets(str,256,f1))
    {

        fputs(str,f3); //str に格納されている文字列をf3に書き込む
    }
	
	  while(fgets(str,256,f2))
    {

       
        fputs(str,f3); //str に格納されている文字列をf3に書き込む
    }

    fclose(f3);  //f3クローズ
   
    fclose(f1); //f1クローズ
	
	fclose(f2); //f2クローズ
   

}

///////////////////////////main////////////////////////////////////
int main()
{
	struct FILE_BUF data[8]; // 構造体変数宣言
	
    char *p1; //freadに使うポインタ（num）
    static char w1[5];  //work変数1（num）

    char *p2; //freadに使うポインタ（kind）
    static char w2;  //work変数2（kind）
   
    char *p3; //freadに使うポインタ（ctrl）
    static char w3[2];  //work変数3（ctrl）
	
    p1 = w1;
	p2 = &w2;
	p3 = w3;
	int i;
	int a=0;
	int b=0;
	
	//test3(f3)の中身をw1,2,3に格納する関数
    // 構造体読込
       FILE *f3 = fopen("test3.dat", "rb");  // 1.バイナリモードで読込ファイルオープン


	
	for(i=0;i<8;i++)
	{
       fread(p1, sizeof(char), 5, f3);    // char型5文字分読込(num)
		strcpy(data[i].num,w1);
       fread(p2, sizeof(char), 1, f3);    // char型1文字分読込(kind)
	   data[i].kind = w2;
       fread(p3, sizeof(char), 2, f3);   // char型3文字分読込(crlf)
	   strcpy(data[i].crlf,w3);
	  
		printf("%d\n",i );
		printf("%s",data ); 
	}
	printf("123\n");
	
	
		printf("rupe%s",data ); 
	
	              //配列に入っているものを確認
	fclose(f3);     // 3.読込ファイルクローズ

}

	
