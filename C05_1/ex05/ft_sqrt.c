/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 21:23:54 by yili              #+#    #+#             */
/*   Updated: 2023/12/05 22:12:28 by yili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (0);
	while (i * i <= nb && i <= 46340)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

 int main(void)
 {
     printf("Sqaure root of -4 is:%d\n", ft_sqrt(-4));
     printf("Sqaure root of 0 is:%d\n", ft_sqrt(0));
     printf("Sqaure root of 30 is:%d\n", ft_sqrt(30));
  printf("Sqaure root of 46340 is:%d\n", ft_sqrt(46340));
  }