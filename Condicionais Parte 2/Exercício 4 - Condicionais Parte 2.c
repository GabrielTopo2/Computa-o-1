//Tarefa: Voc� deve escrever um programa que, dados o pre�o do litro de �lcool, o pre�o do litro de gasolina e os
//quil�metros por litro que um carro bi-combust�vel realiza com cada um desses combust�veis, determine se � mais
//econ�mico abastecer os carros da CTT com �lcool ou com gasolina. No caso de n�o haver diferen�a de custo entre
//abastecer com �lcool ou gasolina a CTT prefere utilizar gasolina.
//�Entrada: A entrada � composta por quatro n�meros reais, A, G, Rae Rg, representando respectivamente o pre�o
//por litro do �lcool, o pre�o por litro da gasolina, o rendimento (km/l) do carro utilizando �lcool e o rendimento
//(km/l) do carro utilizando gasolina.
//�Sa�da: Escrever o caractere �A� se � mais econ�mico abastecer a frota com �lcool ou o caractere �G� se � mais
//econ�mico ou indiferente abastecer a frota com gasolin


#include <stdio.h>
int main()
{
    float kma, kmg, a, g;
    float renda, rendg;

    printf("Preco da Gasolina: ");
    scanf("%f", &g);
    printf("Preco do Alcool: ");
    scanf("%f", &a);
    printf("Km por Litro de Gasolina: ");
    scanf("%f", &kmg);
    printf("Km por Litro de Alcool: ");
    scanf("%f", &kma);

    rendg=(kmg/g);
    renda=(kma/a);

    if (renda>rendg)
    printf("A");
    else
    printf("G");

    return 0;
}
