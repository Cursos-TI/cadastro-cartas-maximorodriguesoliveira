#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1, estado2;
  char codigo1[5], codigo2[5];
  char cidade1[50], cidade2[50];
  int populacao1, populacao2;
  float area1, area2;
  float pib1, pib2;
  int pontos1, pontos2;
  // Área para entrada de dados
  printf("Digite agora os dados da sua Carta 1\n");
  printf("Digite uma letra de 'A' a 'H' representando um estado\n");
  scanf(" %c", &estado1);
  printf("Digite o código da carta que deve ser a letra atribuída ao estado, digitada na opção anterior mais um numero de 01 a 04\n");
  scanf("%s", &codigo1);
  printf("Digite o nome da cidade\n");
  scanf("%s", &cidade1);
  printf("Digite o numero da população da cidade\n");
  scanf("%d", &populacao1);
  printf("Digite a área em quilometros quadrados da cidade\n");
  scanf("%f", &area1);
  printf("Digite o Produto Interno Bruto da cidade\n");
  scanf("%f", &pib1);
  printf("Digite o numero de pontos turísticos da cidade\n");
  scanf("%d", &pontos1);
  
  printf("Digite agora os dados da sua Carta 2\n");
  printf("Digite uma letra de 'A' a 'H' representando um estado\n");
  scanf(" %c", &estado2);
  printf("Digite o código da carta que deve ser a letra atribuída ao estado, digitada na opção anterior mais um numero de 01 a 04\n");
  scanf("%s", &codigo2);
  printf("Digite o nome da cidade\n");
  scanf("%s", &cidade2);
  printf("Digite o numero da população da cidade\n");
  scanf("%d", &populacao2);
  printf("Digite a área em quilometros quadrados da cidade\n");
  scanf("%f", &area2);
  printf("Digite o Produto Interno Bruto da cidade\n");
  scanf("%f", &pib2);
  printf("Digite o numero de pontos turísticos da cidade\n");
  scanf("%d", &pontos2);

  // Área para exibição dos dados da cidade
  printf("DESAFIO SUPER TRUNFO\n\n");
  printf("Carta 1\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", cidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f Km²\n", area1);
  printf("Pib: %.2f bilhões de reais\n", pib1);
  printf("Nùmero de Pontos Turísticos: %d\n", pontos1);
  printf("Densidade Demográfica: %.2f hab/km²\n", populacao1/area1);
  printf("PIB per capita:  %.2f reais\n\n", ((pib1*1000000000)/populacao1));
  
  
  printf("Carta 2\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f\ Km²\n", area2);
  printf("Pib: %.2f bilhões de reais\n", pib2);
  printf("Nùmero de Pontos Turísticos: %d\n\n", pontos2);
  printf("Densidade Demográfica: %.2f hab/km²\n", populacao2/area2);
  printf("PIB per capita:  %.2f reais\n\n", ((pib2*1000000000)/populacao2));
return 0;
} 
