/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 14:51:43 by mghalmi           #+#    #+#             */
/*   Updated: 2022/08/08 19:10:15 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	check_sep(char c, char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		if (c == sep[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_strings(char *str, char *sep)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && check_sep(str[i], sep))
			i++;
		if (str[i])
			count++;
		while (str[i] && !check_sep(str[i], sep))
			i++;
	}
	return (count);
}

int	strlen_sep(char *str, char *sep)
{
	int	i;

	i = 0;
	while (str[i] && !check_sep(str[i], sep))
		i++;
	return (i);
}

char	*words(char *str, char *sep)
{
	int		wrd_len;
	int		i;
	char	*word;

	i = 0;
	wrd_len = strlen_sep(str, sep);
	word = malloc(sizeof(char) * (wrd_len + 1));
	while (i < wrd_len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**strs;
	int		i;

	i = 0;
	strs = (char **)malloc(sizeof(char *) * (count_strings(str, charset) + 1));
	while (*str)
	{
		while (*str && check_sep(*str, charset))
			str++;
		if (*str)
		{
			strs[i] = words(str, charset);
			i++;
		}
		while (*str && !check_sep(*str, charset))
			str++;
	}
	strs[i] = 0;
	return (strs);
}
