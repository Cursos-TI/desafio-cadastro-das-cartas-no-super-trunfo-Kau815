#include <stdio.h>

int main() {

    int Populacao, NPT;
    float KM, PIB;
    char estado;
    char cidade[20];
    char código[5];
    float media1, media2;

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

    media1 = (Populacao / KM);
    printf("A Densidade populacional é: %.2f HAB/KM²\n", media1 );

    media2 = (PIB / Populacao);
    printf("O PIB per Capita é: %2.f Reais\n", media2);

    printf("novo commit\n");


    return 0;
 
}
