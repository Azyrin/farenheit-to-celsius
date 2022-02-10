#include <stdio.h>
#include <stdlib.h>

int main()
{
    int celsius;
    int farenheit;

    printf("Please enter the temperature in degrees farenheit: \n");
    scanf("%d", &farenheit);

    celsius = (farenheit - 32) / 1.8;

    printf("The temperature in degrees celsius is % d \n", celsius);

    return 0;

}