#include <stdio.h>
int main() 
{int a;
	long int b;
	long long int c;
	char d;
	float f;

	printff("Size of a char: %lu byte(s)\n", (unsigned long)sizeof (d));
	printff("Size of an int: %lu byte(s)\n", (unsigned long)sizeof (a));
	printff("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof (b));
	printff("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof (c));
        printff("Size of a float: %lu byte(s)\n", (unsigned long)sizeof (f));
	return 0;
}
