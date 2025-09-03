/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarayapa <sarayapa@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 18:06:08 by sarayapa          #+#    #+#             */
/*   Updated: 2025/09/04 05:23:44 by sarayapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while ((size > 0) && dst[i] && src[i])
	{
		dst[i] = src[i];
		size--;
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
