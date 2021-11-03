/*
Задача 4. Напишете функция void sort_arr(void *A, int n, int dir, ftype fp),
където А е обикновен масив от цели числа, n - размера на масива, dir -
посоката, в която да бъде сортиран масива, и ftype - указател към функция,
която приема масив, неговия размер и в каква посока да бъде сортиран
входния масив. ftype трябва да сортира масива във възходящ или низходящ
ред в зависимост от третия параметър на функцията. Принтирайте изходния
и резултатни масиви.
*/

#include <stdio.h>
#include <stdlib.h>

void sort_arr(void *A, int n, int dir, void (*fp)(int *, int, int));
void enterValues(int *, int);
int main()
{

    int maxNum = 0;

    do
    {
        system("cls");
        printf(" -- Enter zero or less to quit -- \n");
        printf(" -- How many numbers you want to add: ");

        scanf("%d", &maxNum);

        int *pArr = (int *)malloc(maxNum * sizeof(int));

        enterValues(pArr, maxNum);

        

    } while (maxNum > 0);

    return 0;
}

void enterValues(int *pArr, int size)
{
    for(int i = 0; i < size; i++) {
        printf(" -- Enter number[%d]: ", i);
        scanf("%d", (pArr + i));
    }
}
