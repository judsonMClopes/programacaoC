#include <stdio.h>

float n1, n2, n3;
float media;

void entradaDados(){
    printf("Digite a primeira nota: \n");
    scanf("%f", &n1);
    printf("Digite a segunda nota: \n");
    scanf("%f", &n2);
    printf("Digite a terceira nota: \n");
    scanf("%f", &n3);
}
float calcularMedia(){
    media = (n1 + n2 + n3) /3;
    return media;
}
void verificarSituacao(){
    if(media >= 7){
    printf("Situação: Aprovado \n");
}
    else{
    printf("Situação: Reprovado \n");
}
}
void exibirMedia(){
    printf(" A média é:%.2f\n", media);
}
int main(){
    entradaDados();
    media = calcularMedia();
    exibirMedia();
    verificarSituacao();

    return 0;
}

