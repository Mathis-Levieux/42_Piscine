/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlevieux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 09:41:47 by mlevieux          #+#    #+#             */
/*   Updated: 2023/07/10 15:04:14 by mlevieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	count;
	int	reverse_count;
	int	temp;

	count = 0;
	reverse_count = size - 1;
	while (count < reverse_count)
	{
		temp = tab[count];
		tab[count] = tab[reverse_count];
		tab[reverse_count] = temp;
		count++;
		reverse_count--;
	}
}

int	main(void)
{
	int tab[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	ft_rev_int_tab(tab, 9);
	return 0;
}
