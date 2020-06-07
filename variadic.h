#pragma _VARIDIC_H_

void vidPrintVarNumOfIntegers(int num, ...);

#define MAIN_PRINT(...)             vidPrintVarNumOfIntegers(__VA_ARGS__)
#define MAIN_PRINT_VAR2(num, ...)   vidPrintVarNumOfIntegers((num), __VA_ARGS__)
