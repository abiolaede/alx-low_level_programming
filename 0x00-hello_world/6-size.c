#include <stdio.h>
/**
 * main-Entry point
 * sizeof:addresss of memory of data types
 * Description: compiled,run on and print
 * return: always 0 (sucess)
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
