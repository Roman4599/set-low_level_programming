#include <stdio.h>

/* FLAWED VERSION - unsafe macro */
#define MAX(a, b) a > b ? a : b

int main(void)
{
int result;

result = MAX(2 + 3, 4 + 1);
printf("%d\n", result);  /* Wrong result due to precedence! */
return (0);
}
