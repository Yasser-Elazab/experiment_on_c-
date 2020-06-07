#include <stdio.h>
#include "variadic.h"


int main()
{
    printf("Hello World\n");

    MAIN_PRINT(5, 1, 2, 3, 4, 5);

    return 0;
}