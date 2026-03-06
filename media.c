#include <stdio.h>

float n1, n2, n3, n4;
float media;
// Crie um programa em C que calcule a média de 4 números.
//O programa deve ter 3 funções, igual ao exercício anterior:
//1️⃣ entradaDados()
void entradaDados(){
//Deve pedir ao usuário para digitar 4 números.
    printf("Digite um número para média \n");
        scanf("%f", &n1);
            printf("Digite um número para média \n");
                scanf("%f", &n2);
                    printf("Digite um número para média \n");
                        scanf("%f", &n3);
                            printf("Digite um número para média \n");
                                scanf("%f", &n4);
                                    
                                        
                                        }
                                        //2️⃣ calcularMedia()
                                        //Deve calcular a média dos números
                                        float calcularMedia(){
                                            media = (n1 + n2 + n3 + n4) /4;
                                                return media;
                                                }
                                                //3️⃣ exibirMedia()
                                                //Deve mostrar a média na tela.
                                                void exibirMedia(){
                                                    printf("A média é: %.2f\n", media);
                                                    }

                                                    int main(){
                                                    entradaDados();
                                                    media = calcularMedia();
                                                    exibirMedia();

                                                    return 0;
                                                    }

                                                    


 

