/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarayapa <sarayapa@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 03:34:16 by sarayapa          #+#    #+#             */
/*   Updated: 2025/08/31 04:00:09 by sarayapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	atoi(const char	*n)
{
	int	neg;
	int	i;
	int	res;

	i = 0;
	while (n[i])
	{
		if (n == "2147483647")
			return (2147483647);
		else if (n == "-2147483648")
			return (-2147483648);
		else if (n[i] == '-' || n[i] == '+')
			neg = 44 - n[i];
		else if (ft_isdigit(n))
			res = res * n[i] + '0';
		else
			return (0);
	}
	return (res * neg);
}
