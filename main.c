#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[50], nomeH[50]="NaoDigitado", nomeM[50]="NaoDigitado";
    float altura, peso, idademG=0, idademM=0, idademH=0, idadeMvelho=0, idadeHvelho=0, imc, totalPorcentagem;
    int contH=0, contM=0, contG=0, contMabaixoP, idade, n=0, imcCont=0;
    while(n!=3)
    {
        printf("1. Homem\n");
        printf("2. Mulher\n");
        printf("3. Sair\n");
        printf("Digite o correspondende para inserir um novo homem ou mulher: ");
        scanf("%d", &n);
        if(n==1)
        {
            contH++;
            contG++;
            printf("Insira o nome do marginal: ");
            scanf("%s", &nome);
            printf("Insira seu peso: ");
            scanf("%f", &peso);
            printf("Insira sua altura: ");
            scanf("%f", &altura);
            imc=peso/(altura*altura);
            printf("imc = %f\n", imc);
            printf("Insira sua idade: ");
            scanf("%d", &idade);
            if(idade>idadeHvelho){
                idadeHvelho=idade;
                strcpy(nomeH, nome);
            }
            idademG+=idade;
            idademH+=idade;
        }
        if(n==2)
        {
            contM++;
            contG++;
            printf("Insira o nome da marginal: ");
            scanf("%s", &nome);
            printf("Insira seu peso: ");
            scanf("%f", &peso);
            printf("Insira sua altura: ");
            scanf("%f", &altura);
            imc=peso/(altura*altura);
            if(imc<20){
                imcCont++;
            }
            printf("imc = %f\n", imc);
            printf("Insira sua idade: ");
            scanf("%d", &idade);
            if(idade>idadeMvelho){
                idadeMvelho=idade;
                strcpy(nomeM, nome);
            }
            idademG+=idade;
            idademM+=idade;
        }
        system("cls");
    }
    contG=contH+contM;
    idademG=idademG/contG;
    idademH=idademH/contH;
    idademM=idademM/contM;
    totalPorcentagem=(float)imcCont/(float)contM*100;
    printf("Porcentagem = %.2f\n", totalPorcentagem);
    printf("Nome do homem mais velho: %s e sua idade: %f\n", nomeH, idadeHvelho);
    printf("Nome da mulher mais velha: %s e sua idade: %f\n", nomeM, idadeMvelho);
    printf("Idade media de Homem: %f, e Mulher: %f, e Geral: %f", idademH, idademM, idademG);

    return 0;
}
