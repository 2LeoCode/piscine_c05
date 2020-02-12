/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 19:00:10 by lsuardi           #+#    #+#             */
/*   Updated: 2020/02/12 20:24:03 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	int i;

	i = nb;
	if (power == 0)
		return(0);
	else if (--power > 0)
		ft_recursive_power(i * nb, power);
	else
		return(i);
}
