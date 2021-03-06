/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoi </var/mail/jechoi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 21:22:03 by jechoi            #+#    #+#             */
/*   Updated: 2021/03/06 21:30:22 by jechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t cnt, size_t size)
{
	void	*ret;

	if (!(ret = malloc(cnt * size)))
		return (0);
	ft_bzero(ret, cnt * size);
	return (ret);
}
