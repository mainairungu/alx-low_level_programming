#include "main.h"
/**
 * main - check the code
 * Return: Always 0.
 */
int main(void)
{
    void print_alphabet(void);
    print_alphabet();
    return (0);
}
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	putchar('\n');
        return;
}
