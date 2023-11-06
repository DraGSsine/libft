/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchen <youchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:54:24 by youchen           #+#    #+#             */
/*   Updated: 2023/11/06 14:40:00 by youchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*rtn;

	rtn = (t_list *) malloc(sizeof(t_list));
	if (!rtn)
		return (NULL);
	rtn->next = NULL;
	rtn->content = content;
	return (rtn);
}
