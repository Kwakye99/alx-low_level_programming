#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
char g;
for (g = '0'; g <= '9'; g++)
{
putchar(g);
}
for (g = 'a'; g <= 'f'; g++)
{
putchar(g);
}
putchar('\n');
return (0);
}
