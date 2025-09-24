/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangarci <sangarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 12:18:58 by sangarci          #+#    #+#             */
/*   Updated: 2025/09/24 13:46:09 by sangarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int				len_src;
	unsigned int	i;

	i = 0;
	len_src = ft_strlen(src);
	if (size == 0)
	{
		return (len_src);
	}
	while (src[i] != '\0' && i < size -1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len_src);
}

/* int	main(void)
{
	char	dest[20];
	char	src[] = "abcde";

	printf("%d \n", ft_strlcpy(dest, src, 20));
	return (0);
} */