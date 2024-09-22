#include<stdio.h>

int main(){
    int side;
    printf("Enter the length of side:");
    scanf("%d",&side);
    int area;
    area=side*side;
    printf("The area of the square is %d.",area);
    return 0;
}