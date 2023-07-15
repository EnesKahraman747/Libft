/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekahram <sekahram@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 19:53:18 by sekahram          #+#    #+#             */
/*   Updated: 2022/07/30 15:05:19 by sekahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(char const *gg, char c)
{
	int	i;

	i = 0;
	while (gg[i])
	{
		if (gg[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	i;
	size_t	j;
	char	*gg;

	j = 0;
	i = 0;
	if (s1 == 0 || set == 0)
		return (NULL);
	len = ft_strlen(s1);
	while (s1[i] && ft_check(set, s1[i]))
		i++;
	while (len > i && ft_check(set, s1[len - 1]))
		len--;
	gg = malloc(sizeof(char) * (len - i + 1));
	if (gg == NULL)
		return (NULL);
	while (i < len)
		gg[j++] = s1[i++];
	gg[j] = '\0';
	return (gg);
}
