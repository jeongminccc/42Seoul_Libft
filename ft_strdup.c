/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoi <jechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 21:30:47 by jechoi            #+#    #+#             */
/*   Updated: 2021/03/07 02:20:05 by jechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*ret;
	size_t	idx;
	size_t	len;

	len = ft_strlen(src);
	ret = (char *)malloc(sizeof(char) * (len + 1));
	idx = -1;
	while (++idx < len)
		ret[idx] = src[idx];
	ret[idx] = '\0';
	return (ret);
}
