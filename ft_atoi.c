#include "libft.h"

int		ft_atoi(const char *string)
{
	unsigned long int	n;
	int					mark;

	mark = 1;
	n = 0;
	while (*string == ' ' || *string == '\t' || *string == '\n'
		|| *string == '\v' || *string == '\f' || *string == '\r')
		string++;
	if (*string == '-' || *string == '+')
	{
		if (*string == '-')
			mark *= -1;
		string++;
	}
	while (*string >= '0' && *string <= '9')
	{
		if (n >= 9223372036854775807 && mark < 0)
			return (0);
		else if (n >= 9223372036854775807)
			return (-1);
		n = n * 10 + *(string++) - '0';
	}
	return ((int)n * mark);
}
