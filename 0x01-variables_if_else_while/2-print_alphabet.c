#include <stdio.h>
/**
 * main - print alphabet in lowercase
 * Result: Always 0
*/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
