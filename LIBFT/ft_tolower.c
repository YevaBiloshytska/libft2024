/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybiloshy <ybiloshy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 06:58:27 by ybiloshy          #+#    #+#             */
/*   Updated: 2024/06/15 07:03:14 by ybiloshy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}

int main()
{
	printf("%c\n", ft_tolower(73));
	printf("%c\n", ft_tolower(98));
	printf("%c\n", ft_tolower(49));

	printf("%c\n", tolower(73));
	printf("%c\n", tolower(98));
	printf("%c\n", tolower(49));
}
