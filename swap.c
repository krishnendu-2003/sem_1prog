#include<stdio.h>


int main(){
    int num1,num2;
    printf("Enter the numbers:\n");
    scanf("%d%d",&num1,&num2);
    printf("Before swapping num1=%d and num2=%d\n",num1,num2);

    num1=num1+num2;  
    num2=num1-num2;
    num1=num1-num2;

    printf("The number after swapping num1=%d,num2=%d",num1,num2);
    
    return 0;
}