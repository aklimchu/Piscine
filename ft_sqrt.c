/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklimchu <aklimchu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 15:54:49 by aklimchu          #+#    #+#             */
/*   Updated: 2024/02/27 08:45:33 by aklimchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int		i;
	int		d;

	i = 0;
	d = 1;
	while (nb > 0)
	{
		nb -= d;
		d += 2;
		i++;
	}
	if (nb < 0)
		return (0);
	else
		return (i);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d", ft_sqrt(0));
	return (0);
}*/
