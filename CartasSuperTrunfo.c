#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // Variáveis da carta 1
  char estado1;
  char codigo1[2];
  char nomedacidade1[50];
  int populacao1;
  float area1;
  float pib1;
  int pontosTuristicos1;

  // Variáveis da carta 2
  char estado2;
  char codigo2[2];
  char nomedacidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int pontosturisticos2;

  // Área para entrada de dados
  // cadastro da carta 1
  printf("Cadastro da Carta 1\n");
  printf("Estado (A-H): ");
  scanf(" %c", &estado1);

  printf("Código da Carta (ex: A01): ");
  scanf("%s", codigo1);

  printf("Nome da Cidade: ");
  scanf(" %[^\n]", nomedacidade1);

  printf("População: ");
  scanf(" %d", &populacao1);

  printf("Área (Km²): ");
  scanf(" %f", &area1);
  
  printf("PIB (em bilhões): ");
  scanf(" %f", &pib1);

  printf("Números de Pontos Turísticos: ");
  scanf(" %d", &pontosTuristicos1);

  // Cadastro da Carta 2
  printf("\n Cadastro da Carta 2 \n");
  printf("Estado (A-H): ");
  scanf(" %c", &estado2);

   printf("Código da Carta (ex: B02): ");
  scanf("%s", codigo2);

  printf("Nome da Cidade: ");
  scanf(" %[^\n]", nomedacidade2);

  printf("População: ");
  scanf(" %d", &populacao2);

  printf("Área (Km²): ");
  scanf(" %f", &area2);
  
  printf("PIB (em bilhões): ");
  scanf(" %f", &pib2);

  printf("Números de Pontos Turísticos: ");
  scanf(" %d", &pontosturisticos2);


  // Área para exibição dos dados da cidade
  printf("\n============================\n");
  printf("CARTA 1:\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", nomedacidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Número de Pontos Turisticos: %d\n", pontosTuristicos1);

  printf("\nCARTA 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", nomedacidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de Pontos Turisticos: %d\n", pontosturisticos2);

return 0;
} 
