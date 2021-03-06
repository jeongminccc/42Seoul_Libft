/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoi <jechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 00:53:49 by jechoi            #+#    #+#             */
/*   Updated: 2021/03/07 02:26:15 by jechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int n)
{
	int len;

	len = (n <= 0) ? 1 : 0;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	char			*ret;
	unsigned int	tmp;
	int				len;

	len = ft_len(n);
	tmp = n < 0 ? -n : n;
	if (!(ret = (char *)malloc(len + 1)))
		return (0);
	ret[len--] = 0;
	ret[len--] = '0' + (tmp % 10);
	while (tmp /= 10)
		ret[len--] = '0' + (tmp % 10);
	if (n < 0)
		ret[0] = '-';
	return (ret);
}
