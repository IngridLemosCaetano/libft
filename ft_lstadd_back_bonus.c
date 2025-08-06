/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ingrid <ingrid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 10:51:17 by ingrid            #+#    #+#             */
/*   Updated: 2025/08/06 11:06:28 by ingrid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*add_back;

	if (lst)
	{
		if (*lst)
		{
			add_back = *lst;
			while (add_back->next)
				add_back = add_back->next;
			add_back->next = new;
		}
		else
			*lst = new;
	}
}
