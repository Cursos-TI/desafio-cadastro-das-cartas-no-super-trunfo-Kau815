#include <stdio.h>

int main() {

    int Populacao, NPT;
    float KM, PIB;
    char estado;
    char cidade[20];
    char código[5];

    printf("Digite seu Estado: \n");
    scanf("%s", &estado);

    printf("Digite seu Código: \n");
    scanf("%s", &código);

    printf("Digite sua Cidade: \n");
    scanf("%s", &cidade);

    printf("Digite sua Área em KM²: \n");
    scanf("%f", &KM);

    printf("Digite sua População: \n");
    scanf("%f", &Populacao);

    printf("Digite seus Pontos Turísticos: \n");
    scanf("%d", &NPT);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    printf("Novo commit \n");


    return 0;
 
}
