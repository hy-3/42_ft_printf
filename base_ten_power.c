int	base_ten_power(int n)
{
	int	res;

	res = 1;
	while (n-- > 0)
		res *= 10;
	return (res);
}