/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklimchu <aklimchu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 09:20:13 by aklimchu          #+#    #+#             */
/*   Updated: 2024/02/29 14:18:24 by aklimchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <errno.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
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

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	src[] = "HELLO WORLD  34343434343";

	printf("%s\n", ft_strdup(src));
	printf("%s", strdup(src));
	return (0);
}*/
