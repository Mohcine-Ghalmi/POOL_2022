/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 12:09:55 by mghalmi           #+#    #+#             */
/*   Updated: 2022/07/30 22:29:02 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_power(int nb, int power)
{
	if (!power)
		return (1);
	else if (power < 0)
		return (0);
	return (nb * ft_power(nb, power - 1));
}

int	ft_sqrt(int nb)
{
	int	sqr;

	sqr = 1;
	if (nb > 0)
	{
		while (sqr <= 46360)
		{
			if (ft_power(sqr, 2) == nb)
				return (sqr);
			sqr++;
		}
	}
	return (0);
}
