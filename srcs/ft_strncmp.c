#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;
    size_t j;

    i = 0;
    while ((s1[i] || s2[i]) && i < n)
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    return (0);
}
/*
int main(void)
{
    const char *s1 = "Ingrid";
    const char *s2 = "IngrId";
    size_t n = 3;
    printf("%d\n", ft_strncmp(s1, s2, n));
    return (0);
}*/