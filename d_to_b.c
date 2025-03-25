#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num_digits;
	printf("\nWelcome to prgram change digits to binary\nPlease let me know what is your number to change ===> ");	
	scanf("%d",&num_digits);
	
	int *temp = (int*)malloc(32 * sizeof(int));
	if(temp == NULL) 
	{
		printf("Memory allocate faild\n"); 
		return 1;	
	}
		
	for(int i = 0 ; i < 100 ; i++)
	{
		temp[i] = 0; 
	}	
	int first_count = 0;	
	while(num_digits > 0)
	{
		temp[first_count++] = num_digits % 2;
		num_digits /= 2;
	}
	
	printf("\n-----------------------------\nAnswer = ");	
	for(int i = first_count - 1 ; i >= 0 ; i--)
	{
		printf("%d", temp[i]);	
	}
	printf("\n-----------------------------\n");	
	printf("\n");	

	printf("Finish change digits to binary progarm\n");

	free(temp);
		
	return 0;
}
