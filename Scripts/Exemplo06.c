/* Pontifícia Universidade Católica de Goiás
Disciplina: Programação de Computadores
Professor: Me. Ricardo Kratz
Autor: Fulano de Tal
Data: 12/02/2026
Descrição: Testes scanf, leitura de dados do usuário e formatação de entrada
Versão: 1.0 */

#include <stdio.h>

int main(void) {
    int idade = 0;

    printf("Valor inicial da idade: %d.\n", idade);

    printf("Digite uma idade: ");
    scanf("%d", &idade);

    printf("Idade informada: %d.\n", idade);

    return 0;
}
