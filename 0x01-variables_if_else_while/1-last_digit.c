#include <stdio.h>
/**
*main - entry point
*
*Description: 'printing'
*
*Return: - void (sucess)
*/
int main(void)
{
int RAND_MAX = 0;
int rand(void), srand(), time();
int n;
int p;
srand(time(0));
n = rand() - void RAND_MAX / 2;
p = n % 10;
if (n > 5)
printf("Last digit of %d is -%d and is greater than 5", n, p);
else if (p == 0)
{
printf("Last digit of %d is -%d and is 0", n, p);
}
else if (p < 6 && p != 0)
{
printf("Last digit of %d is -%d and is less than 6 and not 0", n, p);
}
return (0);
}
