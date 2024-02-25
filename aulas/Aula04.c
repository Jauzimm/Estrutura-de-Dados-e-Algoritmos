#include <stdio.h>

int main () {

    FILE *fp;
    char ch;
    fp = fopen("Aula04.c", "r");

    if ( fp != NULL) {
        while (1) {
            ch = fgetc (fp);
            if (ch == EOF)
            {
                break;
            }
            printf("%c",ch);
        }
        printf("\n");
        fclose (fp);
    } else {
        printf("Não tankou e foi de cochilos...\n");
    }
    return 0;
}