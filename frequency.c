#include <stdio.h>

int main()
{
 int d,n, c=0;
 printf("Enter a no:");
 scanf("%d", &n);
 while(n != 0)
 {
    d=n%10;
    if(d==0)
    {
        c++;
    }
    n=n/10;
 } 
 printf("%d", c);
return 0;  
}