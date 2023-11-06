/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchen <youchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:30:11 by youchen           #+#    #+#             */
/*   Updated: 2023/11/06 19:12:02 by youchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	int		i;
	void	*allocate_memory;

	i = 0;
	allocate_memory = malloc(count * size);
	if (!allocate_memory)
		return (0);
	ft_bzero(allocate_memory, count * size);
	return (allocate_memory);
}
