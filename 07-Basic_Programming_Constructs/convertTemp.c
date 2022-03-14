#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * main - convert temperature to Fahrenheit and Kelvin
 *
 * Return: zero
 */
int main(void)
{
	float degrees;
	float kelvin;
	float farenheit;


	printf("Enter temperature in degrees celcious: \n");
	scanf("%f", &degrees);

	farenheit = ((degrees * (9.0 / 5.0)) + 32);
	kelvin = degrees + 273.15;

	printf("Temperature in Farenheit: %.2f \n", farenheit);
	printf("Temperature in Kelvin: %.2f \n", kelvin);

	return (0);
}
