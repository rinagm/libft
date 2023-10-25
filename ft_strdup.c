/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marinago <marinago@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 18:12:12 by marinago          #+#    #+#             */
/*   Updated: 2023/10/11 17:54:17 by marinago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*ptr;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(str);
	ptr = malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (0);
	while (i < len)
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[len] = '\0';
	return (ptr);
}
