/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlevieux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 11:00:07 by mlevieux          #+#    #+#             */
/*   Updated: 2023/07/18 11:28:26 by mlevieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 0;
	if (nb <= 1)
		return (2);
	while (ft_is_prime(nb) == 0)
		nb++;
	if (ft_is_prime(nb))
		i = nb;
	return (i);
}

/* int main(void)
{
	printf("%d", ft_find_next_prime(38));
	return 0;
} */
