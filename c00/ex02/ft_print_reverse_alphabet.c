/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlevieux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:48:53 by mlevieux          #+#    #+#             */
/*   Updated: 2023/07/05 16:07:55 by mlevieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	count;

	count = 'z';
	while (count >= 'a')
	{
		write(1, &count, 1);
		count--;
	}
}

/*  int  main(void)
{
        ft_print_reverse_alphabet();
        return (0);
} */
