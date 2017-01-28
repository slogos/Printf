/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouder <tbouder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 12:02:58 by tbouder           #+#    #+#             */
/*   Updated: 2016/11/10 14:04:56 by tbouder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <fcntl.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

int					ft_isdigit(int c);
int					ft_isnumber(int c);
int					ft_isspace(int c);
void				*ft_memset(void *b, int c, size_t len);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				ft_bzero(void *s, size_t n);
size_t				ft_strlen(const char *s);
int					ft_nbrlen(int n);
int					ft_nbrlen_base(long long n, int base);
int					ft_linelen(const char *str, int i);
char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
char				*ft_itoa(int n);
char				*ft_itoa_base(long long n, int base);
int					ft_atoi(const char *str);
void				ft_putchar(char c);
void				ft_putstr(char const *s);
void				ft_putnbr(int n);
void				ft_putnbr_base(long long nb, int base, int maj);
double				ft_power(double nb, double power);

#endif
