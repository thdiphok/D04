/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdiphok <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 08:54:27 by thdiphok          #+#    #+#             */
/*   Updated: 2020/07/16 13:42:21 by thdiphok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_iterative_power(int number, int i_power)
{
	int i;
	int count;

	if (i_power < 0)
		return (0);
	count = 1;
	i = 0;
	while (i < i_power)
	{
		count = count * number;
		i++;
	}
	return (count);

}

