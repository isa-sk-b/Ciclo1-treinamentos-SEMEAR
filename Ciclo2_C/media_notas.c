#include<stdlib.h>
#include<stdio.h>
#define DEBUG 1 // opção do programador

int main () {
    float nota1, nota2, nota3,media;
    printf("Digite a primeira nota: ");
    scanf("%f",&nota1);

    printf("Digite a segunda nota: ");
    scanf("%f",&nota2);

    printf("Digite a terceira nota: ");
    scanf("%f",&nota3);

    media = (nota1+nota2+nota3)/3;
    if(DEBUG) printf("Media: %.2f\n",media);
    if(media>5 || media==5) printf("Aluno aprovado!");
    else printf("Aluno reprovado :( ");

    return 0;
}