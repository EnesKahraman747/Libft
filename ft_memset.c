/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekahram <sekahram@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 18:55:49 by sekahram          #+#    #+#             */
/*   Updated: 2022/07/30 14:50:52 by sekahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*gg;
	size_t			i;

	gg = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		gg[i++] = (unsigned char)c;
	}
	return (gg);
}
