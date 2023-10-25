/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marinago <marinago@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 15:54:20 by marinago          #+#    #+#             */
/*   Updated: 2023/09/28 13:48:46 by marinago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	m;
	int		i;

	m = c;
	i = ft_strlen(s);
	if (!m)
		return ((char *) &s[i]);
	while (i >= 0)
	{
		if (s[i] == m)
			return ((char *) &s[i]);
		i--;
	}
	return (NULL);
}
