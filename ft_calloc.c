/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchen <youchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:30:11 by youchen           #+#    #+#             */
/*   Updated: 2023/11/11 16:46:13 by youchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*allocate_memory;

	allocate_memory = malloc(count * size);
	if (!allocate_memory)
		return (0);
	ft_bzero(allocate_memory, count * size);
	return (allocate_memory);
}
