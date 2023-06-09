/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumarque <lumarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 17:05:25 by lumarque          #+#    #+#             */
/*   Updated: 2023/04/23 17:20:07 by lumarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Deletes and frees the given element and every successor of that element,
 * using the function ’del’ and free(3).
 * Finally, the pointer to the list must be set to NULL.
 */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (lst)
	{
		while (*lst)
		{
			tmp = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = tmp;
		}
	}
	*lst = NULL;
}
