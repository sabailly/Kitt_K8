/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarbaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 20:35:22 by sarbaill          #+#    #+#             */
/*   Updated: 2018/02/25 22:31:21 by sarbaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_primes(int nb)
{
	int i;

	i = 1;
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	while (i++ <= nb / 2)
		if (nb % i == 0)
			return (0);
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_primes(nb))
		nb++;
	return (nb);
}
