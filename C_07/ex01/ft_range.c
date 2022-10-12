/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 21:05:59 by mghalmi           #+#    #+#             */
/*   Updated: 2022/08/06 10:07:14 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*result;

	if (min >= max)
		return (NULL);
	i = max - min;
	result = (int *)malloc(sizeof(int) * i);
	if (result == NULL)
		return (NULL);
	i = 0;
	while (max > min)
	{
		result[i] = min++;
		i++;
	}
	return (result);
}
