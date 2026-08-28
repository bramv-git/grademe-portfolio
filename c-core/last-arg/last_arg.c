#include <unistd.h>

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	int	i;
	int	length;

	i = 0;
	length = 0;
	if(argc > 1)
	{
		while(argv[argc - 1][i])
		{
			length++;
			i++;
		}
		write(1,argv[argc - 1], length);
	}
	else
	{
		write(1,"wrong number of arguments",25);
	}
	write(1,"\n",1);
	return (0);
}
