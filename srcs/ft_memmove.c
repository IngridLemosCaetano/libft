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
	char	*v_dest;
	char	*v_src;

	i = 0;
	v_dest = (char *)dest;
	v_src = (char *)src;
	if (dest < src)
	{
		v_dest[i] = v_src[i];
		i++;
	}
	
	return (dest);
}
