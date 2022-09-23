#include <stdio.h>
/**
 * main() - prints size of many variable types
 *
 * return = 0 if successful
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %d byte(s)\n", sizeof(a));
	printf("Size of an int: %d byte(s)\n", sizeof(b));
	printf("Size of a long int: %d byte(s)\n", sizeof(c));
	printf("Size of a long long int: %d byte(s)", sizeof(d));
	printf("Size of a float: %d byte(S)", sizeof(e));

	return (0);
}
