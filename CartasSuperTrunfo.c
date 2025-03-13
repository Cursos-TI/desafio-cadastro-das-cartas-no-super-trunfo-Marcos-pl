#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.


    // Declaração de variáveis para armazenar os dados de cada carta

    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[100], cidade2[100]; 
    int populacao1, populacao2; 
    float area1, area2; 
    float pib1, pib2; 
    int pontos1, pontos2; 

    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

     // Cadastro da primeira carta
     printf("Digite os dados da primeira carta:\n");
     printf("Estado (A a H): ");
     scanf("%c", &estado1); 
     printf("Código (por exemplo A01): ");
     scanf("%s", codigo1);
     printf("Nome da Cidade: ");
     scanf(" %[^\n]", cidade1);
     printf("População: ");
     scanf("%d", &populacao1);
     printf("Área (em km²): ");
     scanf("%f", &area1);
     printf("PIB (em bilhões de reais): ");
     scanf("%f", &pib1);
     printf("Número de Pontos Turísticos: ");
     scanf("%d", &pontos1);
 
     // Cadastro da segunda carta
     printf("\nDigite os dados da segunda carta:\n");
     printf("Estado (A a H): ");
     scanf("%c", &estado2);
     printf("Código (por exemplo B03): ");
     scanf("%s", codigo2);
     printf("Nome da Cidade: ");
     scanf(" %[^\n]", cidade2);
     printf("População: ");
     scanf("%d", &populacao2);
     printf("Área (em km²): ");
     scanf("%f", &area2);
     printf("PIB (em bilhões de reais): ");
     scanf("%f", &pib2);
     printf("Número de Pontos Turísticos: ");
     scanf("%d\n", &pontos2);
 
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    // Exibição dos dados de cada carta

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);

    return 0;
}
