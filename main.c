#include <stdio.h>

int main() {
    char nome[30];
    char endereco[30];
    int idade;
    
    printf("Nome: ");
    fgets(nome, 30, stdin);
    
    printf("Endereco: ");
    fgets(endereco, 30, stdin);
    
    printf("Idade: ");
    scanf("%d", &idade);
    
    printf("\nNome: %s", nome);
    printf("Endereco: %s", endereco);
    printf("Idade: %d\n", idade);
    
    return 0;
}
