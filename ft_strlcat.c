/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoi </var/mail/jechoi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 17:16:34 by jechoi            #+#    #+#             */
/*   Updated: 2021/03/06 17:18:03 by jechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t ret;

	ret = 0;
	while (*dest && ret < size)
	{
		dest++;
		ret++;
	}
	while (*src && ret + 1 < size)
	{
		*dest = *src;
		dest++;
		src++;
		ret++;
	}
	if (ret < size)
		*dest = '\0';
	while (*src)
	{
		src++;
		ret++;
	}
	return (ret);
}
