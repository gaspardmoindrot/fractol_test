#include "libft.h"

int     ft_strnequ(char const *s1, char const *s2, size_t n)
{
    unsigned int    i;

    i = 0;
    if (!s1 || !s2)
        return (0);
    while (s1[i] && s2[i] && n > 0)
    {
        if (s1[i] != s2[i])
            return (0);
        i++;
        n--;
    }
    if (s1[i] == '\0' || s2[i] == '\0' || n == 0)
        return (1);
    return (0);
}
