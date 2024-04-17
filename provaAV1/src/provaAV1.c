/*
 ============================================================================
 Name        : provaaeds1_I.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int portaPremiada, portaEscolhida, portaVazia, i;
	char troca;
	printf("Bem vindo ao jogo do monty hall!\n");
	printf("Escolha uma porta entre 1 e 3: ");
	scanf("%d", &portaEscolhida);

	srand(time(NULL));
	portaPremiada = rand() % 3 + 1;

	do {
		portaVazia = rand() % 3 + 1;

	} while (i < 3 + 1);

	{
		if (i != portaPremiada && i != portaEscolhida) {
			i++;
		} else {
			portaVazia = i;
			i++;
		}
	}

	printf("Vamos abrir a porta %d!", portaVazia);
	printf("\nA porta %d não tem o prêmio\n", portaVazia);

	printf("Deseja trocar de porta? (s/n): ");
	scanf(" %c", &troca);

	if (troca == 's') {
		printf(
				"Digite um numero diferente da porta escolhida inicialmente(entre 1 e 3):");
		scanf("%d", &portaEscolhida);
	}
	if (troca == 'n') {
		printf("Você não trocou de porta!");
	}

	if (portaEscolhida == portaPremiada) {
		printf("\nParabéns você venceu!");
	} else {
		printf("\nVocê perdeu!");
	}
	printf("\nA porta premiada é %d!", portaPremiada);
	return 0;
}
