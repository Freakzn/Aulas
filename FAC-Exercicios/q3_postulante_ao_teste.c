//Q3 POSTULANTE AO TESTE

#include <stdio.h>

void Ler (int * num, int *alt1, int *alt2){
    printf("Digite o número da dupla: ");
    scanf("%d", num);
    printf("Digite a altura do 1° participante (em cm): ");
    scanf("%d", alt1);
    printf("Digite a altura do 2° participante (em cm): ");
    scanf("%d", alt2);
}
int ordem (int *alt1, int *alt2){
    int maisAlt, maisBai, dif;
    if(*alt2 > *alt1){
        maisAlt = *alt2;
        maisBai = *alt1;
        dif = maisAlt - maisBai;
        return (dif);
    }
    else{
        maisAlt = *alt1;
        maisBai = *alt2;
        dif = maisAlt - maisBai;
        return (dif);
    }
}

int main(){
    int num, alt1, alt2;

    Ler(&num, &alt1, &alt2);
    while(num != 0){
        if(ordem(&alt1, &alt2) <= 15){
            printf("Você ficou no 1° dia!\n");
        }
        else{
            printf("Você ficou no 2° dia!\n");
        }
        Ler(&num, &alt1, &alt2);

    }

    return 0;
}








