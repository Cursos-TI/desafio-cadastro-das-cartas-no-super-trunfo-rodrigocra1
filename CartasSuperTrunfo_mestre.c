#include <stdio.h>
#include <string.h>

/* Essa versão pode ser considerada mais simples;
ela imprime cada carta logo após o input do usuário. */

void criar_carta();  // função de criar carta
void print_carta();  // função de imprimir carta
void criar_carta2(); // função de criar carta2

// Definindo variáveis carta 1
char estado, codigo_carta[50], cidade[100], estado2, codigo_carta2[50], cidade2[50];
int populacao1, pt_turisticos1, populacao2, pt_turisticos2;
float area, pib, area2, pib2;

// Definindo variáveis carta 2

int main(void)
{
    // Carta 1
    criar_carta();
    printf("\n");

    // Carta 2
    criar_carta2();
    printf("\n");

    // Print Cartas
    print_carta();
    printf("\n");

    return 0;
}

void criar_carta(void)
{
    printf("Digite os dados para a carta 1:\n\n");

    // Pedindo input do usuário
    printf("Código do estado: ");
    scanf(" %c", &estado);

    printf("Código da carta: ");
    scanf("%3s", codigo_carta);
    getchar();

    printf("Cidade: ");
    fgets(cidade, sizeof(cidade), stdin);
    cidade[strcspn(cidade, "\n")] = '\0';

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área: ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pt_turisticos1);
}

void criar_carta2(void)
{
    printf("Digite os dados para a carta 2:\n\n");

    // Pedindo input do usuário
    printf("Código do estado: ");
    scanf(" %c", &estado2);

    printf("Código da carta: ");
    scanf("%3s", codigo_carta2);
    getchar();

    printf("Cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pt_turisticos2);
}

void print_carta(void)
{
    // Calculos densidade e PIB per capta
    float densidade = populacao1 / area, densidade2 = populacao2 / area2, pibpc = pib / populacao1, pibpc2 = pib2 / populacao2;

    // Calculos super poder
    float super1 = populacao1 + area + pib + pt_turisticos1 + pibpc + (1 / densidade);
    float super2 = populacao2 + area2 + pib2 + pt_turisticos2 + pibpc2 + (1 / densidade2);

    printf("Carta: 1\n\n"); // imprime o número da carta

    // imprime resultados dos inputs:

    printf("Código do estado: %c\n", estado);
    printf("Código da carta: %3s\n", codigo_carta);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao1);
    printf("Área: %.2fkm2 \n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos turísticos: %d\n", pt_turisticos1);
    printf("Densidade Populacional: %.2f hab/km2 \n", densidade);
    printf("PIB per capita: %.2f reais\n", pibpc);
    printf("Super poder: %.2f\n\n", super1);

    printf("Carta: 2\n\n"); // imprime o número da carta

    // imprime resultados dos inputs
    printf("Código do estado: %c\n", estado2);
    printf("Código da carta: %3s\n", codigo_carta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2fkm2 \n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pt_turisticos2);
    printf("Densidade Populacional: %.2f hab/km2 \n", densidade2);
    printf("PIB per capita: %.2f reais\n", pibpc2);
    printf("Super poder: %.2f\n\n", super2);

    // Comparação das cartas -> se a comparação for verdadeira (1) imprime 1, se falsa (0) imprime 2.
    printf("População\n");
    printf("Carta 1: %d vs. Carta 2: %d -> Carta %d venceu!\n\n", populacao1, populacao2, (populacao1 > populacao2) ? 1 : 2);
    printf("Área\n");
    printf("Carta 1: %.2f vs. Carta 2: %.2f -> Carta %d venceu!\n\n", area, area2, (area > area2) ? 1 : 2);
    printf("PIB\n");
    printf("Carta 1: %.2f vs. Carta 2: %.2f-> Carta %d venceu!\n\n", pib, pib2, (pib > pib2) ? 1 : 2);
    printf("Pontos turísticos\n");
    printf("Carta 1: %d vs. Carta 2: %d -> Carta %d venceu!\n\n", pt_turisticos1, pt_turisticos2, (pt_turisticos1 > pt_turisticos2) ? 1 : 2);
    printf("Densidade Populaciona\n");
    printf("Carta 1: %.2f vs. Carta 2: %.2f -> Carta %d venceu!\n\n", densidade, densidade2, (densidade < densidade2) ? 1 : 2);
    printf("PIB per capita\n");
    printf("Carta 1: %.2f vs. Carta 2: %.2f -> Carta %d venceu!\n\n", pibpc, pibpc2, (pibpc > pibpc2) ? 1 : 2);
    printf("Super Poder\n");
    printf("Carta 1: %.2f vs. Carta 2: %.2f -> Carta %d venceu!\n\n", super1, super2, (super1 > super2) ? 1 : 2);
}
