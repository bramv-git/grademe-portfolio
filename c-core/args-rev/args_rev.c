#include <unistd.h>
int	strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		i++;
	}
	return (i);
}
int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	int	i;
	
	i = argc - 1;
	if (argc > 1)
	{
		while (i > 0)
		{

			write(1,argv[i],strlen(argv[i]));
			write(1,"\n",1);
			i--;
		}
	}
	return (0);
}
