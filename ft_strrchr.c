/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarayapa <sarayapa@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 19:50:38 by sarayapa          #+#    #+#             */
/*   Updated: 2025/09/04 22:13:13 by sarayapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*temp;

	temp = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			temp = ((char *) &s[i]);
		i++;
	}
	if (s[i] == c)
		return ((char *) &s[i]);
	return (temp);
}

//int	main()
//{
//	printf("%s",ft_strrchr("Hello", 'l'));
//}