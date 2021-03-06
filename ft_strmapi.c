/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoi </var/mail/jechoi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 01:13:27 by jechoi            #+#    #+#             */
/*   Updated: 2021/03/07 01:19:44 by jechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	len;
	unsigned int	pos;
	char			*ret;

	if (!s || !f)
		return (0);
	len = ft_strlen(s);
	pos = 0;
	if (!(ret = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	while (s[pos])
	{
		ret[pos] = f(pos, s[pos]);
		pos++;
	}
	ret[pos] = 0;
	return (ret);
}
