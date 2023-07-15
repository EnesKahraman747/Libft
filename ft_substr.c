/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekahram <sekahram@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 19:56:35 by sekahram          #+#    #+#             */
/*   Updated: 2022/07/30 15:04:27 by sekahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, size_t start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*gg;

	if (ft_strlen(s) < len)
		len = ft_strlen(s);
	gg = malloc(sizeof(char) * (len + 1));
	i = 0;
	j = 0;
	if (!gg)
		return (NULL);
	while (s[i])
	{
		if (i >= start && j < len)
		{
			gg[j] = s[i];
			j++;
		}
		i++;
	}
	gg[j] = '\0';
	return (gg);
}
