#include <stdio.h>

int main() {
    
    // Cadastro das cartas
   
    
    // Carta 1
    char estado1;
    char codigo1[4];           
    char nomeCidade1[20];  
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Carta 2
    char estado2;
    char codigo2[4];           
    char nomeCidade2[20];  
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    //  Cadastro carta 1 
    printf("Cadastro da carta 1\n");
    printf("Digite o estado (A - H): ");
    scanf(" %c", &estado1);  

    printf("Digite o codigo: ");
    scanf("%3s", codigo1);  

    printf("Digite o nome da cidade: ");
    scanf("%19s", nomeCidade1); 

    printf("Digite a populacao: ");
    scanf("%lu", &populacao1);

    printf("Digite a area: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cadastro carta 2 
    printf("\nCadastro da carta 2\n");
    printf("Digite o estado (A - H): ");
    scanf(" %c", &estado2);  

    printf("Digite o codigo: ");
    scanf("%3s", codigo2);   

    printf("Digite o nome da cidade: ");
    scanf("%19s", nomeCidade2); 

    printf("Digite a populacao: ");
    scanf("%lu", &populacao2);

    printf("Digite a area: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    
    // Cálculos adicionais
    
    float densidadePopulacional1 = populacao1 / area1;
    float densidadePopulacional2 = populacao2 / area2;

    
    // Escolha dos atributos
    
    int atributo1, atributo2;

    printf("\nEscolha o primeiro atributo para comparar:\n");
    printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Pontos turisticos\n5 - Densidade populacional\n");
    printf("Digite a opcao: ");
    scanf("%d", &atributo1);

    printf("\nEscolha o segundo atributo para comparar (diferente do primeiro):\n");
    printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Pontos turisticos\n5 - Densidade populacional\n");
    printf("Digite a opcao: ");
    scanf("%d", &atributo2);

    
    // Armazenar valores escolhidos
    
    float valor1_attr1, valor2_attr1, valor1_attr2, valor2_attr2;

    // Primeiro atributo
    switch (atributo1) {
        case 1: valor1_attr1 = populacao1; valor2_attr1 = populacao2; break;
        case 2: valor1_attr1 = area1; valor2_attr1 = area2; break;
        case 3: valor1_attr1 = pib1; valor2_attr1 = pib2; break;
        case 4: valor1_attr1 = pontosTuristicos1; valor2_attr1 = pontosTuristicos2; break;
        case 5: valor1_attr1 = densidadePopulacional1; valor2_attr1 = densidadePopulacional2; break;
        default: printf("Opcao invalida!\n"); return 0;
    }

    // Segundo atributo
    switch (atributo2) {
        case 1: valor1_attr2 = populacao1; valor2_attr2 = populacao2; break;
        case 2: valor1_attr2 = area1; valor2_attr2 = area2; break;
        case 3: valor1_attr2 = pib1; valor2_attr2 = pib2; break;
        case 4: valor1_attr2 = pontosTuristicos1; valor2_attr2 = pontosTuristicos2; break;
        case 5: valor1_attr2 = densidadePopulacional1; valor2_attr2 = densidadePopulacional2; break;
        default: printf("Opcao invalida!\n"); return 0;
    }

    
    // Comparação dos atributos

    float soma1 = 0, soma2 = 0;

    // Primeiro atributo
    if (atributo1 == 5) { // densidade: menor vence
        if (valor1_attr1 < valor2_attr1) soma1 += 1; else if (valor2_attr1 < valor1_attr1) soma2 += 1; else soma1 += 0.5; soma2 += 0.5;
    } else { // maior vence
        if (valor1_attr1 > valor2_attr1) soma1 += 1; else if (valor2_attr1 > valor1_attr1) soma2 += 1; else soma1 += 0.5; soma2 += 0.5;
    }

    // Segundo atributo
    if (atributo2 == 5) { // densidade: menor vence
        if (valor1_attr2 < valor2_attr2) soma1 += 1; else if (valor2_attr2 < valor1_attr2) soma2 += 1; else soma1 += 0.5; soma2 += 0.5;
    } else { // maior vence
        if (valor1_attr2 > valor2_attr2) soma1 += 1; else if (valor2_attr2 > valor1_attr2) soma2 += 1; else soma1 += 0.5; soma2 += 0.5;
    }

    
    // Resultado final
    
    printf("\n=== Resultado da rodada ===\n");
    printf("Carta 1 - %s (%c)\n", nomeCidade1, estado1);
    printf("Carta 2 - %s (%c)\n", nomeCidade2, estado2);
    printf("Soma dos atributos: Carta 1 = %.1f, Carta 2 = %.1f\n", soma1, soma2);

    if (soma1 > soma2)
        printf("Resultado final: Carta 1 (%s) venceu!\n", nomeCidade1);
    else if (soma2 > soma1)
        printf("Resultado final: Carta 2 (%s) venceu!\n", nomeCidade2);
    else
        printf("Resultado final: Empate!\n");

    return 0;
}

