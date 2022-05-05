#include <main.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *main - adds numbers
 *@argc: number of arguments
 *@argv: argument vector of pointers to strings
 *
 *Return: 0 if no errors, else 1
 */

int main(int argc, char *argv[])
{
	int i, j, add = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
