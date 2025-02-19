#include <stdio.h>
#include <stdlib.h>

int particionar(int arr[], int inicio, int fim);

void quickSort(int arr[], int inicio, int fim);

void mergeSort(int arr[], int inicio, int fim);

void merge(int arr[], int inicio, int meio, int fim);

void bubbleSort(int arr[], int n);

void preencherVetor(int arr[], int tamanho);

void exibirVetor(int arr[], int tamanho);

int main() {
    int vetor_quick[1000], vetor_merge[1000], vetor_bubble[1000];
    srand(time(NULL));
    
    preencherVetor(vetor_quick, 1000);
    preencherVetor(vetor_merge, 1000);
    preencherVetor(vetor_bubble, 1000);
    
    quickSort(vetor_quick, 0, 999);
    printf("Vetor ordenado com Quick Sort:\n");
    exibirVetor(vetor_quick, 1000);
    printf("\n");
    
    mergeSort(vetor_merge, 0, 999);
    printf("Vetor ordenado com Merge Sort:\n");
    exibirVetor(vetor_merge, 1000);
    printf("\n");
    
    bubbleSort(vetor_bubble, 1000);
    printf("Vetor ordenado com Bubble Sort:\n");
    exibirVetor(vetor_bubble, 1000);
    printf("\n");
    
    return 0;
}

int particionar(int arr[], int inicio, int fim) {
    int pivo = arr[fim];
    int i = inicio - 1;
    int j;
    
    for (j = inicio; j < fim; j++) {
        if (arr[j] <= pivo) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[fim];
    arr[fim] = temp;
    
    return (i + 1);
}

void quickSort(int arr[], int inicio, int fim) {
    if (inicio < fim) {
        int pi = particionar(arr, inicio, fim);
        
        quickSort(arr, inicio, pi - 1);
        quickSort(arr, pi + 1, fim);
    }
}

void mergeSort(int arr[], int inicio, int fim) {
    if (inicio < fim) {
        int meio = inicio + (fim - inicio) / 2;
        

        mergeSort(arr, inicio, meio);
        mergeSort(arr, meio + 1, fim);
        
        merge(arr, inicio, meio, fim);
    }
}

void merge(int arr[], int inicio, int meio, int fim) {
    int n1 = meio - inicio + 1;
    int n2 = fim - meio;
    
    int L[n1], R[n2];
    
    int i, j, k;
    for (i = 0; i < n1; i++)
        L[i] = arr[inicio + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[meio + 1 + j];
    
    i = 0;
    j = 0;
    k = inicio;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void bubbleSort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void preencherVetor(int arr[], int tamanho) {
    int i;
    for (i = 0; i < tamanho; i++) {
        arr[i] = rand() % 1000;
    }
}

void exibirVetor(int arr[], int tamanho) {
    int i;
    for (i = 0; i < tamanho; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}