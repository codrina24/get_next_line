/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coholbur <coholbur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 15:55:15 by coholbur          #+#    #+#             */
/*   Updated: 2024/12/26 15:13:52 by coholbur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdarg.h>
# include <stdint.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

size_t	ft_strlen_next(char *str);
char	*ft_strchr_next(char *str, int c);
char	*ft_strjoin_next(char *s1, char *s2);
char	*get_next_line(int fd);
char	*ft_strdup_next(char *s);
char	*ft_substr_next(char *s, unsigned int start, size_t len);

#endif
