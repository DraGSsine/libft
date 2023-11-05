/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchen <youchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 21:23:50 by youchen           #+#    #+#             */
/*   Updated: 2023/11/02 22:58:23 by youchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*sp;
	size_t	i;

	sp = (char *)s;
	i = 0;
	while (i < n)
	{
		sp[i] = 0;
		i++;
	}
}
