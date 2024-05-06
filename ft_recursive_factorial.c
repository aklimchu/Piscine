/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklimchu <aklimchu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 10:24:43 by aklimchu          #+#    #+#             */
/*   Updated: 2024/02/27 08:26:46 by aklimchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_recursive_factorial(int nb)
{
	int		fact;

	fact = 0;
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	if (nb > 1)
		fact = nb * ft_recursive_factorial(nb - 1);
	return (fact);
}

/*int main (void)
{
	printf("%d", ft_recursive_factorial(1));
	return (0);
}*/
