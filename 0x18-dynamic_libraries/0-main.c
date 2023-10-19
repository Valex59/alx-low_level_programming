#include "main.h"
#include <stdio.h>

int _strlen(char *s)
{
	int length = 0;
	
	while (s[length] != '\0')
	{
		length++;
	}
	
	return length;
}
/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	printf("%d\n", _strlen("My Dyn Lib"));
	return (EXIT_SUCCESS);
}
