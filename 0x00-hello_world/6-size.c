#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	printf("size of a char: %lu byte(S)\n", (unsigned long)sizeof(char));
	printf("Size of an int: %lu byte(S)\n", (unsigned long)sizeof(int));
	printf("Size of a long int: %lu byte(S)\n", (unsigned long)sizeof(long int));
	printf("Size of a long long int: %lu byte(S)\n", (unsigned long)sizeof(long long int));
	printf("Size of a float: %lu byte(S)\n", (unsigned long)sizeof(float));
	return (0);
}

