#include <stdio.h>
int main(void)
{
	int soma = 20 + 30;
	int * somaParcial = &soma;
	printf("\nTeste de utilizacao de uso de Ponteiros");
	printf("\n*---------------------------------------*");
	printf("\n Valor da variavel 'soma'= %i", soma);
	printf("\n valor da variavel *SomaParcial = %i", * somaParcial);
	return 0;
}
