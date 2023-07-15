/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekahram <sekahram@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 19:23:17 by sekahram          #+#    #+#             */
/*   Updated: 2022/07/30 15:07:39 by sekahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	j;
	size_t	i;

	j = 0;
	while (dst[j] && j < size)
		j++;
	i = j;
	while (src[j - i] && (j + 1) < size)
	{
		dst[j] = src[j - i];
		j++;
	}
	if (i < size)
		dst[j] = '\0';
	return (i + ft_strlen(src));
}
