/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ingrid <ingrid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 17:14:27 by ilemos-c          #+#    #+#             */
/*   Updated: 2025/07/31 21:46:56 by ingrid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		is_negative;
	int		len_n;
	long	nbr;
	long	temp;
	char	*ptr;
	int		index;

	len_n = 1;
	nbr = (long)n;
	is_negative = 0;
	if (nbr < 0)
	{
		is_negative = 1;
		nbr = -nbr;
	}
	temp = nbr;
	while (temp / 10 > 0)
	{
		temp = temp / 10;
		len_n++;
	}
	ptr = malloc(sizeof(char) * (len_n + is_negative + 1));
	if (!ptr)
		return (NULL);
	index = len_n + is_negative - 1;
	while (index >= is_negative)
	{
		ptr[index--] = (nbr % 10) + '0';
		nbr /= 10;
	}
	if (is_negative)
		ptr[0] = '-';
	ptr[len_n + is_negative] = '\0';
	return (ptr);
}
/*
int	main(void)
{
	int	n = -42;
	printf("%s\n", ft_itoa(n));
	return (0);
}*/
