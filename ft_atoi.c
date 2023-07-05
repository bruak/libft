
int	ft_atoi(const char *str)
{
	long int	num;
	int			sing;

	sing = 1;
	num = 0;
	while ((*str >= 9 && *str <= 13) || (*str == 32))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sing = -1;
		str++;
	}
	while (*str != 0 && *str >= '0' && *str <= '9')
	{ 
		num = num * 10 + (*str - '0') * sing;
		if (num > 2147483647)
			return (-1);
		if (num < -2147483648)
			return (0);
		str++;
	}
	return (num);
}