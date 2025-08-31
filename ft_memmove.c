/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarayapa <sarayapa@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 10:09:14 by sarayapa          #+#    #+#             */
/*   Updated: 2025/08/31 12:07:31 by sarayapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *s, size_t n)
{
	unsigned char *temp; 
	unsigned char *src; 

	temp = (unsigned char *)dest;
	src = (unsigned char *)s;
	if (ft_strlen(dest) < ft_strlen(s))
	{
		while (n > 0)
		{
			*temp++ = *src++;
			n--;
		}
		*temp++ = '\0';
	}
	else
	{
		while (n > 0)
		{
			*temp++ = *src++;
			n--;
		}
	}
	return (temp);
}