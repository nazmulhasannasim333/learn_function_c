#include <stdio.h>
#include <math.h>

int main()
{
    int ceil_result = ceil(5.3);
    int floor_result = floor(5.3);
    int round_result = round(5.3);
    int sqrt_result = sqrt(16);
    int pow_result = pow(2, 3);
    int abs_result = abs(-5);
    printf("Ceil Result ==> %d\n", ceil_result);
    printf("Floor Result ==> %d\n", floor_result);
    printf("Round Result ==> %d\n", round_result);
    printf("Sqrt Result ==> %d\n", sqrt_result);
    printf("Pow Result ==> %d\n", pow_result);
    printf("Abs Result ==> %d\n", abs_result);
    return 0;
}