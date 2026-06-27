#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  //ADICIONEI AS VARIÁVEIS NO CODIGO
  int Populacao, Num_pontos_P;
  float Area;
  float PIB;


  // Área para entrada de dados
  //COLOQUEI O PREENCHIMENTO DOS DADOS
  printf("Digite o tamanho da população: \n");
  scanf("%d", &Populacao);

  printf("Qual é o tamanho da área da cidade? \n");
  scanf("%f", &Area);

  printf("Qual o PIB da Cidade?");
  scanf("%f", &PIB);

  printf("Existem quantos pontos Turisticos na cidade? \n");
  scanf("%d", &Num_pontos_P);



  // Área para exibição dos dados da cidade

return 0;
} 
