/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 17:11:41 by mghalmi           #+#    #+#             */
/*   Updated: 2022/08/03 21:11:09 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	is_num_or_char(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	first_char;
	int	i;

	i = 0;
	first_char = 1;
	while (str[i])
	{
		if (is_num_or_char(str[i]))
		{
			if (first_char && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] = str[i] - 32;
			else if (!first_char && str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
			first_char = 0;
		}
		else
			first_char = 1;
		i++;
	}
	return (str);
}
