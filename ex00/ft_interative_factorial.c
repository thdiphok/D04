/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_interative_factorial.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdiphok <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 08:53:12 by thdiphok          #+#    #+#             */
/*   Updated: 2020/07/15 15:56:36 by thdiphok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_interative_factorial(int nb)
{
	int fact =1;
	if (nb == 0)
	{	
		return (0);
	}

	else
	{	
		while (nb > 1)
		{
			fact = fact * nb;
			nb--;
			
		}
		return fact;
	}
}
