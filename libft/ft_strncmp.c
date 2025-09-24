/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangarci <sangarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 14:27:05 by sangarci          #+#    #+#             */
/*   Updated: 2025/09/24 14:37:44 by sangarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i] && n > 0)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return (s1[i] - s2[i]);
}

/* int	main(void)
{
	char	s1[20] = "SandraSa";
	char	s2[20] = "Sandrata";
	unsigned int	n = 8;

	printf("The difference is %d", ft_strncmp(s1, s2, n));
	return (0);
} */