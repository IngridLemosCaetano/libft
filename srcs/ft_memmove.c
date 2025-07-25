/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilemos-c <ilemos-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 18:14:53 by ilemos-c          #+#    #+#             */
/*   Updated: 2025/07/24 18:31:27 by ilemos-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char	*v_dest;
	const unsigned char	*v_src;

	i = 0;
	v_dest = (unsigned char *)dest;
	v_src = (const unsigned char *)src;
	if (dest == NULL || src == NULL)
		return (NULL);
	if (v_dest < v_src)
	{
		while (i < n)
		{
			v_dest[i] = v_src[i];
			i++;
		}
	}
	else
	{
		while (n > 0)
		{
			n--;
			v_dest[n] = v_src[n];
		}
	}	
	return (dest);
}
/*
int	main(void)
{
	char	src[30] = "Escola 42";
	printf("Antes: %s\n", src);
	ft_memmove(src + 9, src, 20);	
	printf("Depois: %s\n", src);
	return (0);
}*/
