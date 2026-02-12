/* Pontifícia Universidade Católica de Goiás
Disciplina: Programação de Computadores
Professor: Me. Ricardo Kratz
Autor: Fulano de Tal
Data: 12/02/2026
Descrição: Testes printf, sequências de escape e especificadores de formato
Versão: 1.0 */

#include <stdio.h>

int main(void) {
    int idade = 20;
    int numero = 255;
    float nota = 8.5f;
    double salario = 1234.56789;
    char letra = 'C';
    char nome[] = "Ricardo";

    // 1) Sequências de escape
    printf("=== SEQUENCIAS DE ESCAPE ===\n");
    printf("Quebra de linha: linha 1\nlinha 2\n\n");
    printf("Tabulacao (\\t):\tColuna A\tColuna B\tColuna C\n");
    printf("Retorno ao inicio (\\r): 12345\rABC\n");  // observe o efeito no terminal
    printf("Bipe (\\a): \a (talvez nao toque em alguns sistemas)\n");
    printf("Backspace (\\b): AB\bC  (resultado esperado: AC)\n\n");

    // 2) Especificadores de formato
    printf("=== ESPECIFICADORES DE FORMATO ===\n");
    printf("Nome (%%s): %s\n", nome);
    printf("Idade (%%d): %d\n", idade);
    printf("Letra (%%c): %c\n", letra);

    printf("\nInteiro em decimal (%%d): %d\n", numero);
    printf("Inteiro em hexadecimal (%%x): %x\n", numero);

    printf("\nFloat (%%f): %f\n", nota);
    printf("Float com 2 casas (%%.2f): %.2f\n", nota);

    printf("\nDouble (%%lf): %lf\n", salario);
    printf("Double com 2 casas (%%.2lf): %.2lf\n", salario);
    printf("Double em notacao cientifica (%%e): %e\n", salario);

    // 3) Misturando tudo (formatacao + texto)
    printf("\n=== RELATORIO FORMATADO ===\n");
    printf("Aluno: %s\tIdade: %d\tNota: %.1f\tSalario: %.2lf\tHex: %x\n",
           nome, idade, nota, salario, numero);

    return 0;
}
