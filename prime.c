#include<stdio.h>


int main(){
    int num;
    int flag=0;
    int i=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if(num==0 || num==1)
    {
        printf("not a prime no \n");
    }
    else
    {
        for (i=1; i<=num; i++)
        {
            if(num%i==0)
            {
                flag++;
            }
            else 
            {
                continue;
            }
        }
        if(flag==2)
        {
            printf("prime");
        }
        else
        {
            printf("Not a prime");
        }
    }
    return 0;
}