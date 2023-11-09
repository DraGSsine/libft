/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchen <youchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 22:08:31 by youchen           #+#    #+#             */
/*   Updated: 2023/11/08 22:34:22 by youchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*dest1;
	char	*src1;

	i = 0;
	if (!(dest || src))
		return (NULL);
	dest1 = (char *)dest;
	src1 = (char *)src;
	while (i < n)
	{
		dest1[i] = src1[i];
		i++;
	}
	return (dest);
}
