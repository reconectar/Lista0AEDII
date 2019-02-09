#include <stdio.h>
#include <stdlib.h>

void q1()
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

}

void q2(){
    int i,j,r;
    for(i=1;i<=10;i++){
        for(j=1;j<=10;j++){
            r=i*j;
            printf("%d * %d = %d\n", i , j, r);
        }
        printf("\n");
    }
}

void q3(){
    int n;
    float b=0,h,soma=0, area, perimetro;

    while(b>=0){
        printf("Insira o valor da base: ");
        scanf("%f", &b);
        if(b>=0){
            printf("Insira o valor da altura: ");
            scanf("%f", &h);
            area=b*h;
            perimetro=(b*2)+(h*2);
            soma+=area;
            printf("Perimetro = %f\n", perimetro);
            printf("Area = %f\n", area);
        }
    }
    printf("\nSomatorio = %f\n", soma);
}

void q4(){
    float r,x,y,i,p;

    printf("Insira o valor de x: ");
    scanf("%f", &x);
    printf("Insira o valor de y: ");
    scanf("%f", &y);
    printf("Insira o valor de p: ");
    scanf("%f", &p);
    for(i=x;i<=y;i=i+p){
        r=3.14*i*i;
        printf("Area de r = %f = %f\n", i, r);
    }
}

void q6(){
    float area,perimetro,b1,h1,b2,h2,p1,p2,i,j;

    printf("Insira o valor de b1: ");
    scanf("%f", &b1);
    printf("Insira o valor de b2: ");
    scanf("%f", &b2);
    printf("Insira o valor de p1: ");
    scanf("%f", &p1);
    printf("Insira o valor de h1: ");
    scanf("%f", &h1);
    printf("Insira o valor de h2: ");
    scanf("%f", &h2);
    printf("Insira o valor de p2: ");
    scanf("%f", &p2);

    for(i=b1;i<=b2;i=i+p1){
        for(j=h1;j<=h2;j=j+p2){
        area=i*j;
        perimetro=2*i+2*j;
        printf("area = %f\n", area);
        printf("perimetro = %f\n", perimetro);
        }
        printf("\n");
    }
}

void q7(){
    int b;
    float a, r=0;

    printf("Insira o valor de b: ");
    scanf("%d", &b);
    printf("Insira o valor de a: ");
    scanf("%f", &a);

    for(b;b!=0;b--){
        r+=a;
    }
    printf("Multiplicao = %f", r);
}

void q8(){
    int n,r=1;
    printf("Insira n: ");
    scanf("%d", &n);
    for(n;n>0;n--){
        r*=n;
    }
    printf("fatorial = %d", r);
}

void q9(){
    float v1[10],v2[5];
    int i;

    for(i=0;i<10;i++){
        printf("Insira um valor para a posicao %d do vetor 1: ", i+1);
        scanf("%f", &v1[i]);
    }
    for(i=0;i<5;i++){
        v2[i]=v1[i*2];
        printf("%f\n", v2[i]);
    }
}

void q10(){
    float v1[10],v2[10];
    int i,j;

    for(i=0;i<10;i++){
        printf("Insira um valor para a posicao %d do vetor 1: ", i+1);
        scanf("%f", &v1[i]);
    }
    i--;
    for(j=0;j<10;j++){
        v2[i]=v1[i];
        i--;
    }
}

void q11(){
    float v[10], aux;
    int i,j=9;

    for(i=0;i<10;i++){
        printf("Insira um valor para a posicao %d do vetor 1: ", i+1);
        scanf("%f", &v[i]);
    }
    for(i=0;i<5;i++){
        aux=v[i];
        v[i]=v[j];
        v[j]=aux;
        j--;
    }
}

void q12(){
    int i,j=0,v[100];
    for(i=1;i<=500;i++){
        if((i%5)==0){
            v[j]=i;
            j++;
        }
    }
    for(i=0;i<100;i++){
        printf("v[%d] = %d\n", i+1, v[i]);
    }
}

void q13(){
    float v[5][5];
    int i,j,cont=0,contaux=0;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("Insira v[%d][%d]: ", i+1, j+1);
            scanf("%f", &v[i][j]);
        }
    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(i==j){
                cont++;
                printf("%f\n",v[i][j]);
                while(cont!=contaux){
                    printf("\t");
                    contaux++;
                }
                contaux=0;

            }
        }
    }
}

void q14(){
    float v[5][5], soma=0;
    int i,j;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("Insira v[%d][%d]: ", i+1, j+1);
            scanf("%f", &v[i][j]);
            if(j>i){
                soma+=v[i][j];
            }
        }
    }
    printf("%f", soma);
}

int main(){

    //q1();

    //q2();

    //q3();

    //q4();

    //q6();

    //q7();

    //q8();

    //q9();

    //q10();

    //q11();

    //q12();

    //q13();

    //q14();

    return 0;

}
