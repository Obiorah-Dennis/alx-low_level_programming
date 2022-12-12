#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int I, J;
for (I = 0; I <= 9; I,+,+)
{
for (J = I + 1; J <= 9; J,+,+)
{
putchar(I + '0');
putchar(J + '0');
}
}
putchar('\n');
return (0);
}
