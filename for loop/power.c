#include<stdio.h>
int main(){
    int a,b,power=1;
    printf("enter the firsr number whose power you want ");
    scanf("%d",&a);
    printf("enter the number how much power you want ");
    scanf("%d",&b);
    for(int i=1;i<=b;i++){
     power=power*a;
    }
    printf("%d",power);
return 0;

}