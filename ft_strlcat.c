/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marinago <marinago@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 13:05:39 by marinago          #+#    #+#             */
/*   Updated: 2023/09/27 18:11:08 by marinago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t dstsize)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;	

	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	i = 0;
	if (dstsize == 0)
		return (slen);
	if (dlen > dstsize)
		return (slen += dstsize);
	else
		slen += dlen;
	while (src[i] != '\0' && src != dst && dlen + 1 < dstsize)
	{
		dst[dlen] = src[i];
		dlen++;
		i++;
	}
	dst[dlen] = '\0';
	return (slen);
}
