#include <stdlib.h>
#include <time.h>

/* more headers goes there */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	/* your code goes there */

	if (n > 0)
	{
		n = "is positive"
	}
	if (n = 0)
	{
		n = "is zero"
	}	
	if (n < 0)
	{
		n = "is negative"
	}
	return (0);
}
