#include <stdio.h>

int main()
{
    int num = 10;

    do
    {
        printf("%d\n", num);
        num--;
    } while (num >= 0);

    printf("Fim!");

    return 0;
}