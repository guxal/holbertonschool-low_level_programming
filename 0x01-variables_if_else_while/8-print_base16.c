#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */


int main(void)
{

int i;
char numbers[16] = "0123456789abcdef";
char letter;

i = 0;
while (i < 16)
{
letter = numbers[i];
putchar(letter);
i++;
}
putchar('\n');
return (0);

}
