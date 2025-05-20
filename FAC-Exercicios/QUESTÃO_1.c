#include <stdio.h>

// questao 3
#define TAM 5
/*void prencher(int v[], int n){
    int pos;
    for(pos = 0; pos < n; pos++){
        printf("N%d: ", pos+1);
        scanf("%d", &v[pos]);
    }
}*/

void contrario (int v[], int n){
    int pos;
    for(pos = n-1; pos >= 0; pos--){
        printf("%d ", v[pos]);
    }
    return;
}

int main(){
    int n;
    int v[TAM] = {1,2,3,4,5}; 

    //prencher(v, TAM);
    contrario(v, TAM);


    return 0;
}