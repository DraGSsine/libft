/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                          :+:      :+:    :+:*/
/*                                                    +:+ +:+         +:+     */
/*   By: youchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:48:49 by youchen           #+#    #+#             */
/*   Updated: 2023/10/31 17:48:52 by youchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;
	size_t	i;

	if (needle == NULL || *needle == '\0')
		return ((char *)haystack);
	if (len == 0)
		return (NULL);
	needle_len = strlen(needle);
	i = 0;
	while (haystack[i] && i + needle_len <= len)
	{
		if (strncmp(haystack + i, needle, needle_len) == 0)
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}
