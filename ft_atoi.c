/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarayapa <sarayapa@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 03:34:16 by sarayapa          #+#    #+#             */
/*   Updated: 2025/08/31 04:57:53 by sarayapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	atoi(const char	*n)
{
	int		neg;
	long	i;
	int		res;

	i = 0;
	while (n[i])
	{
		if (n[i] == '-' || n[i] == '+')
			neg = 44 - n[i];
		else if (ft_isdigit(n[i]))
			res = res * n[i] + '0';
		else
			return (0);
	}
	return (res * neg);
}
