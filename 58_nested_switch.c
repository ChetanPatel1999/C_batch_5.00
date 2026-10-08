// mini club project
#include <stdio.h>
void main()
{
    int age, order;
    printf("enter your age : ");
    scanf("%d", &age); // 22
    if (age >= 18)
    {
        printf("welcome to my club !\n");
        printf("club menu : \n");
        printf("1. noodles : 120 rs\n");
        printf("2. cold coffee : 70 rs\n");
        printf("3. sandwitch : 150 rs\n");
        printf("choose any item : ");
        scanf("%d", &order); // 2
        switch (order)
        {
        case 1:
            printf("your noodles is ordered please pay 120 rs");
            break;
        case 2:
            printf("your cold coffee is ordered please pay 70 rs");
            break;
        case 3:
            printf("your sandwitch is ordered please pay 150 rs");
        default:
            printf("please enter 1 to 3 ");
            break;
        }
    }
    else
    {
        printf("you are not adult please try after %d year", 18 - age);
    }
}