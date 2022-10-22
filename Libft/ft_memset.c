/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:03:39 by obelaizi          #+#    #+#             */
/*   Updated: 2022/10/16 17:03:25 by obelaizi         ###   ########.fr       */
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
