#include "main.h"
#include <stdio.h>
/**
 * main - prints the number of arguments passed into the program
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: return
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
