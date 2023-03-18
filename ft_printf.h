/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamendoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 18:27:32 by jamendoe          #+#    #+#             */
/*   Updated: 2023/01/05 19:02:30 by jamendoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdint.h>
# include <stdarg.h>
# include <unistd.h>
# include "libft/libft.h"

int		ft_putint(int c);
int		ft_print_pointer(unsigned long long pointer);
int		ft_print_var(va_list var, const char c);
int		ft_printf(const char *output, ...);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_write_pointer(uintptr_t pointer);
int		ft_lenght_address(uintptr_t pointer);
int		ft_pf_putchar(int c);
int		ft_pf_putstr(char *s);
int		ft_pf_putnbr(int n);
int		ft_pf_putusnbr(unsigned int n);
int		ft_print_numberhex(unsigned int number, char letter);
int		ft_print_ui_number(unsigned int number);
#endif
