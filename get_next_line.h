/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlaw <ethanlxz@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:07:53 by etlaw             #+#    #+#             */
/*   Updated: 2022/11/11 18:44:23 by etlaw            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

char	*ft_strjoin(char const *s1, char const *s2);
void	*ft_bzero(void *s, size_t n);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_strlen(const char *s);

char	*get_next_line(int fd);

#endif
