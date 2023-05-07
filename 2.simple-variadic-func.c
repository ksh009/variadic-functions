#include <stdio.h>
#include <stdarg.h>

int sum(int count, ...)
{
    va_list args;
    va_start(args, count);
    int sum = 0;
    for (int i = 0; i < count; i++)
    {
        int arg = va_arg(args, int);
        sum += arg;
        printf("%d ", arg);
    }
    va_end(args);
    return sum;
}

int main()
{
    int result = sum(5, 1, 2, 3, 4, 5);
    printf("The sum of the numbers is %d\n", result);
    return 0;
}
