#include <stdio.h>

int x = 10;

int sum()
{
    int y = 20;
    printf("%d\n", y);
    printf("%d", x);
}

int main()
{

    // printf("%d\n", x);
    sum();
    return 0;
}