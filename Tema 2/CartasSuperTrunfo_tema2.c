#include <stdio.h>
#include <string.h>

/* Essa versão pode ser considerada mais simples;
ela imprime cada carta logo após o input do usuário. */

void criar_carta();  // função de criar carta
void print_carta();  // função de imprimir carta
void criar_carta2(); // função de criar carta2
void compare(); //  Compara as cartas para decidir a vencedora

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

    // Compara cartas
    compare();

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

}

void compare()
{
    printf("O atributo será: População\n\n");
    printf("Carta 1 - %s: %i\n", cidade, populacao1);
    printf("Carta 2 - %s: %i\n\n", cidade2, populacao2);
    if (populacao1 > populacao2)
    {
        printf("Carta 1 venceu!\n\n");
    }
    else
    {
        printf("Carta 2 venceu!\n\n");
    }
}
