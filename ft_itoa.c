/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilemos-c <ilemos-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 17:14:27 by ilemos-c          #+#    #+#             */
/*   Updated: 2025/07/31 17:53:09 by ilemos-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int			i;
	char		*dst;
	const char	*src;
	int			*new_n;

	i = 0;
	new_n = (int *)n;
	while (new_n[i])
	{
		// if (new_n[i] == '-' || new_n[i] == '+')
		ft_strlcat(new_n[i], new_n[i + 1], );
		i++;
	}
}
