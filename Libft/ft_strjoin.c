/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 00:39:06 by obelaizi          #+#    #+#             */
/*   Updated: 2022/10/13 23:22:10 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		size;
	int		i;
	int		j;

	i = 0;
	j = 0;
	size = ft_strlen(s1) + ft_strlen(s2);
	result = malloc(size + 1);
	if (!result || !s1 || !s2)
		return (0);
	while (i < size)
	{
		while (i < ft_strlen(s1))
		{
			result[i] = s1[i];
			i++;
		}
		result[i++] = s2[j++];
	}
	result[i] = 0;
	return (result);
}
