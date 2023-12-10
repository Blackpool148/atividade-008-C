#include <stdio.h>

int main(){
	float salariodomes, horastrabalhadas, salarioporhora;
	
	printf("quanto o usuario recebe por hora? ");
	scanf("%f", &salarioporhora);
	printf("quantas horas de trabalho foram gastas? ");
	scanf("%f", &horastrabalhadas);
	
	salariodomes=salarioporhora*horastrabalhadas;
	
	printf("o salario do mes e? %.2f", salariodomes );
		
}
