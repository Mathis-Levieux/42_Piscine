/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlevieux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 09:19:28 by mlevieux          #+#    #+#             */
/*   Updated: 2023/07/06 15:45:43 by mlevieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(char h, char t, char d)
{
	ft_putchar(h);
	ft_putchar(t);
	ft_putchar(d);
	if (h < '7' || t < '8' || d < '9')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char	digit;
	char	ten;
	char	hundred;

	hundred = '0';
	while (hundred <= '7')
	{
		ten = hundred + 1;
		while (ten <= '8')
		{
			digit = ten + 1;
			while (digit <= '9')
			{
				ft_print(hundred, ten, digit);
				digit++;
			}
			ten++;
		}
		hundred++;
	}
}

/* int	main(void)
{
	ft_print_comb();
	return (0);
} */
