// warite a program to check voter is eligibel for voting or not.
#include <stdio.h>
void main()
{
    int age;
    printf("enter your age = ");
    scanf("%d", &age); 
    age >= 18 ? printf("you can vote") : printf("you can not vote");
}