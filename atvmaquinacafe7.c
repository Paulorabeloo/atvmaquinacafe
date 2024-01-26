#include <stdio.h>

int main(){
    int dinheiro, troco;
    printf("Digite a quantidade de dinheiro (apenas notas de 5):");
    scanf("%i", &dinheiro);
    troco = dinheiro % 7;
    printf("Seu trocado: %i R$.\n", troco);
return 0;
}
