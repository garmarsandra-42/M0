/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangarci <sangarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 14:41:36 by sangarci          #+#    #+#             */
/*   Updated: 2025/09/24 14:42:29 by sangarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	if (little[0] == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (little[j] != '\0' && big[j + i] != '\0' 
			&& i + j < len && big[j + i] == little[j])
		{
			j++;
		}
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (0);
}

/* int main(void)
{
	const char big[] = "Hola, mundo";
	const char little[] = "l";
	size_t	len = 10;
	char	*res = ft_strnstr(big, little, len);
	if (res != NULL)
		printf("%s", res);
	else
		printf("No se encontro la cadena");
	return (0);
} */