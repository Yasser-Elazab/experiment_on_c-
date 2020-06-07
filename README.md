# experiment_on_c-
This repo contains some experiment on C language that tends to be unpopular 

the first experiment is about variable argument c function and macro

to implement a variadic c function, you need the following
    1- <stdarg.h> <!-- an std c lib -->
    2- define the function with at least one argument and the "..." special char >> void vidPrintVarNumOfIntegers(int num, ...);
    3- four key words {va_list, va_start, va_arg, va_end}
    4- define an object with type va_list >> va_list argsList; 
    5- point to the first argument in the arguments list >> va_start(argsList, num);
    6- extracting the argument one by one using >> va_arg(argsList, "arg_type");
    7- end the function with >> va_end(argsList);
>>> checkout variadic.c file for the actual implementation
>>> checkout variadic.h for variadic macro implementation