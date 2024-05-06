/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize1.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklimchu <aklimchu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 09:58:22 by aklimchu          #+#    #+#             */
/*   Updated: 2024/02/19 10:22:16 by aklimchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check(char str)
{
	int		a;

	a = 0;
	if (str < 48)
	{
		a = 1;
	}
	if ((str > 57) && (str < 65))
	{
		a = 1;
	}
	if ((str > 90) && (str < 97))
	{
		a = 1;
	}
	if (str > 122)
	{
		a = 1;
	}
	return (a);
}

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	if ((str[i] >= 'a') && (str[i] <= 'z'))
	{
		str[i] = str[i] - 32;
	}
	i = i + 1;
	while (str[i] != '\0')
	{
		if ((check(str[i - 1]) == 1) && (str[i] >= 'a') && (str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
		}
		else if ((check(str[i - 1]) == 0) && (str[i] >= 'A') && (str[i] <= 'Z'))
		{
			str[i] = str[i] + 32;
		}
		i = i + 1;
	}
	return (str);
}
