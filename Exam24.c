#include <stdio.h>
#include <stdlib.h>

//階乘含式 
int fac(int num){
	int i;
	int result = 1;
	for(i=1; i<=num;i++){
		result *= i;
	}
	return result;
}

int main(){
	
	int a,b,i,j,sum=1;
	float result;
	FILE *f1 = fopen("Data24.txt","r");
	
	if(f1 != NULL){
		fscanf(f1, "%d%d", &a, &b);
		printf("%d\n%d\n",a,b);
		
		//迴圈跑輸入數字的次數 
		for(i=1;i<=b;i++){
			sum *= a; 	//計算數字a的1~b的次方 
			result += (float)sum / (float)fac(i); //次方除以階乘的結果相加 
		}
		printf("Ans:%.0f",result);	//輸出結果 
	
	}else{
		printf("Error Open!");
		exit(0);
	}
	
	fclose(f1);
	return 0;
}
