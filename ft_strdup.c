/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchen <youchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:13:30 by youchen           #+#    #+#             */
/*   Updated: 2023/11/06 19:08:53 by youchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	size_t	i;
	size_t	len;
	char	*string;

	string = NULL;
	i = 0;
	len = ft_strlen (s1);
	string = malloc (len + 1);
	if (!string)
	{
		return (NULL);
	}
	while (i <= len)
	{
		string[i] = s1[i];
		i++;
	}
	return (string);
}
