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
    int anoNascimento = 2000;

    printf("Valor inicial da idade e ano de nascimento: %d e %d.\n", idade, anoNascimento);

    printf("Digite uma idade: ");
    scanf("%d", &idade);

    printf("Digite uma ano de nascimento: ");
    scanf("%d", &anoNascimento);

    printf("Idade informada: %d e ano de nascimento informado: %d.\n", idade, anoNascimento);

    return 0;
}
