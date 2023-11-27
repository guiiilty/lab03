# Лабораторная работа №3
## Сложность: Rare
## Вариант второй
## Задание
1. Напишите программу по своему варианту.git 
2. Оформите отчёт в README.md. Отчёт должен содержать:
    - Задание
    - Описание проделанной работы
    - Скриншоты результатов
    - Ссылки на используемые материалы
### Задание варианта
Максимально эффективно по используемой памяти записать отрицательные и положительные элементы массива в массивы P и N соответственно. 

### Ход работы
1. Ссылка на репозиторий:

    https://github.com/guiiilty/lab03.git

2. Скопировал его себе на пк:

```shell
git clone https://github.com/guiiilty/lab03.git: 
```

3. Решение
- Написал программу, решающую задачу по своему варианту

```c
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
```

- Результат работы программы
```shell
n -> 5
Положительные элементы:
  15  38
Отрицательные элементы:
 -20 -41 -12
```

- Функция `splitArray` разделяет исходный массив `A` на два массива `P` и `N` для положительных и отрицательных элементов соответственно. Размеры массивов `P` и `N` передаются через указатели `pSizeP` и `pSizeN`. Затем в `main()` функция вызывается и выводит результат.

4. Ссылки на используемые материалы
- https://github.com/guiiilty/lab03
- https://evil-teacher.on.fleek.co/prog_pm/lab03/
- https://www.youtube.com/watch?v=YUF3_eBdzsk
- https://www.youtube.com/watch?v=thUd_WJn6wk
- https://onebite.dev/snippet/c-sharp/split-an-array-into-smaller-arrays-in-c-sharp/