#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char letter[10];
	printf("Hello welcome to base number\n");
	printf("Do you want to change digits to binary ? [Y/n] ===> ");
		
	int vaild = 0;	
	while(!vaild)
	{
		scanf("%s",&letter);

		if(strcmp(letter, "Y") == 0 || strcmp(letter, "y") == 0)
		{
			system("gcc d_to_b.c -o d_to_b.out && ./d_to_b.out");
			printf("\nExit program.\n\n");
			vaild = 1;	
		}		
		else if(strcmp(letter, "N") == 0 || strcmp(letter, "n") == 0)
		{
			printf("Do you want to change binary to digits ? [Y/n] ===> ");
			scanf("%s",&letter);
				if(strcmp(letter, "Y") == 0 || strcmp(letter, "y") == 0)
				{	
					system("gcc b_to_d.c -o b_to_d.out && ./b_to_d.out");
					printf("\nExit program.\n\n");
					return 0;
					vaild = 1;
				}	
				else if(strcmp(letter, "N") == 0 || strcmp(letter, "n") == 0)
				{
					printf("\nExit program.\n\n");
					vaild = 1;
					return 0;	
				}	
		}
		else
		{
			printf("You type invaild command please type only [Y/n] ===> "); 
		}	
	}
	return 0;
}
