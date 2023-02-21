#include "main.h"
/**
 * main - check the code
 * Return: Always 0.
 */
int main(void)
{
    void print_alphabet(void);
    print_alphabet();
    printf("\n");
    return (0);
}
void print_alphabet(void)
{
    char c = 'a';
    for (c = 'a'; c <= 'z'; ++c)
    {
        printf("%c", c);
    }
    return;
}
