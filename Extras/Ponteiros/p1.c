#include <stdio.h>

int main()
{
    int a = 5, *p;

    p = &a;

    // print p -> endereço de a
    // print &a -> endereço de a
    // print &p -> endereço de p
    // print *p -> valor de a (5)

    *p = 10;

    // print *p -> imprime o novo valor de a (10)

    return 0;
}