/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoi <jechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 22:35:40 by jechoi            #+#    #+#             */
/*   Updated: 2021/03/07 02:16:21 by jechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	void	*ret;

	if (!dest && !src)
		return (0);
	ret = dest;
	while (n--)
		*(unsigned char *)dest++ = *(unsigned char *)src++;
	return (ret);
}
