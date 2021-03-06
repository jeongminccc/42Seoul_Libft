/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoi <jechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 21:00:32 by jechoi            #+#    #+#             */
/*   Updated: 2021/03/07 03:08:36 by jechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			pos;
	unsigned char	*t1;
	unsigned char	*t2;

	pos = 0;
	t1 = (unsigned char *)s1;
	t2 = (unsigned char *)s2;
	while (n--)
	{
		if (!t1[pos] || !t2[pos] || t1[pos] != t2[pos])
			return (t1[pos] - t2[pos]);
		pos++;
	}
	return (0);
}
