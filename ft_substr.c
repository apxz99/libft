/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarayapa <sarayapa@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 10:01:25 by sarayapa          #+#    #+#             */
/*   Updated: 2025/09/06 10:01:25 by sarayapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*temp;

	i = 0;
	temp = malloc((len + 1) * sizeof(char));
	while (s[start + i] && len > 0)
	{
		temp[i] = s[start + i];
		i++;
		len--;
	}
	temp[i] = '\0';
	return (temp);
}
