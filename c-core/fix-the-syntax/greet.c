#include <unistd.h>

// greet prints three fixed lines and ignores its command line.
// The lines are already correct: make the file build.
int	main(int argc, char **argv)
{
	int	fd = 1;

	write(fd, "hello, world\n", 13);
	write(fd, "greet v1.0\n", 11);
	write(fd, "ready\n", 6);
	(void)argc;
	(void)argv;
	return (0);
}
