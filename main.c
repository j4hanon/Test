#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double my_sqrt(double n);

int main(char argc, char **argv)
{
	srand((unsigned)time(NULL));

	double n = (rand() % 100 + 1) * 1.0 + (rand() % 10) * 0.1;
	printf("root %f is %f\n", n, my_sqrt(n));

	return 0;
}

double my_sqrt(double n)
{
	if (n <= 0) return 0.0;

	double ret;
	double x = n > 1 ? n : 1;

	do {
		ret = x;
		x = (n / x + x) * 0.5;
	} while (x < ret);

	return ret;
}