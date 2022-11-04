#include <stdio.h>
#include <math.h>

float signal(float x, float y, float z)
{
    float part_1 = cbrt(8 + pow(fabs(x - y)), 2 + 1);
    float part_2 = pow(x, 2) + pow(y, 2) + 2;
    float part_3 = exp(fabs(x - y)) * pow(pow(tg(z), 2) + 1, x);

    return part_1 / part_2 - part_3;
}

int main()
{
    float x = -4.5, y = 0.75 * 10 ^ 4, z = 84.5;
    float b = signal(x, y, z);

    printf("the result is %f\n", b);

    return 0;
}