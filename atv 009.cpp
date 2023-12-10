#include <stdio.h>
/*
Faça um Programa que peça a temperatura em graus Farenheit, 
transforme e mostre a temperatura em graus Celsius. 
C = (5 * (F-32) / 9).
*/

int main(){
	float grausfarenheit, grauscelsius;
	printf("temperatura em graus Farenheit?  ");
	scanf("%f", &grausfarenheit);
	
	grauscelsius=(5* (grausfarenheit)-32 /9);
	
	printf("a quantidade de graus celsius e: %.2f", grauscelsius);
	
	return 0;
	
}
