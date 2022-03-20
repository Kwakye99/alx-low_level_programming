#include "main.h"
/**
* print_diagonal - use to print diagonal
* Return: void 
*/
void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int k, m;
for (k = 0; k < n; k++)
{
for (m = 0; m < n; m++)
{
if (m == k)
_putchar('\\');
else if (m < k)
_putchar(' ');
}
_putchar('\n');
}
}
}
