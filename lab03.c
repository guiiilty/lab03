#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill(int n, int a[])
{
    int i;
    for (i = 0; i < n; i++)
        a[i] = rand() % 101 - 50;
}

void splitArray(int n, int A[], int P[], int N[], int* pSizeP, int* pSizeN)
{
    int i;
        *pSizeP = 0;
        *pSizeN = 0;
    for (i = 0; i < n; i++)
    {
        if (A[i] >= 0)
        {
            P[*pSizeP] = A[i];
            (*pSizeP)++;
        }
    else
        {
            N[*pSizeN] = A[i];
            (*pSizeN)++;
        }
    }
}

int main()
{
    srand(time(NULL));
    int n;
    printf("n -> ");
    scanf("%d", &n);
    int A[n];
    fill(n, A);

    int P[n]; // Массив для положительных элементов
    int N[n]; // Массив для отрицательных элементов
    int sizeP, sizeN; // Размеры массивов P и N

    splitArray(n, A, P, N, &sizeP, &sizeN);

    printf("Положительные элементы:\n");
    for (int i = 0; i < sizeP; i++)
        printf("%4d", P[i]);

    printf("\nОтрицательные элементы:\n");
    for (int i = 0; i < sizeN; i++)
        printf("%4d", N[i]);

    printf("\n");
    return 0;
} 