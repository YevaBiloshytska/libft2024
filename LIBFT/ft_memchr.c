/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybiloshy <ybiloshy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 16:32:50 by ybiloshy          #+#    #+#             */
/*   Updated: 2024/06/15 17:41:42 by ybiloshy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;

	str = s;
	while (n--)
	{
		if (*str == (unsigned char)c)
			return ((char *)str);
		str++;
	}
	return (NULL);
}

// int main()
// {
// 	char s1[] = "YevaYevka";
// 	int c;

// 	//0x7ffe141123af = c;
// 	c = 101;
// 	printf("%p\n", memchr(s1, 101, 20));
// 	printf("%p\n\n", ft_memchr(s1, 101, 20));

// 	printf("%p\n", memchr(s1, 50, 3));
// 	printf("%p\n", ft_memchr(s1, 50, 3));

// }
