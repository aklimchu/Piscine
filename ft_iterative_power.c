/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklimchu <aklimchu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 10:44:24 by aklimchu          #+#    #+#             */
/*   Updated: 2024/02/27 08:34:46 by aklimchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_iterative_power(int nb, int power)
{
	int		i;
	int		result;

	i = 0;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	result = nb;
	while (i < (power - 1))
	{
		result = result * nb;
		i++;
	}
	return (result);
}

/*int	main(void)
{
	printf("%d", ft_iterative_power(-2, 3));
	return (0);
}*/
