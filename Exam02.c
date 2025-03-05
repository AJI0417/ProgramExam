#include"stdio.h"
#include"stdlib.h"

int main(){
	FILE *f1;
	char str[201];
	int i;
	f1 = fopen("Data02.txt","r");
	fgets(str,sizeof(str),f1);
		
	printf("%s\n",str);
	printf("Ans=");
		
		for(i = 0; str[i] != '\0'; i++){
			
			if(str[i] == 'a' || str[i] == 'l'){
				break;
			}
			
			printf("%c",str[i]);
		}
		
	fclose(f1);
} 
