#include "libft.h"

int     ft_strequ(char const *s1, char const *s2)
{
    unsigned int    i;

    i = 0;
    if (!s1 || !s2)
        return (0);
    while (s1[i] && s2[i])
    {
        if (s1[i] != s2[i])
            return (0);
        i++;
    }
    if (s1[i] == '\0' && s2[i] == '\0')
        return (1);
    return (0);
}
