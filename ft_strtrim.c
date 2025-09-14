/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarayapa <sarayapa@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 18:44:48 by sarayapa          #+#    #+#             */
/*   Updated: 2025/09/13 20:39:39 by sarayapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *str, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(str) - 1;
	if (!str)
		return (NULL);
	if (!set)
		return (ft_strdup(str));
	while (ft_strchr(set, str[i]))
		i++;
	while (ft_strrchr(set, str[j]))
		j--;
	return (ft_substr(str, i, j - i + 1));
}
