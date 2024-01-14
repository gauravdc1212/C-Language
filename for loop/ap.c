#include<stdio.h>
int main(){
    int n,i;
    printf("Enter the number upto you want to ap ");
    scanf("%d",&n);
    // for(i=4;i<=3*n+1;i=i+3)
    // printf("%d",i);
    int a=4;
    for(i=1;i<=n;i++)
    printf("%d",a);
    a=a+3;
    
    return 0;
}