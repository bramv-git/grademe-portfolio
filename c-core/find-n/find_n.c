#include <unistd.h>

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	int	i;

	i = 0;
	if(argc == 2)
	{
		while(argv[1][i])
		{
			if(argv[1][i] == 'n')
			{
				write(1,"n",1);
				break;
			}
			i++;
		}
	}
	else
	{
		write(1,"wrong number of arguments",25);
	}
	write(1,"\n",1);
	return (0);
}
