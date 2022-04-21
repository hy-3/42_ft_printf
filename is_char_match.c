int	is_char_match(char c, char *list)
{
	int	i;
	int res;

	i = 0;
	res = 0;
	while (list[i] != '\0')
	{
		if (list[i] == c)
			res = 1;
		i++;
	}
	return (res);
}
