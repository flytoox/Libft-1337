/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 21:27:01 by obelaizi          #+#    #+#             */
/*   Updated: 2022/10/09 22:26:33 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<string.h>

int	checker(char *s, char *finder, int size, size_t count)
{
	int	check;

	check = 0;
	while (s[check] == finder[check] && s[check] && count)
	{
		check++;
		count--;
	}
	if (check == size)
		return (1);
	return (0);
}

char	*ft_strnstr(char *str, char *finder, size_t n)
{
	size_t	count;

	count = 0;
	if (*finder == 0)
		return (str);
	while (*str && count < n)
	{
		if (finder[0] == str[0])
			if (checker(str, finder, ft_strlen(finder), n - count))
				return (str);
		str++;
		count++;
	}
	return (0);
}