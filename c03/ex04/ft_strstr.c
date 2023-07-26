/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlevieux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 09:20:34 by mlevieux          #+#    #+#             */
/*   Updated: 2023/07/17 15:21:30 by mlevieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (str[0] == '\0' || to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] == str[i + j])
		{
			if (to_find[j + 1] == '\0')
			{
				return (str + i);
			}
			j++;
		}
		i++;
	}
	return (0);
} */

char    *ft_strstr(char *str, char *to_find)
{
        int     i;
        int     j;

        i = 0;
        if (str[0] == '\0' || to_find[0] == '\0')
                return (str);
        while (str[i] != '\0')
        {
                j = 0;
                while (to_find[j] == str[i + j])
                {
                        if (to_find[j + 1] == '\0')
                        {
                                return (str + i);
                        }
                        j++;
                }
                i++;
        }
	return (str + i);
}

/* int main(void)
{
	char str[] = "Hello c'est b2o";
	char to_find[] = "c'est";
	ft_strstr(str, to_find);
	return 0;
} */
