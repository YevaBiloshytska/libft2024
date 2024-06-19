/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybiloshy <ybiloshy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 19:46:26 by ybiloshy          #+#    #+#             */
/*   Updated: 2024/06/13 21:10:09 by ybiloshy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	int	i;

	if (!dst || !src)
		return (NULL);
	if (dst > src)
	{
		i = n - 1;
		while (i >= 0)
		{
			*(char *)(dst + i) = *(char *)(src + i);
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			*(char *)(dst + i) = *(char *)(src + i);
			i++;
		}
	}
	return (dst);
}

// int main()
// {
// 	char src[] = "Yeva";
// 	char dst[] = "Katrin";
// 	char dst1[] = "Katrin";
// 	printf("%p\n", ft_memmove(dst, src, 4));
// 	//printf("%s\n", dst);
// 	printf("%p\n", memmove(dst1, src, 4));
// 	//printf("%s\n", dst1);
// }
