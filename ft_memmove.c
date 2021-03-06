/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoi <jechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 16:07:29 by jechoi            #+#    #+#             */
/*   Updated: 2021/03/07 02:26:30 by jechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp1;
	unsigned char	*tmp2;

	if (!dest && !src)
		return (0);
	tmp1 = (unsigned char *)dest;
	tmp2 = (unsigned char *)src;
	if (dest < src)
	{
		while (n--)
			*tmp1++ = *tmp2++;
	}
	else
	{
		tmp1 += n;
		tmp2 += n;
		while (n--)
			*(--tmp1) = *(--tmp2);
	}
	return (dest);
}
