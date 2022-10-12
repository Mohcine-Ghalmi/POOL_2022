/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 12:12:18 by mghalmi           #+#    #+#             */
/*   Updated: 2022/07/26 12:29:56 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	signe;
	int	res;

	signe = 1;
	res = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
			str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
		signe *= -1;
	str++;
	}
	while (*str >= '0' && *str <= '9')
	{
	res = res * 10 + *str - '0';
	str++;
	}
	return (res * signe);
}
