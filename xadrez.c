#include <stdio.h>

//Função recursiva para simular o movimento da Torre
void loopTorre(int numero){
	if (numero > 0){
		printf("Direita\n");
		loopTorre(numero - 1);
	}
}

// Função recursiva com loops aninhados para simular o movimento do Bispo
void loopBispo(int repeticoes) {
    if (repeticoes > 0) {
        // Loop externo: movimento vertical (para cima)
        for (int v = 0; v < 1; v++) {
            printf("Cima\n");  // Imprime "Cima" com quebra de linha
            // Loop interno: movimento horizontal (para a direita)
            for (int h = 0; h < 1; h++) {
                printf("Direita\n");  // Imprime "Direita" com quebra de linha
            }
        }
        // Chama recursivamente, decrementando a variável para continuar o movimento
        loopBispo(repeticoes - 1);
    }
}

// Função recursiva para simular o movimento da Rainha

void loopRainha(int numero){
	if (numero > 0) {
		printf("Cima Direita\n"); // Imprime Cima Direita com quebra de linha
		loopRainha(numero - 1); // Decrementa-se a varíavel para continuar o movimento
	}
}

int main(){
	printf("***Movimento das Peças de Xadrez***");
    printf("***Movimento da Torre***\n");
	loopTorre(5);
	printf("\n***Movimento da Bispo***\n");
	loopBispo(4);
	printf("\n***Movimento da Rainha***\n");
	loopRainha(8);
	printf("\n***Movimento do Cavalo***\n");

    // Movimento do Cavalo em L (Cima, Cima, Direita)
    int i, j;
    int movimentos = 1; // Número de movimentos do Cavalo

    do {
        // Primeira parte do movimento: Cima
        for(i = 0; i < 2; i++) {
            printf("Cima\n");
            // Condição adicional para simular o movimento em L
            if(i == 1) {
                for(j = 0; j < 1; j++) {
                    printf("Direita\n");
                }
            }
        }
    } while (--movimentos); // Loop para repetir o movimento

    return 0;
}