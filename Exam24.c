#include <stdio.h>
#include <stdlib.h>

//�����t�� 
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
		
		//�j��]��J�Ʀr������ 
		for(i=1;i<=b;i++){
			sum *= a; 	//�p��Ʀra��1~b������ 
			result += (float)sum / (float)fac(i); //���谣�H���������G�ۥ[ 
		}
		printf("Ans:%.0f",result);	//��X���G 
	
	}else{
		printf("Error Open!");
		exit(0);
	}
	
	fclose(f1);
	return 0;
}
