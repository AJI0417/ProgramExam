#include <stdio.h>
#include <stdlib.h>

//俱计场だ2秈
int int_to_bin(int num){
	
	int b,i,j=0,sum=0; 
	while(num > 0){
		b = num % 2;
		num = num / 2;
		for (i = 1; j >= i; i++)
		{
			b = b * 10;
		}
		sum += b;
		j++; 
	}
	return sum;
}

//计场だ2秈
void bin_to_int(float num){
	int count = 0;
	while(num != 0 && count < 3){
		num *= 2;
		int bit = (int)num;
		printf("%d",bit);
		num -= bit;
		count++;
	}
} 

int main(){
	float num;
	int i,b,j=0,sum=0;
	FILE *f1 = fopen("Data07.txt","r");
	
	if(f1 != NULL){
		
		fscanf(f1, "%f", &num);
		
		int a = (int)num; //俱计 
		float fa = num - a; //计 
		
		//块挡狦 
		printf("%.2f\n",num);
		printf("Ans=%d+",int_to_bin(a));
		bin_to_int(fa);
	
	}else{
		printf("Error Open!");
		exit(0);
	}
	
	fclose(f1);
	return 0;
}
