/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybiloshy <ybiloshy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 18:02:43 by ybiloshy          #+#    #+#             */
/*   Updated: 2024/06/15 18:31:59 by ybiloshy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	unsigned long		i;

	i = 0;
	str1 = s1;
	str2 = s2;
	while (n--)
	{
		printf("str1 = %c\n", str1[i]);
		printf("str2 = %c\n", str2[i]);
		while (str1[i] == str2[i] && n--)
		{
			printf("AAstr1 = %c\n", str1[i]);
			printf("AAstr2 = %c\n", str2[i]);
			i++;
		}
		printf("str1 = %c\n", str1[i]);
		printf("str2 = %c\n", str2[i]);
		return (str1[i] - str2[i]);
	}
	return (0);
}

// int main()
// {
// 	char s1[] = "";
// 	char s2[] = "Yevaa";

// 	printf("%d\n", ft_memcmp(s1, s2, 2));
// 	printf("%d\n", memcmp(s1, s2, 2));
// }
