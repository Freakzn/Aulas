#include <stdio.h>

float calcMediaPond (float nt1, float nt2, float p1, float p2){
    return ((nt1 * p1 + nt2 * p2) / (p1 + p2));
}

int main(){
    int matricula, conta7, conta3;
    float prov, trab, media, contaAl;
    float menorNota=101
    float maiorNota=-101 

    printf("Digite a matricula ou 0 para finalizar: ");
    scanf("%d", &matricula);
    while(matricula != 0){

        contaAl ++; /*conta de alunos totais*/

        printf("Qual sua nota de prova? ");
        scanf("%f", &prov);
        printf("Qual sua nota de trabalho? ");
        scanf("%f", &trab);

        media = calcMediaPond(prov, trab, 0.85, 0.15);
        printf("O aluno com matricula: %d\n", matricula);
        printf("A média é: %.1f\n", media); /*calculo da média de um aluno*/

        printf("Digite a matricula ou 0 para finalizar: ");
        scanf("%d", &matricula); /*finalizaçao ou continuação do programa*/

        if(media >= 7)
            conta7++; /*conta das notas acimas de 7*/
        else if(media <= 3)
            conta3++; /*conta das notas abaixo de 3*/
    }
    /* (conta7 * 100.0 / contaAl) % em C*/
    printf("\n=== Resumo dos alunos ===\n");
    printf("A quantidade de alunos com nota > 7 é: %d ==> %.1f\n", conta7, conta7 * 100.0 / contaAl);
    printf("A quantidade de alunos com nota < 3 é: %d\n", conta3);



    return 0;
}