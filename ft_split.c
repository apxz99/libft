/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarayapa <sarayapa@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 18:58:25 by sarayapa          #+#    #+#             */
/*   Updated: 2025/09/10 20:17:00 by sarayapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_countsplit(const char *s, char c)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 1;
	while (s[i])
	{
		if ((s[i] == c) && (s[i + 1] != c && s[i + 1]))
			len++;
		i++;
	}
	return (len);
}

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

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	z;
	size_t	x;
	char	**dst;

	i = 0;
	j = 0;
	z = 0;
	dst = malloc((ft_countsplit(s, c)) * sizeof(char *));
	while (j < (ft_countsplit(s, c)))
	{
		x = 0;
		while (s[i] != c && s[i])
		{
			i++;
			x++;
		}
		dst[j] = strndup(s + z, x);
		while ((s[i] == c) && (s[i + 1] != c) && (s[i + 1]))
			i++;
		z = i;
		j++;
	}
	return (dst);
}
