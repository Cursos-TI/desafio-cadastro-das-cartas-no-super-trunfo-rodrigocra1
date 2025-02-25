#include <stdio.h>

/*Ja havia feito o código no meu repositório pessoal,
apenas copiei e colei aqui*/

/* Essa versão pode ser considerada mais simples;
ela imprime cada carta logo após o input do usuário,
ou seja, não salva as informações separadamente para imprimir depois. */

void criar_carta(); // função de criar carta
void print_carta(); // função de imprimir carta

// Definindo variáveis
char estado, codigo_carta[50], cidade[50];
int populacao, pt_turisticos;
float area, pib;
int carta = 1;

int main(void)
{
    do // repete a função de criar carta e imprimir carta assim que o usuário terminar seu input.
    {
        criar_carta();
        printf("\n");
        print_carta();
        printf("\n");
        carta++;
    } while (carta == 2); // número de cartas totais definido em 2.

    return 0;
}

void criar_carta(void)
{
    printf("Digite os dados para a carta %d: \n", carta);

    // Pedindo input do usuário
    printf("Código do estado: ");
    scanf(" %c", &estado);

    printf("Código da carta: ");
    scanf("%3s", codigo_carta);

    printf("Cidade: ");
    scanf("%s", cidade);

    printf("População: ");
    scanf("%d", &populacao);

    printf("Área: ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pt_turisticos);
}

void print_carta(void)
{
    printf("Carta: %d\n", carta); // imprime o número da carta

    // imprime resultados dos inputs:

    printf("Código do estado: %c\n", estado);
    printf("Código da carta: %3s\n", codigo_carta);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos turísticos: %d\n", pt_turisticos);
}