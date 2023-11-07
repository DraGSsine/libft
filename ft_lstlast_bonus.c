/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchen <youchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 21:17:51 by youchen           #+#    #+#             */
/*   Updated: 2023/11/07 14:28:50 by youchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*current_node;

	if (!lst)
	{
		return (NULL);
	}
	current_node = lst;
	while (current_node->next)
	{
		current_node = current_node->next;
	}
	return (current_node);
}
