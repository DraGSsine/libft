/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchen <youchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:03:14 by youchen           #+#    #+#             */
/*   Updated: 2023/11/06 20:28:10 by youchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*current_node;
	int		i;

	i = 0;
	current_node = lst;
	while (current_node)
	{
		i++;
		current_node = current_node->next;
	}
	return (i);
}
