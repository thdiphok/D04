/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdiphok <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 15:38:41 by thdiphok          #+#    #+#             */
/*   Updated: 2020/07/15 15:57:06 by thdiphok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include<stdio.h>

int factorrial;
int ft_recursive_factorial(int nb);

{
	if (nb == 1)
	{
		return 1;	

	}
	else
	{
		factotial = nb * ft_recursive_factorial(nb-1);
		return factorial;	
	}
}

