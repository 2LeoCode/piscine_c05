/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 10:17:44 by lsuardi           #+#    #+#             */
/*   Updated: 2020/02/18 11:52:33 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recurs_sqrt(int i, int nbr)
{
	if (i * i == nbr)
		return (i);
	else if (i <= 46340)
		return (ft_recurs_sqrt(i + 1, nbr));
	else
		return (0);
}

int		ft_sqrt(int nb)
{
	if (nb <= 0)
		return (0);
	else
		return (ft_recurs_sqrt(0, nb));
}
