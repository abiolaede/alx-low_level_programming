#include <stdio.h>

/**
* main - Entry point 
* 
* sizeof : to check the address in the memory of* various data type
* 
* Description : this program print the size of  * various data in the computer and compiled and * run on
*
* Return: Always 0 (Success) 
*/
int main(void)
{
char c;
int i;
long li;
long long lli;
float f;

printf("Size of a char: %ld byte(s)\n", sizeof(c));
printf("Size of an int: %ld byte(s)\n", sizeof(i));
printf("Size of a long int: %ld byte(s)\n", sizeof(li));
printf("Size of a long long int: %ld byte(s)\n", sizeof(lli));
printf("Size of a float: %ld byte(s)\n", sizeof(f));
return (0);
}
