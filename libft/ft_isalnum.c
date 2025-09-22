/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangarci <sangarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 10:59:04 by sangarci          #+#    #+#             */
/*   Updated: 2025/09/22 11:30:34 by sangarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57)
		|| (c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

/* int	main(void)
{
	int c = '?';
	int res = ft_isalnum(c);
	ft_isalnum(c);
		printf("%i\n", res);
	return (0);
} */