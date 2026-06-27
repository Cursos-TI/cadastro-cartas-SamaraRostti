#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  //ADICIONEI AS VARIÁVEIS NO CODIGO
  char Estado;
  char Cod_carta[4];
  int Populacao, Num_pontos_P;
  float Area;
  float PIB;


  // Área para entrada de dados

  //COLOQUEI O PREENCHIMENTO DOS DADOS

  printf("Digite a letra do Estado (A a H): \n");
  scanf(" %c", &Estado);

  printf("Digite o codigo da carta (Ex: A01): \n");
  scanf("%s", Cod_carta);

  printf("Digite o tamanho da população: \n");
  scanf("%d", &Populacao);

  printf("Qual é o tamanho da área da cidade? \n");
  scanf("%f", &Area);

  printf("Qual o PIB da Cidade?");
  scanf("%f", &PIB);

  printf("Existem quantos pontos Turisticos na cidade? \n");
  scanf("%d", &Num_pontos_P);

  // Área para exibição dos dados da cidade

  //IMPRIMIR OQUE O USUARIO SELECIONOU

  printf("Estado: %c\n", Estado);
  printf("Codigo da Carta: %s \n", Cod_carta);
  printf("O tamanho da população é: %d Habitantes \n", Populacao);
  printf("O tamanho da área é: %.3f M²\n", Area);
  printf("O PIB da cidade é: R$%f Milhões\n", PIB);
  printf("A cidade possui: %d pontos turísticos\n", Num_pontos_P);

return 0;
}
 //FINALIZADO O EXERCICIO 