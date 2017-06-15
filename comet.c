#include<stdio.h>



int main()
{
  #if (1)
      // コンパイルされる部分
      printf("ここはコンパイルされます\n");
  #else
      // コンパイルされない部分
      printf("ここはコンパイルされません\n");
	あああああああ
  #endif

  #if 0
      // コンパイルされない部分
      printf("ここはコンパイルされません\n");
  #else
      // コンパイルされる部分
      printf("ここはコンパイルされます\n");
  #endif
} 