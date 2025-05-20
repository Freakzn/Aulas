// Q1 POSTULANTE AO TESTE 

#include <stdio.h>

int obtem_matricula (int *pmatr){ // função para obter a matricula
    int matricula;
    printf("Digite sua matricula: "); 
    scanf("%d", &matricula);
    *pmatr = matricula; // passar a matricula para o ponteiro, assim podendo leva-lô para a main
    return(*pmatr); //return pra main com o valor da matircula
    if(matricula < 1001 || matricula > 9999){ // condição inválida da matrícula
        printf("Matricula inválida, digite novamente: ");
        scanf("%d", &matricula);
        *pmatr = matricula; // passar a matricula para o ponteiro, assim podendo leva-lô para a main
        return (*pmatr); //return pra main com o valor da matircula
    }
    
}

void quebraMatricula(int pmatr, int *estacao, int *sequencial){ //fução que quebra a matrícula para as suas 2 partes
    *estacao = pmatr / 1000;
    *sequencial = pmatr % 1000;
}
void determina_dia(int estacao, int sequencial, int *dia){ // determinação dos dias
    if(estacao <= 3){  //1° condição: se a estacão for menor ou igual a 3
        if(sequencial <= 500){ // se o sequencial for menor ou igual 500
            *dia = 5;
        }
        else{
            *dia = 4;
        }
    }
    else if(estacao >= 4 && estacao <= 6){ //2° condição: se a estação for maior ou igual a 4 e menor ou igual a 6
        if(sequencial <= 200){
            *dia = 2;
        }
        else{
            *dia = 6;
        }
    }
    else if(estacao >= 7 && estacao <= 9){ //3° terceira condição: se a estação for maior ou igual a 7 e menor ou igual a 9
        if(sequencial <= 800){
            *dia = 3;
        }
        else{
            *dia = 7;
        }
    }
}

int main(){
    int pmatr, sequencial, estacao, dia;
    obtem_matricula(&pmatr); //primeira chamada da matricula
    while(pmatr != 0){ //enquanto a matricula for diferente de zero
        quebraMatricula(pmatr, &estacao, &sequencial); //chamada da quebra matricula
        determina_dia(estacao, sequencial, &dia); //chamada para a determinação dos dias 
        printf("\nO dia do pagamento do decimo terceiro do funcionario %d e %d\n", pmatr, dia);
        obtem_matricula(&pmatr); //2° segunda chamada para continuar o loop
    }
    return 0;
}





