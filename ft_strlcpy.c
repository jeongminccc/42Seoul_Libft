/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoi <jechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 17:15:26 by jechoi            #+#    #+#             */
/*   Updated: 2021/03/07 03:01:30 by jechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	pos;

	pos = 0;
	while (src[pos] && pos + 1 < size)
	{
		dest[pos] = src[pos];
		pos++;
	}
	if (size != 0)
		dest[pos] = '\0';
	while (src[pos])
		pos++;
	return (pos);
}
