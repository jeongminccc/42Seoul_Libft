/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoi </var/mail/jechoi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 00:38:02 by jechoi            #+#    #+#             */
/*   Updated: 2021/03/07 00:50:06 by jechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_str_cnt(char const *str, char c)
{
	size_t	ret;
	int		is_start;

	ret = 0;
	is_start = 0;
	while (*str)
	{
		if (*str != c && !is_start)
		{
			ret++;
			is_start = 1;
		}
		else if (*str == c)
			is_start = 0;
		str++;
	}
	return (ret);
}

char			**ft_split(char const *str, char c)
{
	char	**ret;
	char	*st;
	size_t	idx;
	size_t	word_size;

	if(!(ret = (char **)malloc(sizeof(char *) * (get_str_cnt(str, c) + 1))))
		return (0);
	idx = 0;
	while (*str)
	{
		st = (char *)str;
		word_size = 0;
		while (*str && *(str++) != c)
			word_size++;
		if (word_size == 0)
			continue;
		ret[idx] = (char *)malloc(sizeof(char) * (word_size + 1));
		ft_strlcpy(ret[idx++], st, word_size + 1);
	}
	ret[idx] = 0;
	return (ret);
}
