/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoi </var/mail/jechoi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 21:36:02 by jechoi            #+#    #+#             */
/*   Updated: 2021/03/06 21:59:02 by jechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	size_t	tmp_len;

	if (!s)
		return (0);
	if ((unsigned int)ft_strlen(s) < start)
		return (ft_strdup(""));
	tmp_len = ft_strlen(s + start);
	if (tmp_len < len)
		len = tmp_len;
	if (!(ret = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	ft_strlcpy(ret, s + start, len + 1);
	return (ret);
}
