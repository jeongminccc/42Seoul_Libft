/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoi <jechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 17:22:53 by jechoi            #+#    #+#             */
/*   Updated: 2021/03/07 02:24:26 by jechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*ret;

	ret = 0;
	while (*str)
	{
		if (*str == (unsigned char)c)
			ret = (char *)str;
		str++;
	}
	if (!c)
		return ((char *)str);
	return (ret);
}
