/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 12:40:36 by obelaizi          #+#    #+#             */
/*   Updated: 2022/10/22 01:44:31 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check(const char *s, int c)
{
	while ((*s && c) || !c)
	{
		if (c == *s)
			return (1);
		s++;
	}
	return (0);
}

int	check_first(const char *s, const char *finder)
{
	int	i;

	i = 0;
	while (check(finder, s[i]) && s[i])
		i++;
	return (i);
}

int	check_last(const char *s, const char *finder)
{
	int	i;
	int	count;

	count = 0;
	i = ft_strlen(s) - 1;
	while (check(finder, s[i]) && s[i])
	{
		count++;
		i--;
	}
	return (count);
}

char	*ft_strtrim(char const *s, char const *finder)
{
	int		last;
	char	*result;
	int		first;

	if (!s || !finder)
		return (0);
	if (!(*s))
		return (result = (char *)s, result);
	first = check_first(s, finder);
	last = check_last(s, finder);
	if (first == ft_strlen(s))
			result = ft_substr("", 0, 0);
	else
		result = ft_substr(s, first, ft_strlen(s) - last - first);
	return (result);
}
// int main()
// {
// 	 char *s1 = "  \t \t \n   \n\n\n\t";
// 	 char *re = ft_strtrim(s1, " \n\t");
// 	//  if (!(strcmp(re, "")))
// 	// 	printf("Null");
// 	printf("%s",re);
// }