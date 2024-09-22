#include <stdio.h>

int main(){
    int num1, num2;
    printf("Enter first number :");
    scanf("%d", &num1);
    printf("Enter second number :");
    scanf("%d", &num2);

    if (num1 < num2){
        printf("%d is the minimum", num1);
    }
    else if (num2 < num1){
        printf("%d is the minimum", num2);
    }
    else{
        printf("The numbers are same");
    }
    return 0;
}