/* factors.c */

#include <stdio.h>

/**
* factorize - Factorizes a given number into two smaller numbers.
* @number_to_factorize: The number to factorize.
*/
void factorize(int number_to_factorize)
{
	printf("%d can be factorized as ", number_to_factorize);

	int i = 2;

	if (number_to_factorize < 2)
		return;

	while (number_to_factorize % i)
		i++;

	printf("%d * %d\n", number_to_factorize / i, i);
}

/**
* main - Entry point of the program.
* Reads numbers from a file and calls the factorize function.
* Return: 0 on success, 1 on failure.
*/
int main(void)
{
	/* Read numbers from a file (e.g., tests/test00) */
	FILE *file = fopen("tests/test00", "r");
	int number_to_factorize;

	if (file == NULL)
	{
		perror("Error opening file");
		return (1);
	}

	while (fscanf(file, "%d", &number_to_factorize) == 1)
	{
		factorize(number_to_factorize);
	}

	fclose(file);
	return (0);
}
