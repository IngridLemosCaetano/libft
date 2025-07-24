/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilemos-c <ilemos-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 12:04:06 by ilemos-c          #+#    #+#             */
/*   Updated: 2025/07/24 12:19:31 by ilemos-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;

	i = 0;
	while (nptr[i])
	{
		i *= 10;
	}
	return (i);
}
/*
int main()
{
	char *nptr = "100";
	printf("%s em inteiro é %d", nptr, ft_atoi(nptr));

	return 0;
}*/
