#include<stdio.h>

int main(){
    int a , b;
    printf("Enter the 1st number :");
    scanf("%d",&a);
    printf("Enter the 2nd number :");
    scanf("%d",&b);
    int sum;
    sum=a+b;
    printf("The sum of %d and %d is %d.",a,b,sum);
    return 0;
}