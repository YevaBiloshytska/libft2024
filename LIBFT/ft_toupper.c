/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybiloshy <ybiloshy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 06:47:03 by ybiloshy          #+#    #+#             */
/*   Updated: 2024/06/15 07:02:53 by ybiloshy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	else
		return (c);
}

// int main()
// {
// 	printf("%c\n", ft_toupper(73));
// 	printf("%c\n", ft_toupper(98));
// 	printf("%c\n", ft_toupper(49));

// 	printf("%c\n", toupper(73));
// 	printf("%c\n", toupper(98));
// 	printf("%c\n", toupper(49));
// }