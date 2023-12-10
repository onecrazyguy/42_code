/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 09:48:07 by yili              #+#    #+#             */
/*   Updated: 2023/11/17 11:49:43 by yili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	digits[3];

	digits[0] = '0';
	while (digits[0] <= '7')
	{
		digits[1] = digits[0] + 1;
		while (digits[1] <= '8')
		{
			digits[2] = digits[1] + 1;
			while (digits[2] <= '9')
			{
				write(1, digits, 3);
				if (digits[0] != '7' || digits[1] != '8' || digits[2] != '9')
				{
					write(1, ", ", 2);
				}
				digits[2]++;
			}
			digits[1]++;
		}
		digits[0]++;
	}
	write(1, "\n", 1);
}
