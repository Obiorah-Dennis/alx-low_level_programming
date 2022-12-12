#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * description: Get a random number and print
 * Return: 0 (sucess)
 */
int main(void)
{
srand(time(NULL));
int n = rand(),
int last_digit = n % 10;
printf("Last digit of %d is ", n);
if (last_digit > 5)
{
printf("and is greater than 5\n");
}
else if (last_digit == 0)
{
printf("and is 0\n");
}
else
{
printf("and is less than 6 and not 0\n");
}
return (0);
}
