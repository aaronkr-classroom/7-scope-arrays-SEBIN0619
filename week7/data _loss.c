//data _loss.c
#include <stdio.h>


int main(void) {
	unsigned int  x = 0x12345678;
	long lg = 2147483648;
	double xl = 123456789123.456789;

	printf("Uint: %d", x);
	printf("Uint -> short : %d", (short)x);
	printf("Uint -> char: %d", (char)x);

	printf("Long: %d", x);
	printf("Long -> int: %d", (int)lg);
	printf("Long -> char: %d", (char)lg);

	printf("Dbl : %lf", xl);
	printf("Dbl -> long: %d", (long)xl);
	printf("Dbl -> short: %d\n", (short)xl);

	getch();


	return 0;
}
