/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchen <youchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:50:32 by youchen           #+#    #+#             */
/*   Updated: 2023/11/05 18:25:49 by youchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr_str;
	size_t	i;
	size_t	x;

	i = 0;
	x = 0;
	ptr_str = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!ptr_str)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		ptr_str[i] = s1[i];
		i++;
	}
	while (x < ft_strlen(s2))
	{
		ptr_str[i] = s2[x];
		x++;
		i++;
	}
	ptr_str[i] = '\0';
	return (ptr_str);
}
