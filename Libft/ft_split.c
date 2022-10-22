/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 02:39:00 by obelaizi          #+#    #+#             */
/*   Updated: 2022/10/21 03:40:27 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *s, char c)
{
	int	total;
	int	check;

	check = 1;
	total = 0;
	if (s == 0)
		return (0);
	while (*s == c)
		s++;
	while (*s)
	{
		if (check)
		{
			total = 1;
			check = 0;
		}
		if (*s == c && *(s + 1) != c && *(s + 1))
			total++;
		s++;
	}
	return (total);
}

int	word_size(const char *s, char c)
{
	int	size;

	size = 0;
	while (*s != c)
	{
		size++;
		s++;
	}
	return (size);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		words;
	char	**str;
	int		j;

	i = 0;
	words = count_words(s, c);
	str = malloc(sizeof(str) * (words + 1));
	if (!str || !s)
		return (0);
	while (*s && i < words)
	{
		j = 0;
		while (*s == c)
			s++;
		str[i] = malloc(word_size(s, c) + 1);
		while (*s != c && *s)
		{
			str[i][j++] = *s;
			s++;
		}
		str[i++][j] = 0;
		s++;
	}
	return (str[i] = 0, str);
}
