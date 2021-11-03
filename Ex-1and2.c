/*
Задача 1. Направете две функции и извикайте желаната функция с указател
към функция, съобразно знака, подаден от командния ред:
Пример: а.exe 20 + 3

Задача 2. Добавете към горния код функции за умножение и деление.
*/
#include <stdio.h>
#include <stdlib.h>

int fnPlus(int nA, int nB) { return (nA + nB); }
int fnMinus(int nA, int nB) { return (nA - nB); }
int fnMultiply(int nA, int nB) { return (nA * nB); }
int fnDivision(int nA, int nB) { return (nA / nB); }

int main(int argc, char *argv[])
{
    int (*pfCalc)(int, int) = NULL;

    switch (*argv[2])
    {
    case '+':
        pfCalc = fnPlus;
        printf("%d", pfCalc(atoi(argv[1]), atoi(argv[3])));
        break;

    case '-':
        pfCalc = fnMinus;
        printf("%d", pfCalc(atoi(argv[1]), atoi(argv[3])));
        break;

    case 'x':
        pfCalc = fnMultiply;
        printf("%d", pfCalc(atoi(argv[1]), atoi(argv[3])));
        break;

    case '/':
        pfCalc = fnDivision;
        printf("%d", pfCalc(atoi(argv[1]), atoi(argv[3])));
        break;


    default:
        break;
    }

    return 0;
}