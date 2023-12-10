/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 20:27:12 by yili              #+#    #+#             */
/*   Updated: 2023/12/06 22:13:41 by yili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	range;
	int	*buffer;

	i = 0;
	range = max - min;
	if (min >= max)
		return (NULL);
	buffer = malloc(range * sizeof (int));
	if (!buffer)
		return (0);
	while (i < range)
	{
		buffer[i] = min + i;
		i++;
	}
	return (buffer);
}
