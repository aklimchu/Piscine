/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklimchu <aklimchu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 21:02:53 by aklimchu          #+#    #+#             */
/*   Updated: 2024/02/25 19:03:55 by aklimchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_atoi(char *str)
{
	int		i;
	int		neg;
	int		num;

	i = 0;
	num = 0;
	neg = 1;
	while ((str[i] > 8 && str[i] < 14) || str [i] == 32)
		i++;
	while (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
			neg = neg * (-1);
		i++;
	}
	while (str[i] > 47 && str[i] < 58)
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	num = num * neg;
	return (num);
}

/*int	main(void)
{
	char str[50] = "    -+--+123421ab567";
	printf("%d", ft_atoi(str));
	return (0);
}*/
