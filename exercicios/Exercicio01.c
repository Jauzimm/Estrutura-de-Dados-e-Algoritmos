#include <stdio.h>

int main () {
    
    int numVeri, div; 


    printf("Digite o numero a ser verificado: ");
    scanf("%d", &numVeri);
    div = 0;
    for ( int i = 2; i < numVeri; i++) {
            printf("passou\n");
        if ( numVeri % i == 0) {
            printf("passou\n");
            div++;
            printf("%d\n", div);
            break;            
        } 
    }
    if ( div == 1 ) {
        printf("Numero não é primo\n");
    } else {
        printf("Numero é primo\n");
    }

    return 0;
}