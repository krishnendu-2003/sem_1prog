#include<stdio.h>
int main(){
    int a,b,c,max;
    printf("Enter the numbers of a,b,c\n");
    scanf("%d%d%d",&a,&b,&c);

    //using ternary operator
    max= (a>b)?(a>c? a:c):(b>c?b:c);
    printf("Lasgest of 3 numbers= %d", max);
    
    return 0;
}