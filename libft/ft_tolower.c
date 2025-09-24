/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangarci <sangarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 14:20:34 by sangarci          #+#    #+#             */
/*   Updated: 2025/09/24 14:25:32 by sangarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		c = c +32;
	}
	return (c);
}

/* int	main(void)
{
	char	letter = 'F';
	int		upper = ft_tolower(letter);
	printf("%c", upper);
	return (0);
} */