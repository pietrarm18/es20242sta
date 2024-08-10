#include <stdio.h>
int main(){
		int valor,maior,menor;
		
		printf("primeiro numero: ");
		scanf("%d",&valor);
		maior = valor;
		menor = valor;
		
		printf("segundo numero: ");
		scanf("%d",&valor);
		if(valor > maior){
			maior = valor;
		}
		if(valor < menor){
			menor = valor;
		}
		
		printf("terceiro numero: ");
		scanf("%d",&valor);
		if(valor > maior){
			maior = valor;
		}
		if(valor < menor){
			menor = valor;
		}
		
			printf("quarto numero: ");
		scanf("%d",&valor);
		if(valor > maior){
			maior = valor;
		}
		if(valor < menor){
			menor = valor;
		}
		
			printf("quinto numero: ");
		scanf("%d",&valor);
		if(valor > maior){
			maior = valor;
		}
		if(valor < menor){
			menor = valor;
		}
		
		printf("maior = %d e menor = %d", maior,menor);
	
	return 0;
}
