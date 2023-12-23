#include <stdio.h>
#include <math.h>

/*Faça um Programa que peça 2 números inteiros e um número real.Calcule e mostre:
O produto do dobro do primeiro com metade do segundo.
A soma do triplo do primeiro com o terceiro.
O terceiro elevado ao cubo. 

o produto e o resultado da multiplicação
dobro do primeiro igual marcos * 2
a metade do segundo é igual a rafaella/2
o triplo do primeiro é numero1 *3 

*/ 
 
int main(){
	float numero1, numero2, numero3, matios, linha_4, linha_5, linha_6; 
	
	printf("digite o numero1:  ");
	scanf("%f", &numero1);
	printf("digite o numero2:  "); 
	scanf("%f", &numero2);
	printf("digite o numero3:  ");
	scanf("%f", &numero3);
	linha_4=(numero1*2)*(numero2/2);
	linha_5=(numero1*3)+numero3;
	linha_6=pow(numero3,3);
	printf("entao o resultado de tudo e? %f %f %f", linha_4, linha_5, linha_6);
	
	return 0;
	
	
}
