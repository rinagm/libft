/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marinago <marinago@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:29:43 by marinago          #+#    #+#             */
/*   Updated: 2023/10/11 19:00:22 by marinago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && (ft_strchr((char *)set, s1[i]) != NULL))
		i++;
	len = ft_strlen(&s1[i]);
	if (len > 0)
	{
		while (s1[i + len - 1]
			&& (ft_strchr((char *)set, s1[i + len - 1])) != NULL)
			len--;
	}
	str = ((char *)malloc(sizeof(char) * (len + 1)));
	if (!str)
		return (0);
	ft_strlcpy(str, &s1[i], len + 1);
	return (str);
}
