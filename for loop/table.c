#include <stdio.h>
void main()
{
    int i, n;
    printf("enter the number whose table you want to print ");
    scanf("%d\n",&n);
    for (i = 1; i <= 10; i++)
        printf("%d", i * n);
    
}