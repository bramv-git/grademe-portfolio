// scale must return the product of its two parameters.
// This file does not build yet: read the compiler message, then use factor.
int	scale(int value, int factor)
{
	if(value == 0 || factor == 0)
		return (0);
	if(factor == 1)
		return (value);
	value = value * factor;
	return (value);
}
