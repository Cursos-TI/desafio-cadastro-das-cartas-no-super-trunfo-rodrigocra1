#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void criar_carta(); // função de criar carta
void print_carta(); // função de imprimir carta
void compare();     //  Compara os atributos das cartas para decidir o atributo vencedor
void battle();      // batalha entre as cartas para decidir qual vence.

// Definindo variáveis das cartas
char estado[3], codigo_carta[50], cidade[100], estado2[3], codigo_carta2[50], cidade2[50];
int populacao1, pt_turisticos1, populacao2, pt_turisticos2, escolha_atributo1, escolha_atributo2;
double area, pib, area2, pib2;

// Execução das funções
int main(void)
{
    // Criar cartas
    criar_carta();
    printf("\n");

    // Print Cartas
    print_carta();
    printf("\n");

    // Compara cartas
    compare();

    // Batalha de cartas
    battle();

    return 0;
}
// Criar cartas pré-cadastradas
void criar_carta(void)
{
    strcpy(estado, "SP");
    strcpy(cidade, "São Paulo");
    populacao1 = 11450000;
    area = 1521;
    pib = 1600000000000;
    pt_turisticos1 = 36;

    strcpy(estado2, "RJ");
    strcpy(cidade2, "Rio de Janeiro");
    populacao2 = 6211000;
    area2 = 1200;
    pib2 = 949300000000;
    pt_turisticos2 = 58;
}

void print_carta(void)
{
    // Calculos densidade e PIB per capta
    float densidade = populacao1 / area, densidade2 = populacao2 / area2, pibpc = pib / populacao1, pibpc2 = pib2 / populacao2;

    printf("--==[ SUPER TRUNFO ]==--\n\n");
    printf("Visualize as cartas abaixo e depois escolha um atributo para jogar!\n\n");
    printf("Carta: 1\n\n"); // imprime carta 1 pré-cadastrada
    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao1);
    printf("Área: %.2lfkm2 \n", area);
    printf("PIB: %.lf R$\n", pib);
    printf("Pontos turísticos: %d\n", pt_turisticos1);
    printf("Densidade Populacional: %.2f hab/km2 \n", densidade);
    printf("PIB per capita: %.2fR$\n", pibpc);

    printf("\nCarta: 2\n\n"); // imprime carta 2 pré-cadastrada
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2lfkm2 \n", area2);
    printf("PIB: %.lf R$\n", pib2);
    printf("Pontos turísticos: %d\n", pt_turisticos2);
    printf("Densidade Populacional: %.2f hab/km2 \n", densidade2);
    printf("PIB per capita: %.2fR$\n", pibpc2);
}

void compare()
{
    // Calculos densidade e PIB per capta
    float densidade = populacao1 / area, densidade2 = populacao2 / area2, pibpc = pib / populacao1, pibpc2 = pib2 / populacao2;
    int resultado1;
    int resultado2;

    // Menu interativo para escolha dos atributos
    printf("Escolha o primeiro atributo:\n\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    scanf("%i", &escolha_atributo1);

    /* Menu dinâmico: remove o atributo escolhido anteriormente e invalida
    entradas diferentes das opções oferecidas */

    switch (escolha_atributo1)
    {
    case 1:
    {
        printf("\nEscolha o segundo atributo:\n\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos turísticos\n");
        printf("5. Densidade demográfica\n");
        scanf("%i", &escolha_atributo2);
        if (escolha_atributo2 != 2 && escolha_atributo2 != 3 && escolha_atributo2 != 4 && escolha_atributo2 != 5)
        {
            printf("Escolha inválida!\n");
            break;
        }
        break;
    }
    case 2:
    {
        printf("Escolha o segundo atributo:\n\n");
        printf("1. População\n");
        printf("3. PIB\n");
        printf("4. Pontos turísticos\n");
        printf("5. Densidade demográfica\n");
        scanf("%i", &escolha_atributo2);
        if (escolha_atributo2 != 1 && escolha_atributo2 != 3 && escolha_atributo2 != 4 && escolha_atributo2 != 5)
        {
            printf("Escolha inválida!\n");
            break;
        }
        break;
    }
    case 3:
    {
        printf("Escolha o segundo atributo:\n\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("4. Pontos turísticos\n");
        printf("5. Densidade demográfica\n");
        scanf("%i", &escolha_atributo2);
        if (escolha_atributo2 != 1 && escolha_atributo2 != 2 && escolha_atributo2 != 4 && escolha_atributo2 != 5)
        {
            printf("Escolha inválida!\n");
            break;
        }
        break;
    }
    case 4:
    {
        printf("Escolha o segundo atributo:\n\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("5. Densidade demográfica\n");
        scanf("%i", &escolha_atributo2);
        if (escolha_atributo2 != 1 && escolha_atributo2 != 2 && escolha_atributo2 != 3 && escolha_atributo2 != 5)
        {
            printf("Escolha inválida!\n");
            break;
        }
        break;
    }
    case 5:
    {
        printf("Escolha o segundo atributo:\n\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos turísticos\n");
        scanf("%i", &escolha_atributo2);

        if (escolha_atributo2 != 1 && escolha_atributo2 != 2 && escolha_atributo2 != 3 && escolha_atributo2 != 4)
        {
            printf("Escolha inválida!\n");
            break;
        }
        break;
    }
    // default impede entrada de input inválido.
    default:
    {
        if (escolha_atributo1 != 1 && escolha_atributo1 != 2 && escolha_atributo1 != 3 && escolha_atributo1 != 4)
        {
            printf("Escolha inválida!");
        }
        break;
    }
    }
}

// Batalha entre as cartas
void battle()
{
    /* Declaração das variáveis usadas nas comparações e nas conversões dos valores,
    para evitar um código muito extenso e repetitivo */

    int sum1_1 = 0, sum1_2 = 0, sum2_1 = 0, sum2_2 = 0;
    float densidade = populacao1 / area, densidade2 = populacao2 / area2;
    double mega_sum1, mega_sum2;

    char resultado[50];

    char atributo1[50];
    char atributo2[50];

    if (escolha_atributo1 == 1)
    {
        sum1_1 = populacao1;
        sum1_2 = populacao2;
        strcpy(atributo1, "População");
    }
    else if (escolha_atributo1 == 2)
    {
        sum1_1 = (int)area;
        sum1_2 = (int)area2;
        strcpy(atributo1, "Área");
    }
    else if (escolha_atributo1 == 3)
    {
        sum1_1 = (int)(pib / 1000000);  // Convertendo PIB para milhões para evitar overflow
        sum1_2 = (int)(pib2 / 1000000); 
        strcpy(atributo1, "PIB");
    }
    else if (escolha_atributo1 == 4)
    {
        sum1_1 = pt_turisticos1;
        sum1_2 = pt_turisticos2;
        strcpy(atributo1, "Pontos Turísticos");
    }
    else if (escolha_atributo1 == 5)
    {
        sum1_1 = (int)densidade;
        sum1_2 = (int)densidade2;
        strcpy(atributo1, "Densidade populacional");
    }

    if (escolha_atributo2 == 1)
    {
        sum2_1 = populacao1;
        sum2_2 = populacao2;
        strcpy(atributo2, "População");
    }
    else if (escolha_atributo2 == 2)
    {
        sum2_1 = (int)area;
        sum2_2 = (int)area2;
        strcpy(atributo2, "Área");
    }
    else if (escolha_atributo2 == 3)
    {
        sum2_1 = (int)(pib / 1000000);  // Convertendo PIB para milhões para evitar overflow
        sum2_2 = (int)(pib2 / 1000000); 
        strcpy(atributo2, "PIB");
    }
    else if (escolha_atributo2 == 4)
    {
        sum2_1 = pt_turisticos1;
        sum2_2 = pt_turisticos2;
        strcpy(atributo2, "Pontos Turísticos");
    }
    else if (escolha_atributo2 == 5)
    {
        sum2_1 = (int)densidade;
        sum2_2 = (int)densidade2;
        strcpy(atributo2, "Densidade populacional");
    }

    // Soma dos valores dos atributos para verificação da carta vencedora
    mega_sum1 = (double)sum1_1 + (double)sum2_1;
    mega_sum2 = (double)sum1_2 + (double)sum2_2;

    if (mega_sum1 > mega_sum2)
    {
        strcpy(resultado, "Carta 1 venceu!\n");
    }
    else if (mega_sum1 == mega_sum2)
    {
        strcpy(resultado, "Empate!\n");
    }
    else
    {
        strcpy(resultado, "Carta 2 venceu!\n");
    }

    /* Condições específicas para a eventualidade do usuário
    ter escolhido o atributo "densidade demográfica" */
    if (escolha_atributo1 == 5)
    {
        printf("\n%s VS. %s\n", cidade, cidade2);
        printf("Atributos: %s e %s.\n\n", atributo1, atributo2);

        printf("Comparando primeiro atributo:\n");
        printf("%s: Carta 1: %d e Carta 2: %d - Carta %i venceu!\n\n", atributo1, sum1_1, sum1_2, (sum1_1 < sum1_2) ? 1 : 2);
        printf("Comparando segundo atributo:\n");
        printf("%s: Carta 1: %d e Carta 2: %d - Carta %i venceu!\n", atributo2, sum2_1, sum2_2, (sum2_1 > sum2_2) ? 1 : 2);
        printf("\nResultado final\nCarta 1: %.2lf VS. Carta 2: %.2lf", mega_sum1, mega_sum2);

        printf("\n%s\n", resultado);
    }
    else if (escolha_atributo2 == 5)
    {
        printf("\n%s VS. %s\n", cidade, cidade2);
        printf("Atributos: %s e %s.\n\n", atributo1, atributo2);

        printf("Comparando primeiro atributo:\n");
        printf("%s: Carta 1: %d e Carta 2: %d - Carta %i venceu!\n\n", atributo1, sum1_1, sum1_2, (sum1_1 > sum1_2) ? 1 : 2);
        printf("Comparando segundo atributo:\n");
        printf("%s: Carta 1: %d e Carta 2: %d - Carta %i venceu!\n", atributo2, sum2_1, sum2_2, (sum2_1 < sum2_2) ? 1 : 2);
        printf("\nResultado final\nCarta 1: %.2lf VS. Carta 2: %.2lf", mega_sum1, mega_sum2);

        printf("\n%s\n", resultado);
    }
    // Condição padrão para comparação dos demais atributos
    else
    {
        printf("\n%s VS. %s\n", cidade, cidade2);
        printf("Atributos: %s e %s.\n\n", atributo1, atributo2);

        printf("Comparando primeiro atributo:\n");
        printf("%s: Carta 1: %d e Carta 2: %d - Carta %i venceu!\n\n", atributo1, sum1_1, sum1_2, (sum1_1 > sum1_2) ? 1 : 2);
        printf("Comparando segundo atributo:\n");
        printf("%s: Carta 1: %d e Carta 2: %d - Carta %i venceu!\n", atributo2, sum2_1, sum2_2, (sum2_1 > sum2_2) ? 1 : 2);
        printf("\nResultado final\nCarta 1: %.2lf VS. Carta 2: %.2lf", mega_sum1, mega_sum2);

        printf("\n%s\n", resultado);
    }
}
