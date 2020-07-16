/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdiphok <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 14:40:25 by thdiphok          #+#    #+#             */
/*   Updated: 2020/07/16 14:41:06 by thdiphok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
  int count;
  if (power < 0)
    return (0);
  
  if (power > 0)
  {
    count = nb * ft_recursive_power(nb, power - 1);
    return (count);
  }
  else
  {
    return(1);
  }
  
}
