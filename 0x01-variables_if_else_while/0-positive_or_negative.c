#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * Main Function
 *
 * Check if the random integer "n" is negative or posisitve
 * 
 * Always Return (0) (SUCCESS)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if(n>0)
		printf("%i is postive\n", n);
	else if(n<0)
		printf("%i is negative\n", n);
	else
		printf("0 is zero\n");

	return (0);
}
