/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlevieux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 18:49:38 by mlevieux          #+#    #+#             */
/*   Updated: 2023/07/06 19:15:22 by mlevieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/* int main(void)
{
	int a = 20;
	int b = 5;
	int div;
	int *pdiv = &div;
	int mod;
	int *pmod = &mod;
	ft_div_mod(a, b, pdiv, pmod);
 	printf("%d", div);
	printf("%d", mod);
	return 0;
} */
