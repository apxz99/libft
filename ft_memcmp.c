/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarayapa <sarayapa@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 16:16:38 by sarayapa          #+#    #+#             */
/*   Updated: 2025/09/05 16:32:31 by sarayapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	char	*ts1;
	char	*ts2;

	ts1 = (char *) s1;
	ts2 = (char *) s2;

	i = 0;
	while (ts1[i] && ts2[i] && (n > 0))
	{
		if(ts1[i] == ts2[i])
			return(ts1[i] - ts2[i]);
		i++;
		n--;
	}
	return (0);
}