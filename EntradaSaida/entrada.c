#include <stdio.h>

int main(){
    int idade =30;
    float altura = 1.67;
    char opcao = 'W';
    char nome[20] = "Welliton";

    //Sintaxe padrão printf
    //printf("texto com formatação", variavel1, variavel2, ...);

    printf("A idade do %s é: %d\n", nome, idade);
    printf("A altura é: %e\n", altura);
    printf("A opção é: %c\n", opcao);

    /*
    printf("%formato1 %formato2 %formato3", variavel1, variavel2, variavel3);

    %d: Imprime um inteiro no formato decimal.
    %i: Equivalente a %d.
    %f: Imprime um número de ponto flutuante no formato padrão.
    %e: Imprime um número de ponto flutuante na notação científica.
    %c: Imprime um único caractere.
    %s: Imprime uma cadeia (string) de caracteres.
    */
}