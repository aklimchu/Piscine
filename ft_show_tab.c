/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklimchu <aklimchu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 08:35:20 by aklimchu          #+#    #+#             */
/*   Updated: 2024/03/06 14:03:11 by aklimchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"
//#include <stdlib.h>
//#include <errno.h>

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		write(1, "-", 1);
		write(1, "2", 1);
		nb = 147483648;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	if (nb < 10)
	{
		c = nb + '0';
		write(1, &c, 1);
	}
}

/*int	ft_strlen(char *str)
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
}*/

void	ft_show_tab(struct s_stock_str *par)
{
	int		i;

	i = 0;
	while (par[i].str != ((void *) 0))
	{
		write(1, par[i].str, par[i].size);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		write(1, par[i].copy, par[i].size);
		write(1, "\n", 1);
		i++;
	}
	return ;
}

/*int	main(void)
{
	char	*av[] = {"HELLO","MOI","HI", "44_5454..."};
	int		i = 0;
	int		size;
	t_stock_str *arr;

	size = 4;
	arr = ft_strs_to_tab(size, av);
	ft_show_tab(arr);
	free(arr);
	return (0);
}*/
