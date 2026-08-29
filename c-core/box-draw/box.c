#include <stdlib.h>
#include <unistd.h>

void drawBox(int width, int height);
void drawHorizontal(int width);
void drawCorner(void);
void drawVertical(int space, int height);
void newLine(void);
// argv[1] is the width, argv[2] the height. Draw the frame of that rectangle:
// '+' corners, '-' on top and bottom, '|' on the sides, spaces inside.
int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	if (argc == 3 && argv[1] != 0 && argv[2] != 0)
	{
		drawBox(atoi(argv[1]), atoi(argv[2]));
	}
	else
	{
		write(1, "wrong number of arguments", 25);
		newLine();
	}
	return (0);
}

void drawBox(int width, int height)
{
	if (width == 1 && height == 1)
	{
		drawCorner();
		newLine();
	}
	else if (height == 1)
	{
		drawCorner();
		drawHorizontal(width);
		drawCorner();
		newLine();
	}
	else if (width == 1)
	{
		drawCorner();
		newLine();
		drawVertical(width, height);
		drawCorner();
		newLine();
	}
	else if(width > 1 && height > 1)
	{
		drawCorner();
		drawHorizontal(width);
		drawCorner();
		newLine();
		drawVertical(width, height);
		drawCorner();
		drawHorizontal(width);
		drawCorner();
		newLine();
	}
}

void drawHorizontal(int width)
{
	int	i;

	i = 0;
	while ( i < (width - 2))
	{
		write(1, "-", 1);
		i++;
	}
}

void drawCorner(void)
{
	write(1, "+", 1);
}

void newLine(void)
{
	write(1, "\n", 1);
}

void drawVertical(int width, int height)
{
	int	i;
	int	j;

	i = 0;
	if(width != 1)
	{
		while(i < height - 2)
		{
			j = 0;
			write(1, "|", 1);
			while (j < width - 2)
			{
				write(1, " ", 1);
				j++;
			}
			write(1, "|", 1);
			newLine();
			i++;
		}
	}
	else
	{
		while (i < height - 2)
		{
			write(1, "|", 1);
			newLine();
			i++;
		}
	}
}

