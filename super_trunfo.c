#include <stdio.h>
 
int main(){
int população, numero_de_pontos_turisticos;
char carta_1[10], estado[50], codigo_da_carta[50], nome_da_cidade[50];
float pib, area_em_km²;

printf("Carta 1: \n");

printf("Digite o estado: \n");
scanf("%s", &estado);

printf("codigo da carta: \n");
scanf("%s", &codigo_da_carta);

printf("nome da cidade: \n");
scanf("%s", &nome_da_cidade);

printf("Digite a população: \n");
scanf("%d", &população);

printf("area em km²: \n");
scanf("%s", &area_em_km²);

printf("Digite o pib: \n");
scanf("%f", &pib);

printf("Digite o numero de pontos turisticos: \n");
scanf("%d", &numero_de_pontos_turisticos);

printf("Carta 1: %s\n");
printf("estado: %s\n", estado);
printf("codigo da carta: %s\n", codigo_da_carta);
printf("nome da cidade: %s\n", nome_da_cidade);
printf("população: %d\n", população);
printf("area em km²: %s\n", area_em_km²);
printf("pib: %f\n", pib);
printf("numero de pontos turisticos: %d\n", numero_de_pontos_turisticos);


return 0;

}   
