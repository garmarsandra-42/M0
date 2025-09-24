/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangarci <sangarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 13:58:53 by sangarci          #+#    #+#             */
/*   Updated: 2025/09/24 14:18:48 by sangarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c = c -32;
	}
	return (c);
}

/* int	main(void)
{
	char	letter = 'a';
	int		upper = ft_toupper(letter);
	printf("%c", upper);
	return (0);
} */