#include<stdio.h>
int main(){
    int n,i;
    printf("Enter the number you want to check for prime ");
    scanf("%d",&n);
    int flag=0;
    for(i=2;i<n;i++)
    {
        if(n%i==0){
            flag=1;
            break;
        }
    }
    if(flag==0)
    printf("number is prime");
    else
    printf("number is not prime");
    return 0;
}