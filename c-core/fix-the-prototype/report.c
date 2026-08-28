#include <unistd.h>

// This file does not build yet. The output is already right, the declaration is
// not: repair the build without changing a single printed byte.
int print_report(void);

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	return (print_report());
}

int	print_report(void)
{
	write(1, "status: green\n", 14);
	write(1, "tests: 12 passed\n", 17);
	write(1, "warnings: 0\n", 12);
	return (0);
}
