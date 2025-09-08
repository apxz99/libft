/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarayapa <sarayapa@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 05:38:41 by sarayapa          #+#    #+#             */
/*   Updated: 2025/09/09 05:50:11 by sarayapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *d, const void *s, size_t n)
{
	unsigned char	*temp;
	unsigned char	*sorce;
	temp = (unsigned char *)d;
	sorce = (unsigned char *)s;
	while(n > 0)
	{
		*temp++ = *sorce++;
		n--;
	}
	return (temp);
}
