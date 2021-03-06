/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoi <jechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 21:04:52 by jechoi            #+#    #+#             */
/*   Updated: 2021/03/07 02:48:09 by jechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int ret;
	int m_cnt;

	m_cnt = 0;
	ret = 0;
	while (*str == ' ' || (9 <= *str && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			m_cnt++;
		str++;
	}
	while ('0' <= *str && *str <= '9')
	{
		ret = (ret * 10) + (*str - '0');
		str++;
	}
	return (m_cnt % 2 ? -ret : ret);
}
