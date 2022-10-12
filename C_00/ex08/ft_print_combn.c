/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 10:22:40 by mghalmi           #+#    #+#             */
/*   Updated: 2022/07/21 13:27:20 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(int arr[], int size)
{
	int		i;

	i = 0;
	while (i < size)
	{
		ft_putchar(arr[i] + '0');
	i++;
	}
	if (arr[0] < 10 - size)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

int	ft_get_index(int arr[], int size)
{
	int	index;

	index = size - 1;
	while (index >= 0)
	{
		if (arr[index] == arr[index - 1] + 1)
		{
			index--;
		}
		else
		{
			break ;
		}
	}
	return (index - 1);
}

void	ft_reset_array(int arr[], int size, int index)
{
	arr[index]++;
	index++;
	while (index < size)
	{
		arr[index] = arr[index - 1] + 1;
		index++;
	}
}

void	ft_print_combn(int n)
{
	int	i;
	int	arr[10];

	i = 0;
	while (i < n)
	{
		arr[i] = i;
		i++;
	}
	while (arr[0] <= 10 - n)
	{
		if (arr[n - 1] < 9)
		{
			ft_print_numbers(arr, n);
			arr[n - 1]++;
		}
		else
		{
			ft_print_numbers(arr, n);
			i = ft_get_index(arr, n);
			if (i < 0)
				break ;
			ft_reset_array(arr, n, i);
		}
	}
}
