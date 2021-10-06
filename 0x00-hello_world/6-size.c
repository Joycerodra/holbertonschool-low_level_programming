#include <stdio.h>
/**
 * main - program inits x
 *
 * Return: always 0
 */
int main(void)
{
printf("Size of a char: %za byte(s)\n", sizeof(char));
printf("Size of an int: %za byte(s)\n", sizeof(int));
printf("Size of a long int: %za byte(s)\n", sizeof(long int));
printf("Size of a long long int: %za byte(s)\n", sizeof(long long int));
printf("Size of a float: %za byte(s)\n", sizeof(float));

return (0);
}
