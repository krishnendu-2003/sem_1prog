#include<stdio.h>


int main(){
    char choice;
    float num1,num2,s,p,q,d;
    printf("Enter the two numbers:\n");
    scanf("%f%f",&num1,&num2);
    printf("enter your choice:\n");
    scanf("%c",&choice);

    if(choice=='+')
    {
        s=num1+num2;
        printf("Sum:%f",s);

    }
    if(choice=='-')
    {
        d=num1-num2;
        printf("Difference:%f",d);

    }
    if(choice=='*')
    {
        p=num1*num2;
        printf("Product:%f",p);
    }
    if(choice=='/')
    {
        q=num1/num2;
        printf("Quotient:%f",q);
    }

    return 0;
}