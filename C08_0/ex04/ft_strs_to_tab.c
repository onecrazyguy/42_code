/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 13:32:53 by yili              #+#    #+#             */
/*   Updated: 2023/12/09 17:30:54 by yili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include "ft_show_tab.c"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;
	int		len;

	len = ft_strlen(src);
	dest = (char *)malloc(sizeof (*dest) * (len + 1));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	ft_store(char **av, t_stock_str *tab, int i)
{
	tab[i].size = ft_strlen(av[i]);
	tab[i].str = av[i];
	tab[i].copy = ft_strdup(av[i]);
	if (tab[i].copy == NULL)
	{
		while (i > 0)
			free(tab[--i].copy);
		free(tab);
	}
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*tab;

	if (ac <= 0 || av == NULL)
		return (NULL);
	tab = (t_stock_str *)malloc(sizeof (t_stock_str) * (ac + 1));
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		ft_store(av, tab, i);
		if (tab[i].copy == NULL)
			return (NULL);
		i++;
	}
	tab[i].str = NULL;
	tab[i].copy = NULL;
	return (tab);
}

int main(int ac, char **av)
{
	t_stock_str *result;

	result = ft_strs_to_tab(ac, av);
	ft_show_tab(result);
	return (0);

}