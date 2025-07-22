/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilemos-c <ilemos-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 11:40:23 by ilemos-c          #+#    #+#             */
/*   Updated: 2025/07/22 14:40:50 by ilemos-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
/*
int	main(void)
{
	int a = 'a';
	int z = 'Z';
	int i = '7';
	int n = 7;
	printf("%d\n",ft_isalpha(a));
	printf("%d\n",ft_isalpha(z));
	printf("%d\n",ft_isalpha(i));
	printf("%d\n",ft_isalpha(n));
	return (0);
}*/
