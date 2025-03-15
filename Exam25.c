#include <stdio.h> 
int main (){
    FILE*f1 = fopen("Data25.txt","r");
    int lag,lag2,head,lagsum;
    int i,j;

    fscanf(f1,"%d %d %d %d",&lag ,&lag2 ,&head ,&lagsum);
	printf("%d %d %d %d\n",lag ,lag2 ,head ,lagsum);
	for (i=1;i<head;i++){
	j=head-i;
		if (i * lag + j * lag2 == lagsum){
		    printf("Ans=%d %d",i ,j);
		    return 0;
		}
	}
		printf("AnsNO Slution");
		return 0;
}
