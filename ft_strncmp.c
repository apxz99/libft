/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarayapa <sarayapa@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 03:34:27 by sarayapa          #+#    #+#             */
/*   Updated: 2025/08/31 04:09:21 by sarayapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	strcmp(const char *s1, const char *s2, size_t n)
{
	int	i;
	
	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] != s2[i]);
		else
			i++;
	}
	return (0);
}