#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//fun��o com retorno de valor tipo booleano
bool verificaPar(int numero)
{
	if (numero % 2 == 0){
		return true; //retorna true, indica que o valor � par
	} else {
		return false; //retorna true, indica que o valor �
	}
}
int main(void)
{
	for (int numero = 1; numero <= 10; numero++)
	{
		printf("\n *--------------------------------------*");
		if (verificaPar(numero))
		{
			printf("\n OK Era esperado PAR");
		} else {
			printf("\n Nao retornou par");
			continue; //Para n�meros �mpares, o programa volata para a linha 15 e n�o excuta a linha 25
		}
		printf("\n produto numero par %d*2 e :%d", numero, numero * 2);
	}//fim do for
return 0;
}
