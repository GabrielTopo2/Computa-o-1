//Fa�a um programa que leia do teclado um ano e imprima na tela se ele � ou n�o bissexto. Obs.: um ano ser� bissexto
//se: (a) for divis�vel por 400 OU (b) se for divis�vel por 4 e n�o o for por 100. Voc� deve fazer este exerc�cio usando
//apenas apenas uma estrutura if-else. Dica: explore o uso dos operadores l�gicos

#include <stdio.h>
int main()
{
    int a;
    int b,c,d;

    printf("Insira o numero do Ano: ");
    scanf("%d", &a);

    b=a%400;
    c=a%4;
    d=a%100;

    if (b==0 || (c==0 && d!=0))
    printf("Ano Bissexto");
    else
    printf("Ano nao Bissexto");

    return 0;
}
