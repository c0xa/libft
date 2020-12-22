#include "libft.h"

static int	ft_min(int a, int b)
{
	return (a < b ? a : b);
}

char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*buf;
	int		i;
	int		lenresult;

	if (!s)
		return (NULL);
	i = 0;
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	lenresult = ft_min((int)len, (int)(ft_strlen(s) - start));
	lenresult = lenresult < 0 ? 0 : lenresult;
	if (!(buf = (char*)malloc((len + 1) * sizeof(char))))
		return (NULL);
	while (lenresult--)
	{
		*(buf + i) = *(s + i + start);
		i++;
	}
	*(buf + i) = '\0';
	return (buf);
}
