#include <stdio.h>

int main () {

    FILE *arquivo;
    char caractere;
    int tab = 0, espaco = 0, caracQuan = 0, newline = 0;
    arquivo = fopen("arquivo1.txt", "r");

    if ( arquivo != NULL) {
        while (1) {
            caractere = fgetc (arquivo);
            if ( caractere == EOF) {
                break;
            }
            if ( caractere != EOF) {
                caracQuan++;
            }
            if ( caractere == '\t') {
                tab++;
            }
            if ( caractere == '\n') {
                newline++;
            }
            if ( caractere == 32) {
                espaco++;
            }
        }
        printf("O arquivo tem:\n");
        printf("%d tabs;\n", tab);
        printf("%d espaços;\n", espaco);
        printf("%d newline;\n", newline);
        printf("%d caracteres;\n", caracQuan);
        fclose(arquivo);
    } else {
        printf("Não tankou e foi de cochilos...\n");
    }
    return 0;
}