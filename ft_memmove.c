/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marinago <marinago@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:17:22 by marinago          #+#    #+#             */
/*   Updated: 2023/09/28 13:29:49 by marinago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*dst2;
	const unsigned char	*src2;

	dst2 = (unsigned char *)dst;
	src2 = (const unsigned char *)src;
	if (!src2 && !dst2 && n > 0)
		return (0);
	if (dst2 > src2)
	{
		while (n--)
		{
			dst2[n] = src2[n];
		}
	}
	else
		ft_memcpy(dst, src, n);
	return (dst2);
}
