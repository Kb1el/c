#include <stdio.h>
#include <stdbool.h>
//fun��o com retorno de valor tipo booleano
bool verificaPar(int numero)
{
	if (numero % 2 == 0){
	return true; //retorna true, indica que o valor � par
    } else {
	return false; //retorna false, indica que o valor �
  }
}
 int main(void)
{
 int numeroEntrada = 3;
 if (verificaPar(numeroEntrada))
 printf("\n Sim. O numero %d e PAR", numeroEntrada);
 else
 printf("\n Nao. O numero %d e IMPAR", numeroEntrada);
 return 0;
}
