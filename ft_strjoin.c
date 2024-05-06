/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklimchu <aklimchu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:12:45 by aklimchu          #+#    #+#             */
/*   Updated: 2024/02/29 14:16:51 by aklimchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		c;

	i = 0;
	c = 0;
	while (dest[i])
		i++;
	while (src[c])
	{
		dest[i] = src[c];
		i++;
		c++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*newstr;
	int		i;
	int		fulllen;

	i = 0;
	fulllen = 0;
	newstr = 0;
	while (i < size)
	{
		fulllen = fulllen + ft_strlen(strs[i]);
		i++;
	}
	fulllen = fulllen + (size - 1) * ft_strlen(sep);
	i = 1;
	newstr = malloc(fulllen);
	newstr = ft_strcpy(newstr, strs[0]);
	while (i < size)
	{
		newstr = ft_strcat(newstr, sep);
		newstr = ft_strcat(newstr, strs[i]);
		i++;
	}
	return (newstr);
}

/*#include <stdio.h>

int	main(void)
{
	char	*strs[3];
	char	*sep = "YOU";
	char	*newstr;
	int		size;

	strs[0] = "HELLO";
	strs[1] = "MOI";
	strs[2] = "HELLO";
	size = 3;
	newstr = ft_strjoin(size, strs, sep);
	if (size == 0)
	{
		free(newstr);
		return(0);
	}
	printf("%s", newstr);
	return (0);
}*/
