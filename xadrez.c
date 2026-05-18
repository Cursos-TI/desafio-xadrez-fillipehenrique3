#include <stdio.h>

int main() {
    
    int Bispo = 5;
    int Torre = 5;
    int Rainha = 8;
    
    printf("Movimentação Bispo\n");
    for (int b = 0; b < Bispo; b++)
    {
        printf("Direita, Cima\n");
        
    }
    
    printf("Movimentação Torre\n");
    
    int t = 0;
    while(t < Torre)
    {
    printf("Direita\n");
    t++;
        
    }
    
    printf("Movimentação Rainha");
    int r = 0;
    do{ 
        printf("Esquerda\n");
        r++;
    }
    while(r < Rainha);
    return 0;
}
