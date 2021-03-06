/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoi </var/mail/jechoi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 20:36:32 by jechoi            #+#    #+#             */
/*   Updated: 2021/03/06 20:59:40 by jechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	size_t	f_len;
	size_t	s_len;
	size_t	pos;

	if (!*find)
		return ((char *)str);
	pos = 0;
	f_len = ft_strlen(find);
	s_len = ft_strlen(str);
	if (s_len < f_len || len < f_len)
		return (0);
	while (f_len + pos <= len)
	{
		if (str[pos] == *find && ft_strncmp(str + pos, find, f_len) == 0)
			return ((char *)str + pos);
		pos++;
	}
	return (0);
}
