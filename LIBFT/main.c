#include "libft.h"
#include <stdio.h>

int main(void)
{
	char src[] = "Yeva";
	char dst[] = "Nikollle";

	printf("%ld\n", ft_strlcpy(dst, src, sizeof(dst)));
	printf("%s\n", dst);

	return (0);
}