#include <stdio.h>
int main(void)
{
	float notas[4] = {4.5, 5.0, 4.0, 6.0};
	float soma = 0;
	for(int indice; indice < 4; indice++)
	//La�o de repeti��o para acessar as 4 posi��es do vetor
	{
		soma = soma + notas[indice];
	}
	printf("\n A media das notas e: %.2f", (soma / 4) );
	return 0;
}
