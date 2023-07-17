#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry points
* Description -  'print alphabet in reverse'
* Return: Alway 0
*/
int main(void)
{
int n = 122;
while (n >= 97)
{
putchar (n);
n--;
}
putchar ('\n');
return (0);
}
