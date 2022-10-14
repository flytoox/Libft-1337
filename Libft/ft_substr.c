/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 00:19:37 by obelaizi          #+#    #+#             */
/*   Updated: 2022/10/13 23:37:08 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	int		i;
	int		j;

	j = --start;
	i = 0;
	result = malloc(len + 1);
	if (!result || !s)
		return (0);
	while (len--)
	{
		result[i] = s[j];
		j++;
		i++;
	}
	result[i] = 0;
	return (result);
}

int main()
{
	printf("%s", ft_substr("why", 5, 5));
}
