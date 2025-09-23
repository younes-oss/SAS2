#include <stdio.h>

int main()
{
    float temp;
    float result;

    printf("entre la température en Celsius : ");
    scanf("%f", &temp);

    result = temp + 273.5;

    printf("la temperature en Kelvin : %f\n", result);

    return 0;
}
