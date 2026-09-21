// Write a program to convert temperature from 0C to Fahrenheit.
#include <stdio.h>
void main()
{
    float tempCelcius, tempFaranhite;
    printf("enter tempareture in celcius : ");
    scanf("%f", &tempCelcius);
    tempFaranhite = (tempCelcius * (9 / 5)) + 32;
    printf("temprature in fehranite = %.2f", tempFaranhite);
}