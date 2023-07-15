/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekahram <sekahram@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 18:50:52 by sekahram          #+#    #+#             */
/*   Updated: 2022/07/30 15:04:58 by sekahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*gg;
	char	*ss;

	i = 0;
	gg = (char *)dst;
	ss = (char *)src;
	if (gg == 0 && ss == 0)
		return (0);
	while (i < n)
	{
		gg[i] = ss[i];
		i++;
	}
	return (gg);
}
