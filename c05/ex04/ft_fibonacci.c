/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlevieux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 09:55:51 by mlevieux          #+#    #+#             */
/*   Updated: 2023/07/14 10:01:47 by mlevieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/* int	main(void)
{
	printf("%d", ft_fibonacci(15));
	return 0;
}

ft5 = ft4 + ft3
ft4 = ft3 + ft2
ft3 = ft2 + ft1
ft2 = ft1 + ft0 = 1 + 0 -> cas de base, on commence a remonter
ft3 = ft2 + ft1 = 1 + 1
ft4 = ft3 + ft2 = 2 + 1
ft5 = ft4 + ft3 = 3 + 2
*/
