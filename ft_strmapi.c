/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekahram <sekahram@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 19:29:41 by sekahram          #+#    #+#             */
/*   Updated: 2022/07/30 15:05:49 by sekahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char f(unsigned int, char))
{
	size_t	len;
	char	*gg;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	len = ft_strlen(s);
	gg = malloc(sizeof(char) * len + 1);
	if (!gg)
		return (NULL);
	while (s[i])
	{
		gg[i] = f(i, s[i]);
		i++;
	}
	gg[i] = '\0';
	return (gg);
}
