/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 19:40:30 by yili              #+#    #+#             */
/*   Updated: 2023/11/29 19:52:46 by yili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	int				len;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src [i];
		i++;
	}
	len = str_len(src);
	if (len >= i)
	{
		dest[i] = '\0';
	}
	return (dest);
}
