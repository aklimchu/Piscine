/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklimchu <aklimchu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 13:29:22 by aklimchu          #+#    #+#             */
/*   Updated: 2024/02/19 08:41:59 by aklimchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int		a;

	a = 1;
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
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
