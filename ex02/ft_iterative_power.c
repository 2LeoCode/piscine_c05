/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 18:41:30 by lsuardi           #+#    #+#             */
/*   Updated: 2020/02/20 13:32:45 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;

	i = nb;
	if ((nb == 0 && power != 0) || (power < 0))
		return (0);
	if (power == 0 || nb < 0)
		return (1);
	while (--power > 0)
		i *= nb;
	return (i);
}
