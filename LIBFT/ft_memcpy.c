/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybiloshy <ybiloshy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 19:35:43 by ybiloshy          #+#    #+#             */
/*   Updated: 2024/06/14 22:50:32 by ybiloshy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>


void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (!dst)
		return (NULL);
	i = 0;
	while (i < len)
	{
		*(char *)(dst + i) = *(char *)(src + i);
		i++;
	}
	return (dst);
}

// int main()
// {
// 	char src[] = "Yeva";
// 	char dst[] = "";

// 	printf("%p\n", ft_memcpy(dst, src, 6));
// 	//printf("%s\n", dst);
// }
