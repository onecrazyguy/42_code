#include <stdio.h>
#include "ft_strlcat.c"

int	main(void)
{
	char a[] = "Cool";
	char b[] = "Beans";
	ft_strlcat(a,b,6);
	printf("%s", a);
	printf("%d", ft_strlcat(a,b,6));
	return 0;
}
