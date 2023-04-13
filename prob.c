/* Take an integer having odd number of digits, print the digit of middle position*/

#include<stdio.h>

int main(){
    int num,count=0,d;
    int temp;
    printf("Enter an odd digits number:\n");
    scanf("%d",&num);
    temp=num;
    while(num>0)
    {
        d=num%10;
        count ++;
        num=num/10;
    }
    
    printf("%d is the no of digits \n",count);
    int count2=0;
    d=0;
    num=temp;
    while(count2<=count/2)
    {
        d=num%10;
        count2 ++;
        num=num/10;
    }	
    printf("digit is %d",d);
    
    return 0;
}