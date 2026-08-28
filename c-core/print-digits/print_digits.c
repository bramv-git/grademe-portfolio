#include <unistd.h>
void print_digits(void)
{
    write(1,"0123456789", 10);
}
