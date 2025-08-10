#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 1 if the number of arguments is incorrect
 */
int main(int argc, char *argv[])
{
	int eded1, eded2, cvb;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	eded1 = atoi(argv[1]);
	eded2 = atoi(argv[2]);
	cvb = eded1 * eded2;

	printf("%d\n", cvb);

	return (0);
}
