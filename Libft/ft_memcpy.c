/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 11:27:43 by obelaizi          #+#    #+#             */
/*   Updated: 2022/10/13 17:02:00 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *d, const void *s, size_t n)
{
	unsigned int	i;
	char			*dest;
	char			*src;

	src = (char *)s;
	dest = (char *)d;
	if (!src && !dest)
		return (0);
	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (d);
}
// int main ()
// {
// 	char *s=0;
// 	printf("%s",memcpy(NULL, NULL, 4));
// }