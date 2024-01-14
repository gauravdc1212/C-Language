#include <stdio.h>
int main()
{
    int i, n,a;
    printf("Enter the number ");
    scanf("%d", &n);
         a = 100;
    for (i = 1; a>0; i++)
    {
            printf("%d ", a);
            a = a - 3;
        }
    
    return 0;
}