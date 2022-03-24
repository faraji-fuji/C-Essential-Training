#include <stdlib.h>
#include <math.h>
#include <stdio.h>

/**
 * main - converts height in cm into feet and inches
 *
 * Return: zero
 */

int main(void)
{
	float height;
	float feet;
	float remainder;
	float inches;

	printf("Enter Height in cm:");
	scanf("%f", &height);
	feet = floor((height / 30.48));
	inches = (((height / 30.48) - floor((height / 30.48))) * 12);
	printf("%f feet %f inches\n", feet, inches);

	return (0);
}

