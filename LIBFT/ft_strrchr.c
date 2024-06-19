/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybiloshy <ybiloshy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 16:01:13 by ybiloshy          #+#    #+#             */
/*   Updated: 2024/06/15 16:18:54 by ybiloshy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == (char)c)
			return ((char *)(s + len));
		len--;
	}
	return (0);
}

int main()
{
	char s1[] = "Katrinka";
	printf ("%s\n", ft_strrchr(s1, 107));
	printf ("%s\n", strrchr(s1, 107));
	printf ("%s\n", ft_strrchr(s1, 49));
	//printf ("%s\n", strrchr(s1, 49));
}