//print the sum of the series 1-2+3-4+5-6 upto n term.
#include<stdio.h>
int main(){
    int i,num,sum=0;
    printf("Enter the number ");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        if(i%2!=0)
        sum=sum+i;
        else
        sum=sum-i;
    }printf("%d",sum);
    return 0;
}