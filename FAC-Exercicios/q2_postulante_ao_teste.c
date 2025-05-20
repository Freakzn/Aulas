// Q2 POSTULANTE AO TESTE

#include <stdio.h>

void percent_recom(int area, float cr, float *maximo, float *minimo){ // recebe a area do curso e guarda as % minimas e maximas da bolsa
    if(cr >= 9.0 && cr <= 10.0){ // se a nota for maior que 9 e menor que 10
        if(area == 1){ //  area 1 TecCient
        *minimo = 30.0;
        *maximo = 40.0;
        }
        else{ // area 2 Humanas
        *minimo = 30.0;
        *maximo = 35.0;
        }
    }
    else if(cr >= 8.0 && cr <= 8.9){ // se a nota estiver entre 8 e 8.9
        if(area == 1){ // TecCient
            *minimo = 10.0;
            *maximo = 15.0;
        }
        else{ // Humanas
            *minimo = 10.0;
            *maximo = 12.0;
        }
    }
    else if(cr >= 7.0 && cr <= 7.9){ // se a nota estiver entre 7 e 7.9 
        *minimo = 5.0;
        *maximo = 5.0;
        }
        else { // notas abaixo de 7
            *minimo = 0.0;
            *maximo = 0.0;
        }
}

void quebraMatr(int matr, int *area, int *curso, int *sequencial){ // quebra a matricula para descobrir as informações necessarias
    *area = matr / 10000;  // descobre a area do usuario
    *curso = (matr / 1000) % 10; // descobre o numero de cursos do usuario
    *sequencial = matr % 1000; // descobre a sua sequencia apos o ND (ex NDXXX -> 15250 -> 250)
}

float UmAluno(int matr, float cr){ // calcula o percentual da bolsa 
    int area, curso, sequencial;
    float minimo, maximo, percentual;

    quebraMatr(matr, &area, &curso, &sequencial); //chamada obrigatoria
    percent_recom(area, cr, &minimo, &maximo); // chamada obrigatoria
    percentual = minimo * 0.05 * curso; // calculo percentual
    if(percentual > maximo){ // caso o percentual passe do percentual maximo 
        percentual = maximo;
    }
    return (percentual);
}

int main(){
    int matr;
    float cr, percentual;

    printf("=== Recomendacao de Bolsas ===\n");
    printf("Digite a sua matricula: "); // primeira chamada para iniciar o loop
    scanf("%d", &matr);
    while(matr != 0){
        printf("Digite seu CR: ");
        scanf("%f", &cr);
        percentual = UmAluno(matr, cr); // transforma a função em uma variavel, para ficar mais fácil
        printf("A sua recomendacao de bolsa para o aluno %d e: %.1f%%", matr, percentual);
         printf("\nDigite a sua matricula: "); // segunda chamada paras continuar ou terminar o loop
        scanf("%d", &matr);
    }

    return 0;
}





