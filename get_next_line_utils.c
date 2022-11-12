/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlaw <ethanlxz@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:07:50 by etlaw             #+#    #+#             */
/*   Updated: 2022/11/12 20:32:44 by etlaw            ###   ########.fr       */
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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	len2;
	char	*subs;

	i = 0;
	if (!s)
		return (0);
	len2 = ft_strlen(s);
	if (len2 < (size_t)start)
		return (ft_substr("", 0, 0));
	if (len2 < len)
		len = len2;
	subs = (char *)malloc(sizeof(char) * len + 1);
	if (!subs)
		return (0);
	while (i < len)
	{
		subs[i] = s[start + i];
		i++;
	}
	subs[i] = '\0';
	return (subs);
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
