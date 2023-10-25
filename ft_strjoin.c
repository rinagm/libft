/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marinago <marinago@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 23:42:08 by marinago          #+#    #+#             */
/*   Updated: 2023/10/20 20:35:54 by marinago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len1;
	size_t	len2;
	size_t	len;

	len1 = 0;
	len2 = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	str = malloc(sizeof(char) * (len + 1));
	if (s1 == NULL || s2 == NULL || str == NULL)
		return (NULL);
	while (s1[len1] != '\0')
	{
		str[len1] = s1[len1];
		len1++;
	}
	while (s2[len2] != '\0')
	{
		str[len1 + len2] = s2[len2];
		len2++;
	}
	str[len1 + len2] = '\0';
	return (str);
}
