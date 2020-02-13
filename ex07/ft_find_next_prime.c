/* ************************************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 10:46:57 by lsuardi           #+#    #+#             */
/*   Updated: 2020/02/13 11:02:09 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;

	i = 1;
	if (nb <= 1)
		return (0);
	while (++i < nb)
		if (!(nb % i))
			return (0) ;
	return (1);
}

int 	ft_find_next_prime(int nb)
{
	int i;

	i = nb;
	if (ft_is_prime(nb))
		return(nb);
	else
		return (ft_find_next_prime(i + 1));
}
