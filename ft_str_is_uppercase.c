/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklimchu <aklimchu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 13:38:34 by aklimchu          #+#    #+#             */
/*   Updated: 2024/02/19 08:43:49 by aklimchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int		a;

	a = 1;
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
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
