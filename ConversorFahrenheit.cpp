#include<stdio.h>
#include<stdlib.h>

int main(){
	int Opcao = 0;
	float Fahrenheit, C;
	
	printf("1 - Fahrenheit p/ Graus || 2 - Graus p/ Fahrenheit \n");
	printf("Digite a opcao desejada: ");
	scanf("%i", &Opcao);
	system("cls");
	
	switch(Opcao)
	{
		case 1: 
			printf("Digite a temperatura em Fahrenheit: ");
			scanf("%f", &Fahrenheit);
	
			C = 5.0/9.0 * (Fahrenheit - 32);
			printf("A temperatura em Graus Celsius e: %.2f", C);
		break;
		
		case 2:
			printf("Digite a temperatura em Graus: ");
			scanf("%f", &C);
	
			Fahrenheit = (C * (9.0/5.0)) + 32;
			printf("A temperatura em Fahrenheit e: %.2f", Fahrenheit);
		break;
	}
}
