#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 1000000

double A[SIZE][SIZE];
double B[SIZE][SIZE];
double C[SIZE][SIZE];

void imprime_a();
void imprime_b();
void imprime_c();

int main() {
    int i, j, k;

    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            A[i][j] = 4*i + 8*j;
            B[i][j] = i + j - 8;
            C[i][j] = 0;
        }
    }

    imprime_a();
    imprime_b();

    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            for (k = 0; k < SIZE; k++) {
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
    }

    imprime_c();

    return EXIT_SUCCESS;
}

void imprime_a(void) {
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            printf("A[%d,%d]=%5.0f\t", i, j, A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void imprime_b(void) {
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            printf("B[%d,%d]=%5.0f\t", i, j, B[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void imprime_c(void) {
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            printf("C[%d,%d]=%5.0f\t", i, j, C[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
