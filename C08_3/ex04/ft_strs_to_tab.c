/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 13:32:53 by yili              #+#    #+#             */
/*   Updated: 2023/12/10 11:55:33 by yili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

#include <stdlib.h>

void	ft_show_tab(struct s_stock_str *par);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
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
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = av[i];
		i++;
	}
	tab[i].str = 0;
	tab[i].copy = NULL;
	return (tab);
}
