/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarayapa <sarayapa@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 16:40:13 by sarayapa          #+#    #+#             */
/*   Updated: 2025/09/10 21:09:18 by sarayapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count(int i)
{
	int	res;

	res = 0;
	while (i != 0)
	{
		i = i / 10;
		res++;
	}
	return (res);
}

char	*malloc_itoa(int *n)
{
	int		len;
	char	*dst;

	len = ft_count(*n);
	if (*n < 0)
	{
		dst = malloc(len + 2);
		dst[len + 1] = '\0';
		dst[0] = '-';
		*n = *n * (-1);
	}
	else
	{
		dst = malloc(len + 1);
		dst[len] = '\0';
	}
	return (dst);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*res;

	if (n == -2147483648)
		return ("-2147483648");
	else if (n == 2147483647)
		return ("2147483647");
	len = ft_count(n);
	if (n < 0)
		len++;
	if (n == 0)
		return ("0");
	if (!n)
		return (NULL);
	res = malloc_itoa(&n);
	while (len > 0 && n > 0)
	{
		res[len - 1] = '0' + (n % 10);
		n = n - (n % 10);
		n = n / 10;
		len--;
	}
	return (res);
}
