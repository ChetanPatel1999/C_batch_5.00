#include <stdio.h>
void main()
{
    int status;
    printf("<=== welcome to helloworldmarriage.com ==>\n");
    printf("select your marital status : \n");
    printf("1. single \n");
    printf("2. mingle \n");
    printf("select option : ");
    scanf("%d", &status);
    if (status == 1)
    {
        int gender;
        printf("select your gender : \n");
        printf("1. male \n");
        printf("2. female \n");
        printf("select option : ");
        scanf("%d", &gender);
        if (gender == 1)
        {
            int age;
            printf("enter your age : ");
            scanf("%d", &age);
            if (age >= 21)
            {
                printf("you are eligible for marriage");
            }
            else
            {
                printf("you are not eligible for marriage");
            }
        }
        else if (gender == 2)
        {
            int age;
            printf("enter your age : ");
            scanf("%d", &age);
            if (age >= 18)
            {
                printf("you are eligible for marriage");
            }
            else
            {
                printf("you are not eligible for marriage");
            }
        }
        else
        {
            printf("wrong input select 1 or 2");
        }
    }
    else if (status == 2)
    {
        printf("you are already married");
    }
    else
    {
        printf("wrong input select 1 or 2");
    }
}