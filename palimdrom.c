#include<stdio.h>


int main(){
    int n,d,sum=0,rev=0,count=0,oldN;
    printf("enter a no:\n");
    scanf("%d",&n);
    oldN=n;

    while(n>0) 
    {
        d=n%10;
        rev= rev*10+d;
        sum= sum+d;
        count ++;
        n=n/10;
    }
    printf("The no of digits:%d\n",count);
    printf("Reverse of the number:%d\n",rev);
    if(rev==oldN)
    {
        printf("palindrome");
    }
    else
    {
        printf("no a palindrome");
    }
    
    
    return 0;
}