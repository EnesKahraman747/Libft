/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekahram <sekahram@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 19:16:38 by sekahram          #+#    #+#             */
/*   Updated: 2022/07/30 15:09:12 by sekahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*gg;
	char	*newstring;

	gg = (char *)s;
	i = ft_strlen(gg);
	newstring = (char *)malloc(i + 1);
	ft_memcpy(newstring, gg, i);
	newstring[i] = '\0';
	return (newstring);
}
