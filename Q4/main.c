#include <stdio.h>

int main() {
    int valor;
    int *p1;
    float temp;
    float *p2;
    char aux;
    char *nome = "Ponteiros";
    char *p3;
    int idade;
    int vetor[3];
    int *p4;
    int *p5;
    /* (a) */
    valor = 10; //valor recebe 10
    p1 = &valor; // p1 aponta para o endereço de valor
    *p1 = 20; // conteudo de p1 recebe 20
    printf("%d \n", valor); // será imprimido 20
    /* (b) */
    temp = 26.5; //temp recebe 26.5
    p2 = &temp; //p2 aponta para o endereço de temp
    *p2 = 29.0 ; //o conteúdo de p2 recebe 29.0
    printf("%.1f \n", temp); //será imprimido 29.0

    /* (c) */
    p3 = &nome[0]; //p3 aponta para o endereço da posição 0 do vetor nome
    aux = *p3; //aux recebe o conteúdo de p3
    printf("%c \n", aux); //será imprimido 'P',que é o valor da posição 0 do vetor nome
    /* (d) */
    p3 = &nome[4]; //p3 aponta para o endereço da posição 4 do vetor nome
    aux = *p3; //aux recebe o conteudo de p3
    printf("%c \n", aux); //será imprimido 'e', que é o valor da posição 4 do vetor nome
    /* (e) */
    p3 = nome; //p3 aponta para a posição 0 do vetor nome
    printf("%c \n", *p3); //será imprimido o valor do conteudo de p3, que é 'P'
    /* (f) */
    p3 = p3 + 4; //p3 vai caminhar mais 4 posições da memoria do vetor nome chegando a posição 5
    printf("%c \n", *p3);//será imprimido o conteúdo de p3, que é 'e'
    /* (g) */
    p3--; //p3 vai voltar uma posição
    printf("%c \n", *p3);//será imprimido o 't', que o valor do conteúdo do vetor na posição 3
    /* (h) */
    vetor[0] = 31;
    vetor[1] = 45;
    vetor[2] = 27;
    p4 = vetor; //p4 aponta para o endereço da posição 0 do vetor
    idade = *p4; //idade recebe o conteúdo de p4
    printf("%d \n", idade); //será imprimido o 31
    /* (i) */
    p5 = p4 + 1; //p5 apotará para a posição seguite ao que p4 estava apontando
    idade = *p5; //idade recebe o conteudo de p5
    printf("%d \n", idade); //será imprimido 45
    /* (j) */
    p4 = p5 + 1; //p4 agora aponta para a posição seguinte ao que p5 apontava
    idade = *p4; //idade recebe o conteúdo de p4
    printf("%d \n", idade);//imprimirá 27
    /* (l) */
    p4 = p4 - 2; //p4 volta duas posições
    idade = *p4; //idade recebe o conteúdo de p4
    printf("%d \n", idade);//imprimirá 31
    /* (m) */
    p5 = &vetor[2] - 1;//p5 vai apotar para a posição 1 do vetor
    printf("%d \n", *p5);//imprimirá 45
    /* (n) */
    p5++; //p5 aponta para a posição seguinte
    printf("%d \n", *p5);//imprime 27
    return(0);
}

