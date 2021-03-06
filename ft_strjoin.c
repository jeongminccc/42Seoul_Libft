/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoi </var/mail/jechoi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 21:59:23 by jechoi            #+#    #+#             */
/*   Updated: 2021/03/06 22:04:48 by jechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	size_t	ret_len;
	char	*ret;

	if (!s1 || !s2)
		return (0);
	ret_len = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!(ret = (char *)malloc(ret_len)))
		return (0);
	ft_strlcpy(ret, s1, ret_len);
	ft_strlcat(ret, s2, ret_len);
	return (ret);
}
