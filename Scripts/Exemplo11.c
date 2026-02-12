/* Pontifícia Universidade Católica de Goiás
Disciplina: Programação de Computadores
Professor: Me. Ricardo Kratz
Autor: Fulano de Tal
Data: 12/02/2026
Descrição: Testes de Atribuições aritméticas
Versão: 1.0 */

#include <stdio.h>

int main(void) {
    int dado = 10;
    printf("Dado antes do incremento: %d.\n", dado);

    dado++;
    printf("Depois do incremento: %d.\n", dado);

    dado--;
    printf("Depois do decremento: %d.\n", dado);

    dado += 3;
    printf("Depois do incremento em 3 unidades: %d.\n", dado);

    dado -= 2;
    printf("Depois do decremento em 2 unidades: %d.\n", dado);

    dado *= 10;
    printf("Depois de multiplicar por 10: %d.\n", dado);

    return 0;
}
