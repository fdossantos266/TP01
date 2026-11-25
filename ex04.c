#include <stdio.h>

double	racine(int n)
{
	double	x;
	int		i;

	if (n <= 0)
		return (0);
	x = n;
	i = 0;
	while (i < 50)
	{
		x = (x + n / x) / 2;
		i = i + 1;
	}
	return (x);
}

int	main(void)
{
	int	a;
	int	b;
	int	c;
	int	delta;

	a = 1;
	b = 2;
	c = 3;
	delta = (b * b) - (4 * a * c);
	printf("Delta = %d\n", delta);
	if (delta > 0)
	{
		printf("Il existe 2 solutions\n");
		printf("x1 = %f\n", (-b - racine(delta)) / (2.0 * a));
		printf("x2 = %f\n", (-b + racine(delta)) / (2.0 * a));
	}
	else if (delta == 0)
	{
		printf("Il existe 1 solution\n");
		printf("x = %f\n", -b / (2.0 * a));
	}
	else
		printf("Il n'existe aucune solution\n");
	return (0);
}