#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int entradaDados()
{
	setlocale(LC_ALL, "Portuguese");
	int numeroEntrada;
	printf("\n Informe o numero base para tabuada: ");
	scanf("%d", &numeroEntrada);
	return numeroEntrada; //Retorna o valor digitado pelo usuario
}
//---------------------------------------------------------------
int main(void)
{
	int numeroDigitado = entradaDados();
	if( numeroDigitado < 1 || numeroDigitado > 10)
	{
		printf("\n Numero informado e invalido (Fora do Intervalo 1-10)");
		exit(0); //termina o programa;
	}
	printf("\n *---------------------------------------*");
	printf("\n Voce selecionou a tabuada do %d", &numeroDigitado);
	printf("\n *---------------------------------------*");
	for(int controle = 1; controle <=10; controle++)
	{
		printf("\n %d x %d = %d", controle, numeroDigitado, numeroDigitado * controle);
	}
	return 0;
}
