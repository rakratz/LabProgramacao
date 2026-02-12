/* Pontifícia Universidade Católica de Goiás
Disciplina: Programação de Computadores
Professor: Me. Ricardo Kratz
Autor: Fulano de Tal
Data: 12/02/2026
Descrição: Testes de Operadores Aritméticos
Versão: 1.0 */

#include <stdio.h>

int main(void) {
    int a, b;
    int soma, subtr, mult, divis;

    printf("Digite o primeiro valor: ");
    scanf("%d", &a);

    printf("Digite o segundo valor: ");
    scanf("%d", &b);

    soma  = a + b;
    subtr = a - b;
    mult  = a * b;
    divis = a / b;   // divisao inteira (se a e b forem int)

    printf("\nResultados:\n");
    printf("Soma: %d\n", soma);
    printf("Subtracao: %d\n", subtr);
    printf("Multiplicacao: %d\n", mult);
    printf("Divisao (inteira): %d\n", divis);

    return 0;
}
