int is_power_of_2(unsigned int n)
{
	unsigned int sum;

	sum = 1;
	if(n == 0)
		return (0);
	if(n == 1)
		return (1);
	while(sum < n)
		sum *= 2;
	if(sum == n)
		return (1);
	return (0);
}
