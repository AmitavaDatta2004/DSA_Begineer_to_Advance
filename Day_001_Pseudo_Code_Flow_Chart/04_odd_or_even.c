#include<stdio.h>

int main(){
    int num;
    printf("Enter the number :");
    scanf("%d",&num);
    if(num==0){
        printf("The number is neither odd nor even.");
    }
    else if(num%2==0){
        printf("The number is even.");
    }
    else{
        printf("The number is odd");
    }
    return 0;
}