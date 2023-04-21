	#include <stdio.h>
	char menu(void) {
	  char opcaoDigitada;
	  printf("\n*-----------------------------*");
	  printf("\n* CADASTRO DE CLIENTES *");
	  printf("\n* *");
	  printf("\n* 1 - Consulta *");
	  printf("\n* 2 - Alteracao *");
	  printf("\n* 3 - Inclusao *");
	  printf("\n* 4 - Exclusao *");
	  printf("\n* 0 - Sair *");
	  printf("\n*-----------------------------*");
	  printf("\n* Selecione a opção: ");
	  opcaoDigitada=getchar(); //Le do teclado a opcao
	  return opcaoDigitada;
	}
	int main(void) {
	char opcao = menu();
	switch (opcao)
	{
	  case '1':
	    printf("\n Voce escolheu Consulta");
	    break;
	  case '2':
	    printf("\n Voce escolheu Alteracao");
	    break;
	  case '3':
	    printf("\n Voce escolheu Inclusao");
	    break;
	  case '4':
	    printf("\nVoce escolheu Exclusao");
	    break;
	  case '0':
	    printf("\n Voce escolheu SAIR");
	    break;
	default:
	    printf("Opção INVALIDA");
	  }
	return 0;
	}
