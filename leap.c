#include<stdio.h>


int main(){
    int yr;
    printf("enter a year:\n");
    scanf("%d", &yr);
    if((yr%4==0 && yr%100!=0) || yr%400==0)
    printf("Leap yr");
    else
    printf("Not a leap yr");


    return 0;
}