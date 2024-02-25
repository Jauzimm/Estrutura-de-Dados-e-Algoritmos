#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int tempo;
    int atraso;
} Voo;

int separa(Voo voolista[], int p, int r);
void quicksort(Voo voolista[], int p, int r);

int main () {

    //variaveis
    char coluna[70];
    int linhas = 0;
    char auxc[4];
    int auxi, auxid;
    int i = 0;

    //abre o arquivo
    FILE *arquivo = fopen("Airlines.csv", "r");
    if (arquivo == NULL) {
        printf("Nao foi possivel abrir o arquivo.\n");
        return 1;
    }
    //Pula a primeira linha
    fgets(coluna, sizeof(coluna), arquivo);
    //Conta o numero de linhas apartir da segunda
    while (fgets(coluna, sizeof(coluna), arquivo) != NULL) {
        linhas++;
    }
    //Aloca memoria para o typedef
    Voo *voolista = (Voo*)calloc(linhas, sizeof(Voo));
    Voo voovariavel;
    //Reposiciona o ponteiro que atualmente se encontra no final, para o inicio
    fseek(arquivo, 0, SEEK_SET);
    
    //separa os valores importantes
    while (fgets(coluna, sizeof(coluna), arquivo) != NULL) {
        fscanf(arquivo, "%d,%2s,%d,%3s,%3s,%d,%d,%d,%d", 
               &auxid, auxc, &auxi, auxc, auxc, &auxi, &auxi, 
               &voovariavel.tempo, &voovariavel.atraso);
        voolista[i] = voovariavel;
        i++;
    }
    fclose(arquivo);

    //cria um novo arquivo para transferir os dados separados
    FILE *arqnovo = fopen("AirlinesBunito.txt", "w+");
    if (arqnovo == NULL) {
        printf("Nao foi possivel abrir o arquivo.\n");
        return 1;
    }
    //organiza utilizando o quickshort
    quicksort (voolista, 0, linhas);
    //printa em ordem por tempo
    for (int i = 0; i < linhas; i++) {
      fprintf(arqnovo, "| %d | %d |\n", voolista[i].tempo, voolista[i].atraso);
    }

    return 0;
}

int separa(Voo voolista[], int p, int r) {
  int c = voolista[r].tempo; // pivô
  int j = p;
  Voo t;
  for (int k = p; k < r; ++k) {
    if (voolista[k].tempo <= c) {
      t = voolista[j];
      voolista[j] = voolista[k];
      voolista[k] = t;
      ++j;
    }
  } 
  t = voolista[j];
  voolista[j] = voolista[r];
  voolista[r] = t;
  return j;
}

void quicksort(Voo voolista[], int p, int r) {  
  if (p < r) {
    int j = separa(voolista, p, r);
    quicksort(voolista, p, j - 1);
    quicksort(voolista, j + 1, r);
  }
}