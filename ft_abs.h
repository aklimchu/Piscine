/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklimchu <aklimchu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 19:17:42 by aklimchu          #+#    #+#             */
/*   Updated: 2024/03/06 09:39:36 by aklimchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

# define ABS(x) ft_abs(x)

int	ft_abs(int x);

int	ft_abs(int x)
{
	if (x < 0)
		x *= -1;
	return (x);
}

#endif /* FT_ABS_H */
