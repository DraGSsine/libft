/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchen <youchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:12:21 by youchen           #+#    #+#             */
/*   Updated: 2023/11/04 21:16:29 by youchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	s_len;
	char	*ptr_str;

	if (s == NULL)
		return (NULL);
	s_len = strlen(s);
	if (start >= s_len || len == 0)
		return (ft_strdup(""));
	if (start + len > s_len)
		len = s_len - start;
	ptr_str = malloc(len + 1);
	if (ptr_str == NULL)
		return (NULL);
	strncpy(ptr_str, s + start, len);
	ptr_str[len] = '\0';
	return (ptr_str);
}