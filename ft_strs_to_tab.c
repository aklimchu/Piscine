/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklimchu <aklimchu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 13:36:27 by aklimchu          #+#    #+#             */
/*   Updated: 2024/03/06 13:45:42 by aklimchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"
#include <errno.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i = i + 1;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*buffer;

	i = 0;
	len = ft_strlen(src);
	buffer = malloc(len + 1);
	if (buffer == NULL)
	{
		errno = ENOMEM;
		return ((void *) 0);
	}
	while (i < len)
	{
		buffer[i] = src[i];
		i++;
	}
	buffer[i] = '\0';
	return (&buffer[0]);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*arr;

	i = 0;
	arr = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (arr == NULL)
		return ((void *) 0);
	i = 0;
	while (i < ac)
	{
		arr[i].size = ft_strlen(av[i]);
		arr[i].str = av[i];
		arr[i].copy = ft_strdup(av[i]);
		i++;
	}
	arr[i].str = ((void *) 0);
	arr[i].size = 0;
	arr[i].copy = ((void *) 0);
	return (arr);
}

/*#include <stdio.h>

int	main(void)
{
	char	*av[] = {"HELLO" , "MOI" , "HI"};
	int		i = 0;
	int		size;
	t_stock_str *arr;
	
	size = 3;
	arr = ft_strs_to_tab(size, av);
	i = 0;
	while (i < size)
	{
		printf("%d, %s, %s\n", arr[i].size, arr[i].str, arr[i].copy);
		i++;
	}
	free(arr);
	return (0);
}*/
