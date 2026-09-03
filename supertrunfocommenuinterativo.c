#include <stdio.h>
#include <stdlib.h>
#include <time.h>
   int main (){
  
    char pais[50], pais1[50], pais2[50];
    int populacao, turistico, escolha, turistico1, turistico2;
    float area, pib, densidade, area1, area2, pib1, pib2, densidade1, densidade2, populacao1, populacao2;

    printf("### SUPER TRUNFO ###\n");
    printf("1. Iniciar o Trunfo\n");
    printf("2. Regras do Jogo\n");
    printf("3. Fechar o Jogo\n");
    printf("Escolha a sua opcao: ");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
    printf("Coloque o nome do pais: ");
    scanf("%s", pais1);
    printf("Coloque o nome do pais: ");
    scanf("%s", pais2);
    printf("Escolha um atributo para comparar:\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5.Densidade demografica\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &escolha);
    
    
    switch (escolha)
    {
    case 1:
        printf("Populacao do(a) %s: ", pais1);
        scanf("%f", &populacao1);
        printf("Populacao do(a) %s: ", pais2);
        scanf("%f", &populacao2);
        if (populacao1 > populacao2)
        {
         printf(" %s ganhou do(a) %s!\n", pais1, pais2);
        }else if (populacao2 > populacao1)
        {
         printf(" %s ganhou do(a) %s!\n", pais2, pais1);
        } else {
            printf("Empatou!\n");
        }
        break;
    case 2:
        printf("Area do(a) %s: ", pais1);
        scanf("%f", &area1);
        printf("Area do(a) %s: ", pais2);
        scanf("%f", &area2);
        if (area1 > area2)
        {
         printf(" %s ganhou do(a) %s!\n", pais1, pais2);
        }else if (area2 > area1){
            printf(" %s ganhou do(a) %s!\n", pais2, pais1);
        }else {
            printf("Empatou!\n");
        }
        break;
    case 3:
        printf("PIB do(a) %s!: ", pais1);
        scanf("%f", &pib1);
        printf("PIB do(a) %s!: ", pais2);
        scanf("%f", &pib2);
        if (pib1 > pib2)
        {
         printf("%s ganhou do(a) %s!\n", pais1, pais2);
        }else if (pib2 > pib1){
            printf("%s ganhou do(a) %s!\n", pais2, pais1);
        }else{
            printf("Empatou!");
        }
        break;
    case 4:
       printf("Pontos Turisticos do(a) %s: ", pais1);
       scanf("%d", &turistico1);
       printf("Pontos Turisticos do(a) %s: ", pais2);
       scanf("%d", &turistico2);
       if (turistico1 > turistico2)
       {
        printf("%s ganhou do(a) %s!\n", pais1, pais2);
       }else if (turistico2 > turistico1){
        printf("%s ganhou do(a) %s!\n", pais2, pais1);
       }else {
        printf("Empatou!");
       }
       break;
    case 5:
       printf("Densidade Demografica do(a): ", pais1);
       scanf("%f", &densidade1);
       printf("Densidade Demografica do(a): ", pais2);
       scanf("%f", &densidade2);
       if (densidade1 < densidade2)
       {
        printf("%s ganhou do(a) %s!\n", pais2, pais1);
       }else if (densidade2 < densidade1)
       {
        printf("%s ganhou do(a) %s!\n", pais1, pais2);
       }else
       {
        printf("Empatou!\n");
       }
       break;
       
    
    }break;
    case 2:
    printf("O Super Trunfo consiste em cada jogador comparar o atributo escolhido na rodada, quem tiver o maior numero (exceto na densidade), faz um ponto\n");
    break;
    case 3:
    printf("Fechando o jogo...");
    break;
    default:
    printf("Opcao Invalida!");
    break;
    }
    
    return 0;

}
