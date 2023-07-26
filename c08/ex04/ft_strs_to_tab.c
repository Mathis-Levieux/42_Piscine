/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlevieux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 10:56:45 by mlevieux          #+#    #+#             */
/*   Updated: 2023/07/26 15:03:57 by mlevieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>
#include "ft_stock_str.h"

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	while (src[i])
		i++;
	str = (char *)malloc(sizeof(char) * i + 1);
	if (str == NULL)
		return (NULL);
	j = 0;
	while (src[j])
	{
		str[j] = src[j];
		j++;
	}
	str[j] = '\0';
	return (str);
}

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*st;
	int			i;

	st = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (st == NULL)
		return (NULL);
	i = 0;
	while (av[i] && i < ac)
	{
		st[i].size = ft_strlen(av[i]);
		st[i].str = av[i];
		st[i].copy = ft_strdup(av[i]);
		i++;
	}
	st[i].size = 0;
	st[i].str = 0;
	st[i].copy = 0;
	return (st);
}

/* int	main(void)
{
	char *av[] = {"Haha", "Huhu", "Hehe", "Haha", "Hoho", "Fin"};
	t_stock_str	*st = ft_strs_to_tab(6, av);
	for (int j = 0; j < 6; j++)
	{
		printf("%d\n", st[j].size);
		printf("%s\n", st[j].str);
		printf("%s\n", st[j].copy);
	}
	return 0;
} */
