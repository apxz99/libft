/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarayapa <sarayapa@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 18:44:48 by sarayapa          #+#    #+#             */
/*   Updated: 2025/09/08 19:05:47 by sarayapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*dst;

	i = 0;
	j = 0;
	k = 0;
	dst = malloc(ft_strlen(s1) - ft_strlen(set) + 1);
	while (i < (ft_strlen(s1) - ft_strlen(set)))
	{
		if (s1[j] != set[k])
		{
			dst[i] = s1[j];
			i++;
			j++;
		}
		else
		{
			j++;
			k++;
		}
	}
	dst[i] = '\0';
	return (dst);
}
