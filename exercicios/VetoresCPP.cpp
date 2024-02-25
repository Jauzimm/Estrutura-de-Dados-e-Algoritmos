#include <iostream>
 
int* CriaVetInt(int tamanho);
float* CriaVetFloat(int tamanho);

int main () {

    int tamanho;

    std::cout << "Indique o tamanho do vetor int: ";
    std::cin >> tamanho;
    int* ptrI = CriaVetInt(tamanho);
    std::cout << "Ponteiro: " << ptrI << '\n';

    std::cout << "Indique o tamanho do vetor float: ";
    std::cin >> tamanho;
    float* ptrF = CriaVetFloat(tamanho);
    std::cout << "Ponteiro: " << ptrF << '\n';


    delete[] ptrI;
    delete[] ptrF;

    return 0;
}

int* CriaVetInt(int tamanho) {
    int *VetInt = new int[tamanho];
/*
    for ( int i = 0; i < tamanho; i++) {
        std::cout << "Vetor #" << i+1 << ": ";
        std::cin >> VetInt[i];
    }
*/
    return VetInt;
}

float* CriaVetFloat(int tamanho) {
    float *VetFloat = new float[tamanho];
/*
    for ( int i = 0; i < tamanho; i++) {
        std::cout << "Vetor #" << i+1 << ": ";
        std::cin >> VetFloat[i];
    }
*/
    return VetFloat;
}