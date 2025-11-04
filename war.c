//desafio novato
#include <stdio.h>
#include <string.h>

#define TAMANHO 5
#define TAM_NOME 20
#define TAM_COR 10

struct Territorio {
    char nome[TAM_NOME];
    char cor_exercito[TAM_COR];
    int numero_tropas;
};

int main() {
    struct Territorio territorios[TAMANHO] = {
        {"America", "Azul", 150},
        {"Europa", "Vermelho", 200},
        {"Asia", "Verde", 300},
        {"Africa", "Amarelo", 120},
        {"Oceania", "Roxo", 80}
    };
    
    for(int i = 0; i < TAMANHO; i++) {
        printf("%s | %s | %d tropas\n", 
               territorios[i].nome, 
               territorios[i].cor_exercito, 
               territorios[i].numero_tropas);
    }
    
    return 0;
}