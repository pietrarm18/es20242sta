#include <stdio.h>
int main(){
	int num;
	printf("Digite um numero: ");
	scanf("%d",&num);
	if(num % 5==0){
		printf("O numero %d eh div por 5");
	}else{
		printf("O numero %d nao eh div por 5");
	}
	
	return 0;
}
