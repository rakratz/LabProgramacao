/* Pontifícia Universidade Católica de Goiás
Disciplina: Programação de Computadores
Professor: Me. Ricardo Kratz
Autor: Fulano de Tal
Data: 12/02/2026
Descrição: Testes de Constantes
Versão: 1.0 */

#include <stdio.h>

#define TEXTO "Entrada e saida de dados."

int main(void) {
    printf("%s\n\n", TEXTO);

    int idade = 0;
    float altura = 0.0f;
    char nome[50] = "";

    printf("Digite a idade: ");
    scanf("%d", &idade);

    printf("Digite a altura: ");
    scanf("%f", &altura);

    printf("Digite o nome (sem espacos): ");
    scanf("%49s", nome);

    printf("\n--- DADOS INFORMADOS ---\n");
    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);

    return 0;
}

