/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklimchu <aklimchu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 12:09:30 by aklimchu          #+#    #+#             */
/*   Updated: 2024/02/27 17:43:15 by aklimchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] > s2[i])
			return (1);
		if (s1[i] < s2[i])
			return (-1);
		else
			i++;
	}
	return (0);
}

int	minstr(char *arr[])
{
	int		m;
	int		i;

	m = 0;
	i = 0;
	while (arr[i + 1])
	{
		if (ft_strcmp(arr[m], arr[i + 1]) == 1)
		{
			m = i + 1;
			i++;
		}
		else
			i++;
	}
	return (m);
}

char	**sortarr(int argc, char *argv[])
{
	int		j;
	int		min;
	char	*temp[2];

	j = 1;
	min = 1;
	while (j < argc - 1)
	{
		min = minstr(&argv[j]) + j;
		temp[1] = argv[j];
		argv[j] = argv[min];
		argv[min] = temp[1];
		j++;
	}
	return (argv);
}

int	main(int argc, char *argv[])
{
	int		i;
	int		j;

	i = 1;
	j = 0;
	sortarr(argc, argv);
	while (i < argc)
	{
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		j = 0;
		i++;
	}
	return (0);
}
