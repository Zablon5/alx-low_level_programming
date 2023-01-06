#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the multiplication of two numbers, followed by a new line.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If the program receives two arguments - 0.
 *         If the program does not receive two arguments - 1.
 */
int main(int argc, char *argv[])
{
	int inp1, inp2, mult;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	inp1 = atoi(argv[1]);
	inp2 = atoi(argv[2]);
	mult = inp1 * inp2;

	printf("%d\n", mult);

	return (0);
}
