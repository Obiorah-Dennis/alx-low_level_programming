# include <stdio.h>
/**
 * main - entry point
 * Return: Always 0 (success)
 */
int main(void)
{
int numbers[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
(int i = 0; i < 10; i++)
{
int d1 = numbers[i];
for (int j = i + 1; j < 10; j++)
{
int d2 = numbers[j];
putchar(d1 + '0');
putchar(',');
putchar(' ');
putchar(d2 + '0');
putchar('\n');
}
}
return (0);
}
