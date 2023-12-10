#include <unistd.h>

void	test(void)
{
	char	a[2];

	a[0] = '0';
	a[1] = '0';
	while (a[0] <= '9')
	{
		while (a[1] <= '9')
		{
			write(1, a, 2);
			a[1]++;
		}
		a[0]++;
		a[1] = '0';
		write(1, ",", 1);
	}
}

int	main(void)
{
	test();
	return (0);
}
