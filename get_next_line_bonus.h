/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlaw <ethanlxz@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:07:53 by etlaw             #+#    #+#             */
/*   Updated: 2022/11/10 16:24:16 by etlaw            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2);
void	*ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t elementCount, size_t elementSize);
int		ft_strchr(const char *string, int tofind);
int		ft_strlen(const char *s);

char	*get_next_line(int fd);

#endif