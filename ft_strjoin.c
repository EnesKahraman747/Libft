/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekahram <sekahram@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 19:20:11 by sekahram          #+#    #+#             */
/*   Updated: 2022/07/30 14:09:56 by sekahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*gg;
	size_t	g1;
	size_t	g2;
	int		i;

	i = -1;
	g1 = ft_strlen(s1);
	g2 = ft_strlen(s2);
	gg = malloc(sizeof(char) * (g1 + g2 + 1));
	while (s1[++i])
	{
		gg[i] = s1[i];
	}
	i = -1;
	while (s2[++i])
	{
		gg[g1] = s2[i];
		g1++;
	}
	gg[g1] = '\0';
	return (gg);
}
