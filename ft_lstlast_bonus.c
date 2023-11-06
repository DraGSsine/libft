/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchen <youchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 21:17:51 by youchen           #+#    #+#             */
/*   Updated: 2023/11/06 21:32:26 by youchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*current_node;

	current_node = lst;
	while (current_node->next)
	{
		current_node = current_node->next;
	}
    return current_node;
}

#include <stdio.h>
int main()
{
    t_list *node1,*node2,*node3;

    node1 = ft_lstnew( (char *)1);
    node2 = ft_lstnew( (char *)5);
    ft_lstadd_front(&node1, node2);
    node3 = ft_lstlast(node1);
    if(node3)
    {
        printf("%s",(char *)node3->content);
    }

}