/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekahram <sekahram@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 18:47:52 by sekahram          #+#    #+#             */
/*   Updated: 2022/07/30 15:12:00 by sekahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*gg;
	unsigned char	*ss;

	gg = (unsigned char *)s1;
	ss = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (gg[i] != ss[i])
			return (gg[i] - ss[i]);
		i++;
	}
	return (0);
}
