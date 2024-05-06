/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklimchu <aklimchu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 18:01:21 by aklimchu          #+#    #+#             */
/*   Updated: 2024/02/27 09:20:11 by aklimchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int		n;

	n = 2;
	while (n <= nb / 2)
	{
		if (nb % n == 0)
			return (0);
		else
			n++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (ft_is_prime(nb) != 1)
		nb += 1;
	return (nb);
}

/*#include <stdio.h>

int main(void)
{
	printf("%d", ft_find_next_prime(0));	
	return (0);
}*/
