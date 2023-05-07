#include <stdio.h>
#include <stdarg.h>

int sum(int count, ...)
{
    va_list args;
    va_start(args, count);
    int sum = 0;
    for (int i = 0; i < count; i++)
    {
        /*
            `va_arg()` retrieves the next argument from the `va_list` and advances the POINTER to the next argument. So, every time the function is called then the pointer moves to the next arg. The loop does not effect the list iteration directly, but merely calls the function (va_args) to create an iteration for the length of the count - 1.
        */
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
