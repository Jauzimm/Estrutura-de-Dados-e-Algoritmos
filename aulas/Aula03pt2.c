#include <stdio.h>
#include <time.h>

int main() {
    time_t agora;
    struct tm *info_tempo;
    int soma;

    time(&agora);  // Obtém o tempo atual

    // Converte o tempo para uma estrutura de informações de tempo local
    info_tempo = localtime(&agora);
    soma = info_tempo->tm_hour + info_tempo->tm_min + info_tempo->tm_sec;
    printf("Soma = %d\n", soma);
    resultado / soma;
    return 0;
}