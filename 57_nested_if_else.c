// mini club project
#include <stdio.h>
void main()
{
    int age, order;
    printf("enter your age : ");
    scanf("%d", &age); //22
    if (age >= 18)
    {
        printf("welcome to my club !\n");
        printf("club menu : \n");
        printf("1. noodles : 120 rs\n");
        printf("2. cold coffee : 70 rs\n");
        printf("3. sandwitch : 150 rs\n");
        printf("choose any item : ");
        scanf("%d", &order); // 3
        if (order == 1)
        {
            printf("your noodles is ordered please pay 120 rs");
        }
        else if (order == 2)
        {
            printf("your cold coffee is ordered please pay 70 rs");
        }
        else if (order == 3)
        {
            printf("your sandwitch is ordered please pay 150 rs");
        }
        else
        {
            printf("please enter 1 to 3 ");
        }
    }
    else
    {
        printf("you are not adult please try after %d year", 18 - age);
    }
}