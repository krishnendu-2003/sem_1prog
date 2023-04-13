#include<stdio.h>

int main(){
	int run;
	run = 1;
	while(run)
	{
		printf("Enter 1 to run the program, 0 to stop ");
		scanf("%d",&run);
		if(!run)
		{
			printf("\nprogram is terminating...\n");
			break;
		}
		else if(run !=1 && run !=0){
			printf("\nplease enter a valid input\n");
		}
		else
		{
			printf("\nprogram is running...\n");
		}
	}
    return 0;
}