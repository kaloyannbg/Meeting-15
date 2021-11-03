/*
Задача.3. Направете масив от указатели към функции по следния начин:
void add(){...}
void fun2(){...}
void fun3(){...}
void (*func_ptr[3])() = {fun1, fun2, fun3};
Направете меню, с което да питате потребителя коя от горните функции
иска да използва – събиране, изваждане, умножение и деление. След това
попитайте за числата, които да участват в тази операция, и извикайте
функцията, която да извърши желаната операция.
*/

#include <stdio.h>
#include <stdlib.h>

void printNewLines(int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("\n");
    }
}

void printMenu()
{
    printf(" -- Enter 1 for add()\n");
    printf(" -- Enter 2 for sub()\n");
    printf(" -- Enter 3 for multiply()\n");
    printf(" -- Enter 4 for division()\n");
    printf(" -- Enter 0 for exit\n\n");
}

int add(int num1, int num2)
{
    return num1 + num2;
}

int sub(int num1, int num2)
{
    return num1 - num2;
}

int multiply(int num1, int num2)
{
    return num1 * num2;
}

int division(int num1, int num2)
{
    return num1 / num2;
}

int main(void)
{

    int choice = 0, num1 = 0, num2 = 0;

    int (*func_ptr[])() = {add, sub, multiply, division};

    int size = sizeof(func_ptr) / sizeof(*func_ptr);

    do
    {
        system("cls");
        printMenu();
        printf(" -- Please, enter your choice: ");
        scanf("%d", &choice);
        if (choice == 0)
        {
            exit(0);
        }
        else if (choice > size)
        {
            printf(" -- Invalid choice --");
            exit(1);
        }

        printf(" -- Num 1: ");
        scanf("%d", &num1);
        printf(" -- Num 2: ");
        scanf("%d", &num2);
        switch (choice)
        {
        case 1:
            printf(" -- RESULT: %d", (*func_ptr[choice - 1])(num1, num2));
            break;
        case 2:
            printf(" -- RESULT: %d", (*func_ptr[choice - 1])(num1, num2));
            break;
        case 3:
            printf(" -- RESULT: %d", (*func_ptr[choice - 1])(num1, num2));
            break;
        case 4:
            printf(" -- RESULT: %d", (*func_ptr[choice - 1])(num1, num2));
            if(num1 % num2 > 0) {
                printf(" And remainder: %d", num1 % num2);
            }
            break;
        default:
            printf(" -- Invalid choice --");
            break;
        }

        printNewLines(2);
        system("PAUSE");
    } while (choice != 0);

    return 0;
}