/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklimchu <aklimchu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 10:26:59 by aklimchu          #+#    #+#             */
/*   Updated: 2024/02/29 14:22:40 by aklimchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		i;
	int		*buffer;

	if (min >= max)
	{
		buffer = NULL;
		return (buffer);
	}
	buffer = malloc((max - min + 1) * 4);
	i = 1;
	buffer[0] = min;
	while (i < (max - min))
	{
		buffer[i] = buffer[i - 1] + 1;
		i++;
	}
	return (&buffer[0]);
}

/*#include <stdio.h>

int	main()
{
	int		*arr;
	int		i;
	int		min;
	int		max;

	i = 0;
	min = 5;
	max = 10;
	arr = ft_range(min, max);
	if (arr == NULL)
	{
		printf("%d\n", 0);
		return (0);
	}
	while (arr[i] <= (max - 1))
	{
		printf("%d  ", arr[i]);
		i++;
	}
	return (0);
}*/
