/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklimchu <aklimchu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 13:17:39 by aklimchu          #+#    #+#             */
/*   Updated: 2024/02/19 08:40:21 by aklimchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int		a;

	a = 1;
	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
		{
			a = 1;
		}
		else
		{
			a = 0;
			break ;
		}
		str = str + 1;
	}
	return (a);
}
