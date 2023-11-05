/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchen <youchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:30:11 by youchen           #+#    #+#             */
/*   Updated: 2023/11/05 09:01:01 by youchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	int		i;
	void	*allocate_memory;

	i = 0;
	if (count == 0 || size == 0)
		return (0);
	allocate_memory = malloc(count * size);
	if (!allocate_memory)
		return (0);
	ft_memset(allocate_memory, 0, count * size);
	return (allocate_memory);
}
