#include <stdio.h>

int main(){
 float grauscelsius, grausfarenheit;
	printf("os graus farenheit e? ");
	scanf("%f", &grausfarenheit);
	
	grauscelsius= (5 * (grausfarenheit-32) / 9);
	
	printf("os graus celsius sao:  %.2f", grauscelsius);
	
	return 0;
	
	
}
