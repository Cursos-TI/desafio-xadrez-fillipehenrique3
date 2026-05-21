#include <stdio.h>

void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

void moverBispo(int casas) {
    if (casas > 0) {
        for (int i = 1; i <= 1; i++) {
            printf("Cima, ");
            for (int j = 1; j <= 1; j++) {
                printf("Direita\n");
            }
        }
        moverBispo(casas - 1);
    }
}

int main() {
    printf("Movimento da Torre:\n");
    moverTorre(5);
    printf("\n");

    printf("Movimento da Rainha:\n");
    moverRainha(8);
    printf("\n");

    printf("Movimento do Bispo:\n");
    moverBispo(5);
    printf("\n");

    printf("Movimento do Cavalo:\n");
    for (int i = 1, j = 1; i <= 3; i++) {
        if (i == 3) {
            while (j > 0) {
                printf("Direita\n");
                j--;
            }
            break;
        }
        printf("Cima\n");
        if (i < 3) continue;
    }

    return 0;
}
