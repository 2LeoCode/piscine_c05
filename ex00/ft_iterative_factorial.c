/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 17:50:14 by lsuardi           #+#    #+#             */
/*   Updated: 2020/02/12 18:04:22 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;

	i = 0;
	if (nb == 0)
		return(1);
	else if (nb < 0)
		return(0);
	else
		nb ++;
		while (--nb > 0)
			i += nb;
		return (i);
}
