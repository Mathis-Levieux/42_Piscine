/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlevieux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 09:04:54 by mlevieux          #+#    #+#             */
/*   Updated: 2023/07/07 09:14:10 by mlevieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a / *b;
	*b = *a % *b;
	*a = c;
}

/* int	main(void)
{
	int a = 20;
	int b = 5;
	int *pa = &a;
	int *pb = &b;
	ft_ultimate_div_mod(pa, pb);
	return 0;
} */
