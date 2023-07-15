/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekahram <sekahram@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 18:52:28 by sekahram          #+#    #+#             */
/*   Updated: 2022/07/30 15:11:14 by sekahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int		i;
	char	*gg;
	char	*ss;

	gg = (char *)dst;
	ss = (char *)src;
	i = 0;
	if (gg == ss)
		return (gg);
	if (gg > ss)
	{
		while (len--)
			*(gg + len) = *(ss + len);
		return (gg);
	}
	else
		return (ft_memcpy(dst, src, len));
}
