/*Input a binary number and convert it into its equivalent decimal.*/
#include<stdio.h>

#include<math.h>

int main(){
    int num,c=0,i,deci=0;
    int a[100];
    printf("Enter a binary no:\n");
    scanf("%d",&num);

    for(i=0;num!=0;i++)
    {
        a[i]= num%10;
        num/=10;
    }
    num=i;
    for(i=0;i<num;i++)
    {
        deci=deci + (a[i]* pow(2,i));
    }
    printf("The equivalent binary number is: %d",deci);


    return 0;
}