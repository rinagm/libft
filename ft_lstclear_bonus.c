/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marinago <marinago@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 00:42:50 by marinago          #+#    #+#             */
/*   Updated: 2023/10/21 00:42:50 by marinago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;
	t_list	*nxt;

	node = *lst;
	while (node)
	{
		nxt = node->next;
		ft_lstdelone(node, del);
		node = nxt;
	}
	*lst = NULL;
}