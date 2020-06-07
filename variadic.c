#include <stdio.h>
#include <stdarg.h>

void vidPrintVarNumOfIntegers(int num, ...)
{
    va_list argsList;

    va_start(argsList, num);

    for (int i = 0; i < num; i++)
    {
        int argValue = va_arg(argsList, int);
        printf("%d: %d\n", i, argValue);
    }

    va_end(argsList);
}