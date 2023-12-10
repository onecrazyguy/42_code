/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 20:56:23 by yili              #+#    #+#             */
/*   Updated: 2023/12/06 22:12:35 by yili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	total_len(char **str, int size, int sep_len)
{
	int		total_len;
	int		i;

	total_len = 0;
	i = 0;
	while (i < size)
	{
		total_len += ft_strlen(str[i]);
		i++;
	}
	total_len += (size - 1) * sep_len;
	return (total_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	int		i;
	char	*string;
	char	*temp_string;

	i = 0;
	if (size == 0)
		return ((char *)malloc(sizeof (char)));
	len = total_len(strs, size, ft_strlen(sep));
	string = (char *)malloc((len + 1) * sizeof (char));
	temp_string = string;
	if (!temp_string)
		return (0);
	while (i < size)
	{
		ft_strcat(temp_string, strs[i]);
		temp_string += ft_strlen(strs[i]);
		if (i < size - 1)
			ft_strcat(temp_string, sep);
		temp_string += ft_strlen(sep);
		i++;
	}
	*temp_string = '\0';
	return (string);
}
