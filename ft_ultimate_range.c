/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklimchu <aklimchu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:53:33 by aklimchu          #+#    #+#             */
/*   Updated: 2024/02/29 14:25:54 by aklimchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		*str;

	if (min >= max)
	{
		str = NULL;
		return (0);
	}
	str = malloc((max - min + 1) * 4);
	if (str == NULL)
		return (-1);
	i = 1;
	str[0] = min;
	while (i < (max - min))
	{
		str[i] = str[i - 1] + 1;
		i++;
	}
	range[0] = str;
	return (i);
}

/*#include <stdio.h>

int	main(void)
{
	int		*arr[1];
	int		i;
	int		num;
	int		min;
	int		max;

	i = 0;
	min = 7;
	max = 14;
	num = ft_ultimate_range(arr, min, max);
	while (arr[0][i] <= (max - 1))
	{
		printf("%d  ", arr[0][i]);
		i++;
	}
	printf("\n%d", num);
	return (0);
}*/
