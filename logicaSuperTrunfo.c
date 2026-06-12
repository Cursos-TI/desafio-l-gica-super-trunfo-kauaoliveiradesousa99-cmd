#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades

    // Usei 'char' simples para o Estado e Arrays de 'char' para strings maiores.
    // Usei 'int' para números inteiros (População) e 'float' para números com decimais.
    // Nada muito diferente do tema 1. A não ser o fator que agora as variaveis tem valores fixos que antes eram usados os Scanf


  char Estado1 = 'C', Estado2 = 'A';  
  char Cod_Cidade1[50] = "C01", Cod_Cidade2[50] = "A01"; 
  char Nome_cidade1[50] = "Fortaleza", Nome_cidade2[50] = "Maceió";
  int Populacao1 = 2578483, Populacao2 = 957916;
  float Area1 = 312.353 , Area2 = 509.295;
  float PIB1 = 86930000000 , PIB2 = 33750000000;
  int Pontos_Turisticos1 = 10, Pontos_Turisticos2 = 8;
  float densidade1, densidade2;
  float PIBpC1, PIBpC2;
  float Super_Poder1, Super_Poder2;
    

    // Área da Carta 1
    //É aqui que mais achei estranho, já que não precisei de printfs e scanfs juntos
printf("========================================= \n");
printf("==                                     == \n");
printf("==                                     == \n");
printf("==               CARTA 1               == \n");
printf("==                                     == \n");
printf("==                                     == \n");
printf("========================================= \n");


densidade1 = (float)  Populacao1/ Area1;
PIBpC1 = (float) PIB1 / Populacao1;
Super_Poder1 = (float) Populacao1 + Area1 + PIB1 + Pontos_Turisticos1 + PIBpC1 + (1.0f  / densidade1);


    printf ("O Estado é: %c  \n", Estado1);

    printf ("O Código da Cidade é: %s  \n", Cod_Cidade1);
    
    printf("O Nome da Cidade é: %s  \n", Nome_cidade1);

    printf("A população é: %d de pessoas \n", Populacao1);
// Nas informações da Área e do PIB eu coloquei indicadores após os "%"
    printf("A Área da Cidade é: %f Km²  \n", Area1);

    printf("O PIB da Cidade é: %f Reais  \n", PIB1);

    printf("Os Pontos Tristicos são: %d  \n", Pontos_Turisticos1);

    printf("Densiddade populacional: %.1f hab/km ²\n", densidade1);

     printf("O PIB per Capita: %.1f reais\n", PIBpC1);

     printf("O Super Poder da cidade é: %.2f\n", Super_Poder1);


densidade1 = (float)  Populacao1/ Area1;
PIBpC1 = (float) PIB1 / Populacao1;
Super_Poder1 = (float) Populacao1 + Area1 + PIB1 + Pontos_Turisticos1 + PIBpC1 + (1.0f  / densidade1);



// Área da Carta 2

printf("========================================= \n");
printf("==                                     == \n");
printf("==                                     == \n");
printf("==               CARTA 2               == \n");
printf("==                                     == \n");
printf("==                                     == \n");
printf("========================================= \n");

densidade2 = (float) Populacao2/ Area2;
PIBpC2 = (float) PIB2 / Populacao2;
Super_Poder2 = (float) Populacao2 + Area2 + PIB2 + Pontos_Turisticos2+ PIBpC2+ (1.0f  / densidade2);


    printf ("O Estado é: %c  \n", Estado2);

    printf ("O Código da Cidade é: %s  \n", Cod_Cidade2);
    
    printf("O Nome da Cidade é: %s  \n", Nome_cidade2);

    printf("A população é: %d de pessoas \n", Populacao2);

    printf("A Área da Cidade é: %f Km² \n", Area2);

    printf("O PIB da Cidade é: %f Reais \n", PIB2);

    printf("Os Pontos Tristicos são: %d  \n", Pontos_Turisticos2);

    printf("Densiddade populacional: %.1f hab/km² \n", densidade2);

    printf("O PIB per Capita: %.1f reais \n", PIBpC2);

    printf("O Super Poder da cidade é: %.2f\n", Super_Poder2);



    // Comparação de Cartas:
    //Comparador fixo. Escrito já no codigo. Pode ser trocado por qualquer outro atributo que tenha numeros.
    // Coloquei para printar o resultado junto da comparação. Assim o codigo fica mais limpo.

printf("========================================= \n");
printf("==             Resultado               == \n");
printf("==                da                   == \n");
printf("==             Comparação              == \n");
printf("========================================= \n");

   
if (Populacao1 > Populacao2) {
    printf("A cidade vencedora é: %s\n", Nome_cidade1);
} else {
    printf("A cidade vencedora é: %s\n", Nome_cidade2);
}


return 0;
}
