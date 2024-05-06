/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklimchu <aklimchu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 08:40:33 by aklimchu          #+#    #+#             */
/*   Updated: 2024/02/27 08:23:55 by aklimchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_iterative_factorial(int nb)
{
	int		fact;

	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	if (nb < 0)
		return (0);
	fact = nb;
	while (nb > 1)
	{
		nb = nb - 1;
		fact = fact * nb;
	}
	return (fact);
}

/*int main (void)
{
	printf("%d", ft_iterative_factorial(-2));
	return (0);
}*/
