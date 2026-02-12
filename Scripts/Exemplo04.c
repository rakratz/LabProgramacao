/* Pontifícia Universidade Católica de Goiás
Disciplina: Programação de Computadores
Professor: Me. Ricardo Kratz
Autor: Fulano de Tal
Data: 12/02/2026
Descrição: Testes printf, sequências de escape e especificadores de formato
Versão: 1.0 */

#include <stdio.h>

int main(void) {

    printf("Oi, tudo bem? testando o printf.\n");

    int inteiro = 10;
    double real = 3.14159265;
    char letra = 'a';
    char texto[] = "testando";

    printf("Valor inteiro: %d.\n", inteiro);
    printf("Valor real: %f.\n", real);
    printf("Valor real com apenas duas casas: %.2f.\n", real);
    printf("Dado de texto (char): %c.\n", letra);
    printf("Dado de texto (string): %s.\n", texto);

    return 0;
}
