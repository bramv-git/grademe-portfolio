#include <unistd.h>

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	write(1,"aaBBccDDeeFFggHHiiJJkkLLmmNNooPPqqRRssTTuuVVwwXXyyZZ\n", 53);
	return (0);
}
