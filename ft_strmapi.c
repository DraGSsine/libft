/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchen <youchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:30:54 by youchen           #+#    #+#             */
/*   Updated: 2023/11/06 07:00:06 by youchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char *s, char (*f)(unsigned int, char))
{
	int		i;
	int		len;
	char	*map;

	i = 0;
	if (s == 0)
		return (NULL);
	len = ft_strlen(s);
	map = malloc(sizeof(char) * (len + 1));
	if (!map)
		return (NULL);
	while (s[i] != '\0')
	{
		map[i] = f(i, s[i]);
		i++;
	}
	map[i] = '\0';
	return (map);
}
