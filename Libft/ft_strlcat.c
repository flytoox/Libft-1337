/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 18:35:26 by obelaizi          #+#    #+#             */
/*   Updated: 2022/10/22 01:54:14 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	s;
	size_t	i;
	size_t	j;
	size_t	h;

	if (!size)
		return (ft_strlen(src));
	s = ft_strlen(dst);
	j = ft_strlen(src);
	i = 0;
	if (size <= s)
		return (j + size);
	h = s;
	while (src[i] != '\0' && i < size - h - 1)
	{
		dst[s] = src[i];
		s++;
		i++;
	}
	dst[s] = 0;
	return (j + h);
}
