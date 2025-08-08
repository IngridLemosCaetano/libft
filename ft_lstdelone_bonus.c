/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ingrid <ingrid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 14:57:04 by ilemos-c          #+#    #+#             */
/*   Updated: 2025/08/07 23:16:34 by ingrid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	if (del)
		(del)(lst->content);
	free(lst);
}

int	main(void)
{
	t_list	*head = NULL;

	int	*a = malloc(sizeof(int));
	int	*b = malloc(sizeof(int));
	int	*c = malloc(sizeof(int));


	return (0);
}
