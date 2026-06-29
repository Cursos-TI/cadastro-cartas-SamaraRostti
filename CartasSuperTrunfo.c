#include <stdio.h>

int main() {
  // --- VARIÁVEIS DA CARTA 1 ---
  char Estado1;
  char Cod_carta1[4];
  int Populacao1, Num_pontos_P1;
  float Area1, PIB1;
  float Densidade1;
  float Pib_Capita1;

//FOI ADICIONADO AS 2 VARIAVEIS PARA CALCULAR DENSIDADE POPULACIONAL E PIB DAS CARTAS.
  // --- VARIÁVEIS DA CARTA 2 ---
  char Estado2;
  char Cod_carta2[4];
  int Populacao2, Num_pontos_P2;
  float Area2, PIB2;
  float Densidade2;
  float Pib_Capita2;

  



  // ================= CADASTRANDO A CARTA 1 =================
  printf("=== CADASTRO DA CARTA 1 ===\n");
  printf("Digite a letra do Estado (A a H): \n");
  scanf(" %c", &Estado1);
  printf("Digite o codigo da carta (Ex: A01): \n");
  scanf("%s", Cod_carta1);
  printf("Digite o tamanho da populacao: \n");
  scanf("%d", &Populacao1);
  printf("Qual e o tamanho da area? \n");
  scanf("%f", &Area1);
  printf("Qual o PIB? \n");
  scanf("%f", &PIB1);
  printf("Quantidade de pontos turisticos: \n");
  scanf("%d", &Num_pontos_P1);

  printf("\n"); // Só pula uma linha para separar

  // ================= CADASTRANDO A CARTA 2 =================
  printf("=== CADASTRO DA CARTA 2 ===\n");
  printf("Digite a letra do Estado (A a H): \n");
  scanf(" %c", &Estado2);
  printf("Digite o codigo da carta (Ex: A02): \n");
  scanf("%s", Cod_carta2);
  printf("Digite o tamanho da populacao: \n");
  scanf("%d", &Populacao2);
  printf("Qual e o tamanho da area? \n");
  scanf("%f", &Area2);
  printf("Qual o PIB? \n");
  scanf("%f", &PIB2);
  printf("Quantidade de pontos turisticos: \n");
  scanf("%d", &Num_pontos_P2);

//ADICIONEI O CODIGO DE /  PRA CALCULAR DENSIDADE POPULACIONAL E PIB DAS CARTAS. 
// Contas da Carta 1 (usa os dados da carta 1)
  Densidade1 = Populacao1 / Area1;
  Pib_Capita1 = PIB1 / Populacao1;

  // Contas da Carta 2 (usa os dados da carta 2)
  Densidade2 = Populacao2 / Area2;
  Pib_Capita2 = PIB2 / Populacao2;

//USEI "ESTILIZAÇÕES" PRA DEIXAR VISUALMENTE MAIS LEGÍVEL, MAS NÃO É NECESSÁRIO PARA O FUNCIONAMENTO DO CÓDIGO
  // ================= EXIBIÇÃO DOS DADOS =================
  printf("\n==================================\n");
  printf("       CARTAS CADASTRADAS         \n");
  printf("==================================\n");

  // Exibição da Carta 1
  printf("\n--- CARTA 1 ---\n");
  printf("Estado: %c\n", Estado1);
  printf("Codigo: %s\n", Cod_carta1);
  printf("Populacao: %d Habitantes\n", Populacao1);
  printf("Area: %.2f M²\n", Area1);
  printf("PIB: R$%.2f Milhoes\n", PIB1);
  printf("Pontos Turisticos: %d\n", Num_pontos_P1);
  printf("Densidade Populacional: %.2f hab/km²\n", Densidade1);
  printf("PIB per Capita: R$ %.2f\n", Pib_Capita1);

  // Exibição da Carta 2
  printf("\n--- CARTA 2 ---\n");
  printf("Estado: %c\n", Estado2);
  printf("Codigo: %s\n", Cod_carta2);
  printf("Populacao: %d Habitantes\n", Populacao2);
  printf("Area: %.2f M²\n", Area2);
  printf("PIB: R$%.2f Milhoes\n", PIB2);
  printf("Pontos Turisticos: %d\n", Num_pontos_P2);
  printf("Densidade Populacional: %.2f hab/km²\n", Densidade2);
  printf("PIB per Capita: R$ %.2f\n", Pib_Capita2);

  return 0;
  //adicionada segunda carta e finalizado nivel novato
}