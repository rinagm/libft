/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marinago <<marinago@student.42madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 13:02:05 by marinago          #+#    #+#             */
/*   Updated: 2023/09/23 13:02:05 by marinago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	m;

	m = c;
	while (*str != '\0')
	{
		if (*str == m)
		{
			return ((char *) str);
		}
		str++;
	}
	if (m == '\0')
		return ((char *) str);
	return (0);
}
