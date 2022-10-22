/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 00:19:37 by obelaizi          #+#    #+#             */
/*   Updated: 2022/10/16 18:36:30 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	int		i;

	if (!s)
		return (0);
	if (start >= (unsigned int)ft_strlen(s))
	{
		result = malloc(1);
		result [0] = 0;
		return (result);
	}
	result = malloc(len + 1);
	i = 0;
	if (!result || !s)
		return (0);
	while (start--)
		s++;
	while (len--)
	{
		result[i] = s[i];
		i++;
	}
	result[i] = 0;
	return (result);
}
