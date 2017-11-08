#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

int main() {
    char str[] = "1234567456890";
    char str1[] = "1234567456890";
    char str2[7] = "456";

    printf("%s\n", ft_strnstr(str, str2, 2));
    printf("%s\n", strnstr(str1, str2, 2));
    printf("%s\n", str);
    printf("%s\n", str1);
	return 0;
}