/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marinago <marinago@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 18:35:12 by marinago          #+#    #+#             */
/*   Updated: 2023/09/28 13:02:35 by marinago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	unsigned char		m;
	size_t				i;

	str = (unsigned char *)s;
	m = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == m)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}
