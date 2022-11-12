/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlaw <ethanlxz@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:07:50 by etlaw             #+#    #+#             */
/*   Updated: 2022/11/11 19:49:52 by etlaw            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		sizetotal;
	char	*res;
	int		i1;
	int		i2;

	i1 = 0;
	sizetotal = ft_strlen(s1) + ft_strlen(s2);
	res = malloc(sizeof(char) * sizetotal + 1);
	if (!res || !s1 || !s2)
		return (NULL);
	while (s1[i1] != 0)
	{
		res[i1] = s1[i1];
		i1++;
	}
	i2 = 0;
	while (s2[i2] != 0)
	{
		res[i1] = s2[i2];
		i1++;
		i2++;
	}
	res[sizetotal] = 0;
	return (res);
}

void	*ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}

void	*ft_calloc(size_t elementCount, size_t elementSize)
{
	char	*res;

	res = malloc(elementSize * elementCount);
	if (!res)
		return (NULL);
	ft_bzero(res, elementCount * elementSize);
	return (res);
}

int	ft_strchr(const char *string, int tofind)
{
	char	*str;

	str = (char *)string;
	while (*str != tofind && *str != '\0')
		str++;
	if (*str == tofind)
		return (1);
	else
		return (0);
}

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
