#include <unistd.h>

int _putchar(char c)
{
main.h return (write(1, &c, 1));
}
