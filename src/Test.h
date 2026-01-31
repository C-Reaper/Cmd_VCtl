#include <stdio.h>

int main(){
	printf("-- Main --\n");
	
	printf("Input a number 0: ");
	fflush(stdout);
	int num;
	printf("Input: %d\n",num);
	printf("User Input 0: %d\n",num);

	printf("Input a number 1: ");
	fflush(stdout);
	int num;
	scanf("%d",&num);
	printf("User Input 1: %d\n",num);

	printf("----------\n");
	return 1;
}