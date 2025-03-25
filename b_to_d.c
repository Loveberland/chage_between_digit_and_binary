#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num_input;
	printf("\nWelcome to program change binary to digits\nPlease let me know what is your number to change (please type the first num form right to left) ===> ");
	scanf("%d",&num_input);

	int count = 0;	
	int num_digit = 0;	
	int base = 1;	
	while(num_input > 0)
	{
		int temp = num_input % 10;
		num_input /= 10;
		num_digit += temp * base;
		base *= 2;	
	}
	
	printf("-----------------------------\nAnswer = ");
	printf("%d\n", num_digit);
	printf("-----------------------------\n\n");
 	
	return 0;
}
