#include <stdio.h>
#include <string.h>
/*
int word2vec(char *pNomeTxtEntrada){

    char caractere[40];
    int i = 0, ver = 0;
    for (i = 0; i < tamanho; i++) {
        if ( caractere[i] != " ") {
            break;
        } else {
            caractere[i] = arquivo[??];
            ver++; 
        }
    }
    caractere[i] = '\0';
    if ( ver < 4 ) {
        // algo acontece;
    }
    
}
*/
int main () {

    char nomearq[20];
    int i = 0;
    printf("Bem-vindo ao programa que le o arquivo e te retorna palavra!\n");
    do
    {
        nomearq[i] = getchar();
    } while (nomearq[i] != '\n');
    nomearq[i] = '\0';
    i = 0;
    while (nomearq[i] != '\0'); {
        printf("passo!\n");
        printf("%c", );
        i++;
    }
    return 0;
}


// 1 PASSO, SEPARAR PRIMEIRO TODAS AS PALAVRAS;
// 2 PASSO, ABRIR UM OUTRO ARQUIVO PARA FAZER A VEREFICAÇÃO DELA;
// 3 PASSO, DEPOIS DE TUDO SEJA FELIZ;

//Int main serve para locaizar o nome do arquivo e jogar para uma função
//que passa por outra função, fazendo a verfiicação e assim vendo se o 
//arquivo é valido

//' 