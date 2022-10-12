/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 12:19:07 by mghalmi           #+#    #+#             */
/*   Updated: 2022/08/06 12:42:09 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	total_words(int size, char **strs)
{
	int	total;

	total = 0;
	while (size--)
	{
		total = total + ft_strlen(*strs);
		strs++;
	}
	return (total);
}

void	append_word(char **joined_string, char *str)
{
	while (*str)
	{
		**joined_string = *str;
		(*joined_string)++;
		str++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		length;
	char	*joined_string;
	char	*p;
	int		i;

	length = total_words(size, strs) + ft_strlen(sep) * (size - 1) + 1;
	if (size == 0)
		length = 1;
	joined_string = malloc(length * sizeof(*joined_string));
	if (joined_string == NULL)
		return (NULL);
	p = joined_string;
	i = 0;
	while (i < size)
	{
		append_word(&p, strs[i++]);
		if (i < size)
			append_word(&p, sep);
	}
	*p = 0;
	return (joined_string);
}
