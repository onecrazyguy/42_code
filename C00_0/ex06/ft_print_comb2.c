/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 17:56:36 by yili              #+#    #+#             */
/*   Updated: 2023/11/27 17:56:41 by yili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	char	comb[5];

	comb[0] = '0';
	comb[1] = '0';
	comb[2] = ' ';
	comb[3] = '0';
	comb[4] = '0';
	while (comb[0] <= '9')
	{
		while (comb[1] <= '8')
		{
			while (comb[3] <= '9')
			{
				while (comb[4] <= '9')
				{
					write(1, comb, 5);
					write(1, ",", 1);
					comb[4]++;
					if (comb[4] == '9')
					{
						comb[3]++;
						comb[4] = '0';
					}
				}
			}
			if (comb[3] == '9' && comb[4] == '9')
			{
				comb[1]++;
				comb[3] = '0';
				comb[4] = '0';
			}
		}
	}
	comb[0]++;
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
