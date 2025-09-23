/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangarci <sangarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 12:28:07 by sangarci          #+#    #+#             */
/*   Updated: 2025/09/23 12:45:52 by sangarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Guarda y directiva de la librería */
#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <unistd.h>
/* Prototipos de las funciones de la libreria */
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_strlen(char *str);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);

#endif