/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlevieux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 11:37:46 by mlevieux          #+#    #+#             */
/*   Updated: 2023/07/13 12:06:52 by mlevieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	else
	{
		i = power;
		result = 1;
		while (i > 0)
		{
			result = result * nb;
			i--;
		}
	}
	return (result);
}

/* int	main(void)
{
	printf("%d", ft_iterative_power(5, 3));
return 0;
} */
