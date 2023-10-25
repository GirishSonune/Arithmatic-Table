#include <stdio.h>
int main()
{
    int i, n, x;
    printf("\nWelcome to Table of 'N' Number");
    printf("\nEnter a Number: ");
    scanf("%d", &n);

    for (i = 1; i <= 10; i++)
    {
        x = n * i;
        printf("%d * %d = %d\n", n, i, x);
    }

    printf("Thank You!\n");
    return 0;
}