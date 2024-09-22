#include<stdio.h>

int main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    int flag=0;
    for(int i=1;i<=num;i++){
        if(num%i==0){
            flag++;
        }
    }
    if(num==0){
        printf("0 is neither prime nor composite.");
    }
    else if(num==1){
        printf("1 is co-prime.");
    }
    else if(flag==2){
        printf("The number %d is prime.",num);
    }
    else{
        printf("The number %d is not prime.",num);
    }
    return 0;
}