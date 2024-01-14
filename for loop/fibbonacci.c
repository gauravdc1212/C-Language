#include <stdio.h>

// to print fibonnaci series  

int main()
{
    int a = 0, b = 1, c, num;
    printf("Enter the number ");
    scanf("%d", &num);
    if (num == 0 || num == 1)
        {
            printf("%d", a);
        }
    else {
        printf("%d %d ",a,b);
        for (int i = 3; i <= num; i++){
        
            c = a + b;
            a = b;
            b = c;
            printf("%d ", c);
        }
    }
    return 0;
}

// to print nth term of fibonnaci series
// Online C compiler to run C program online
#include <stdio.h>
int main()
{
    int a = 0, b = 1, c, num;
    printf("Enter the number ");
    scanf("%d", &num);
    if(num==0 || num==1){
     printf("%d",a);  
    }
    else if(num==2){
        printf("%d",b);
    }
    else{
    for(int i=1;i<=num-2;i++){
            c = a + b;
            a = b;
            b = c;
        }
            printf("%d ", c);
    }
            return 0;
    }