/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoi <jechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 22:05:43 by jechoi            #+#    #+#             */
/*   Updated: 2021/03/07 02:24:43 by jechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_exist(char const *set, char find)
{
	while (*set)
	{
		if (*set == find)
			return (1);
		set++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*ret;
	char	*start;
	char	*end;

	if (!s1)
		return (0);
	if (!set)
		return (ft_strdup(s1));
	start = (char *)s1;
	end = start + ft_strlen(s1);
	while (*start && check_exist(set, *start))
		start++;
	while (start < end && check_exist(set, *(end - 1)))
		end--;
	len = end - start + 1;
	if (!(ret = (char *)malloc(sizeof(char) * len)))
		return (0);
	ft_strlcpy(ret, start, len);
	return (ret);
}
