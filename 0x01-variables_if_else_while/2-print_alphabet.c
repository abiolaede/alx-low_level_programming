#include <stdio.h>
/**
* main -  prints the alphabet in lowercase
*
* Description: all program should be in the main function
* Return: 0
*/
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
	{
	putchar(ch);
	}
putchar('\n');
return (0);
}
