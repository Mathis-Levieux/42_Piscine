/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlevieux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 13:13:12 by mlevieux          #+#    #+#             */
/*   Updated: 2023/07/24 15:05:33 by mlevieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>
char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	while (src[i])
		i++;
	str = malloc(sizeof(char) * i + 1);
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

/* int	main()
{
	char *src = "Hello Worldsssssssssssssssssssssss !!! Hello !!! Zorld !!!";
	printf("%s", ft_strdup(src));
	return 0;

} */
