/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarayapa <sarayapa@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 21:48:44 by sarayapa          #+#    #+#             */
/*   Updated: 2025/09/08 10:23:46 by sarayapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = malloc(n + 1);
	while (s[i] && n > 0)
	{
		str[i] = s[i];
		n--;
		i++;
	}
	str[i] = '\0';
	return (str);
}
