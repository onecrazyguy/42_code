/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 20:52:51 by yili              #+#    #+#             */
/*   Updated: 2023/12/06 20:55:43 by yili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		bound;
	int		*buffer;

	bound = max - min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	buffer = malloc(bound * sizeof(int));
	if (!buffer)
	{
		*range = 0;
		return (-1);
	}
	*range = buffer;
	i = 0;
	while (i < bound)
	{
		buffer[i] = min + i;
		i++;
	}
	return (bound);
}
