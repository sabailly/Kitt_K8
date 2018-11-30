/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarbaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 19:27:30 by sarbaill          #+#    #+#             */
/*   Updated: 2018/11/30 19:52:04 by sarbaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
char	*ft_strdup(const char *src);
void	ft_putstr(const char *str);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strcpy(char *dest, char *src);
size_t	ft_strlen(const char *str);
char	*ft_strncpy(char *dest, const char *src, unsigned int n);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strncat(char *dest, const char *src, size_t nb);
char	*ft_strstr(const char *str, char *to_find);
int		strncmp(const char *s1, const char *s2, size_t n);
#endif
