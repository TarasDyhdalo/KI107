#include <stdio.h>

int main()
{
	double r1, r2, s1, s2, s;
	const double pi = 3.14159;

	printf ("r1 = ");
	scanf ("%lf", &r1);
	printf("r2 = ");
	scanf ("%lf", &r2);

	if (r1 < r2) 
	{
		s1 = pi * (r1 * r1);
		s2 = pi * (r2 * r2);
		s = s2 - s1;
		printf ("S = %.2lf\n", s);
	}
	else 
	{
		printf ("r1 > r2\n");
	}
	return 0;
}