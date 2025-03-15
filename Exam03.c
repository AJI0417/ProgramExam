#include <stdio.h>

int main(void)
{
  FILE *f1=fopen("Data03.txt","r");
  
  char str1[100],str2[100];
  float num1,num2;

  if(f1 != NULL)
    {
     fscanf(f1,"%s%s",&str1,&str2);
     num1 = (15.0 * (3.0 / 8.0) * 10.0) / 3.0;
     printf("%s%.0f\n",str1,num1);
     num2 = (((6.53 * 5.0) + 3.0 )- 8.0);
     printf("%s%.0f",str2,num2);
    }
  else
    {
     printf("Open file failed!\n");
     exit(0);   //結束程式, #include <stdlib.h>
    }
  
  fclose(f1);	//關閉檔案
  
 return 0;
}

