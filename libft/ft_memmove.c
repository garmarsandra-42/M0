/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangarci <sangarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 13:48:56 by sangarci          #+#    #+#             */
/*   Updated: 2025/09/23 14:06:40 by sangarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned const char	*s;
	unsigned char		*d;
	size_t				i;

	s = src;
	d = dest;
	if (d < s)
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	if (d > s) //Si dest está después de src, copiamos de atrás hacia adelante.
	{
		i = n;
		while (i > 0)
		{
			d[i -1] = s[i -1];
			i--;
		}
	}
	return (dest);
}

/* int main(void)
{
	char src[] = "12345";
	char dest[] = "abcde";
	size_t n = 3;
	ft_memmove(dest +2, src +2, n);
	printf("%s\n", dest);
	return (0);
} */