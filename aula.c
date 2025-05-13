#include <stdio.h>
// EXEMPLO DA AULA
/*void DetAntSuc(int num, int *psuc, int *pant){
    int suc, ant;
    *psuc = num+1;
    *pant = num-1;
    return;
}


int main(){
    int num, suc, ant;
    num = 5;
    DetAntSuc(num,&ant,&suc);

    return 0;
}*/
// exercicio 1
/*int divisaoInt (int dividendo, int divisor, int *resultado, int *resto){
    if(divisor != 0){
        *resultado = dividendo / divisor;
        *resto = dividendo % divisor;
        return 1;
    }
    else{
        if(dividendo != 0){
            return 0;
        }
        else{
            return -1;
        }
    }
}

int main(){
    int resto, resultado, dividendo, divisor, sit;
    dividendo = 10;
    divisor = 0;
    sit = divisaoInt(dividendo, divisor, &resultado, &resto);
   
    if(sit == 1){
        printf("%d / %d = %d :: resto = %d", dividendo, divisor, %resultado, &resto);
    }
    else if(sit == -1){
        printf("%d / %d = impossivel", dividendo, divisor);
    }
    else{
        printf("%d / %d = indetermincação", dividendo, divisor);
    }
    return 0;
}*/ //25104708360050,0

int dadosEstud (long int matr, int *ano, int *sem, int *estudante){
    int auxiliar;
    auxiliar = matr / 100000000000;
    *ano = auxiliar / 10;
    *sem = auxiliar % 10;
    *estudante = matr % 1000;    
}

int main(){
    int ano, sem, estudante;
    long int matr = 25104708360050; 
    dadosEstud(matr, &ano,&sem,&estudante);
    printf("O seu ano de começo é: 20%d\nSeu Semestre de começo é: %d°\nO seu número de estudante é: %d\n", ano, sem, estudante );
    
    return 0;
}