#include <stdio.h>

/**
 * main - a program that prints all arguments it receives
 * @argc: holds the number of arguments passed
 * @argv: array pointer that holds the arguments passed
 * Return: Always 0 (Success)
 */

int main(int argc, char i**argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		rintf("%s\n", argv[i]);
	return (0);
}
