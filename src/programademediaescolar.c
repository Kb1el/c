#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
float nota1, nota2, nota3, nota4; //Variaveis GLOBAIS
//*------------------------------------------------------*
// Funcao para obtencao das quatro notas
//*------------------------------------------------------*
int entradaNotas()
{
	for(int controle = 1; controle <= 4; controle++)
	{
		printf("\n Informe a nota %d = ", controle);
		switch (controle)
		 {
		case 1:
			scanf("%f",&nota1);
			break;
		case 2:
			scanf("%f",&nota2);
			break;
		case 3:
			scanf("%f",&nota3);
			break;
		case 4:
			scanf("%f",&nota4);
		 	break;
		 	return 0;
	     }
	} //fim da estrutura for iniciada na linha 9
} //Aqui termina a funcao entradaOpcao()
//*------------------------------------------------------*
// Fun��o para obter do usu�rio
//*------------------------------------------------------*
bool entradaOpcao()
{
	int opcaoDigitada;
	int digitacaoOK = 1;
	printf("\n Voce deseja calcular outra media? (1=Sim/0=Nao): ");
	while (digitacaoOK == 1);
	{
		scanf("%d", opcaoDigitada); //Le do teclado a opcao
		if (opcaoDigitada == 1 || opcaoDigitada == 0 )
		{ digitacaoOK = 0;}
		else {
			digitacaoOK = 1;
			printf("\n Opcao invalida (Deve ser 1-Sim 0-Nao):%d", opcaoDigitada);
		}
	}//Fim da estrutura de repeti��o while iniciada na linha 37
	if (opcaoDigitada == 1)
	{
		return true; }
		else{
		 return false;}	
} //Aqui termina a fun��o entradaOpcao()
//*------------------------------------------------------*
//Fun��o principal do programa
//*------------------------------------------------------*
int main(void)
{
	float media, mediaTurma;
	 float acumulaMedia= 0;
	int qtdAlunos= 0;
	 bool continuaProcessamento = true;
	 while (continuaProcessamento)
	 {
	 	entradaNotas(); //Chama a fun��o para obter as 4 notas
	 	media = (nota1+nota2+nota3+nota4)/ 4;
	 	printf("\n *---------------------*");
	 	acumulaMedia = acumulaMedia + media;
	 	qtdAlunos = qtdAlunos + 1;
	 	if (media >= 7.0)
	 	{
	 		printf("\n Este Aluno foi APROVADO com media = %.2f", media);}
	 		else {
	 		printf("\n Este Aluno foi REPROVADO com media = %.2f", media);
			 }
		continuaProcessamento = entradaOpcao(); /*Chama fun��o para verificar se usuario quer continuar*/
	 }  //Fim da estrutura de repeti��o while iniciada na linha 62
	mediaTurma = acumulaMedia / qtdAlunos;
	printf("\n *==============================");
	printf("\n A m�dia da Turma foi = %f", mediaTurma);
	printf("\n Obrigado por usar o sistema");
	return 0;
}
