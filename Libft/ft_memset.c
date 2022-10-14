/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:03:39 by obelaizi          #+#    #+#             */
/*   Updated: 2022/10/13 16:19:16 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int x, size_t n)
{
	size_t		index;
	char		*s;

	s = (char *)str;
	index = 0;
	while (index < n)
	{
		s[index] = x;
		index++;
	}
	return (str);
}
