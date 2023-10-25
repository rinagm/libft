/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marinago <marinago@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 19:15:08 by marinago          #+#    #+#             */
/*   Updated: 2023/10/02 17:41:17 by marinago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *largestr, const char *smallstr, size_t len)
{
	size_t	len_smallstr;
	size_t	i;
	size_t	j;

	len_smallstr = ft_strlen(smallstr);
	i = 0;
	j = 0;
	if (len_smallstr == 0)
		return ((char *)largestr);
	while (largestr[i] != '\0' && i < len)
	{
		if (largestr[i] == smallstr[0])
		{
			while (smallstr[j] != '\0' && largestr[i + j] == smallstr[j]
				&& (i + j) < len)
				j++;
			if (smallstr[j] == '\0')
				return ((char *)largestr + i);
		}
		i++;
	}
	return (0);
}
