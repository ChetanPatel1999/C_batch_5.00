// mini club project
#include <stdio.h>
void main()
{
    int age, order, p, totalbill = 0, c1 = 0, c2 = 0, c3 = 0;
    printf("enter your age : ");
    scanf("%d", &age); // 25
    if (age >= 18)
    {
        printf("welcome to my club !\n");
        do
        {
            printf("   club menu : \n");
            printf("<----------------->\n");
            printf("1. noodles : 120 rs\n");
            printf("2. cold coffee : 70 rs\n");
            printf("3. sandwitch : 150 rs\n");
            printf("choose any item : ");
            scanf("%d", &order); // 3
            if (order == 1)
            {
                c1++;
                totalbill = totalbill + 120;
            }
            else if (order == 2)
            {
                c2++;
                totalbill = totalbill + 70;
            }
            else if (order == 3)
            {
                c3++;
                totalbill = totalbill + 150;
            }
            else
            {
                printf("please enter 1 to 3\n");
            }

            printf("\n order list : \n");
            printf("--------------\n");
            if (c1 > 0)
            {
                printf("noodles    = %d\n", c1);
            }
            if (c2 > 0)
            {
                printf("cold cofee = %d\n", c2);
            }
            if (c3 > 0)
            {
                printf("sandwitch  = %d\n", c3);
            }

            printf("\nyou want to order something more press 1 : ");
            scanf("%d", &p); // 0
        } while (p == 1);

        printf("\n\n               Sir/Mem Your Bill\n");
        printf("<---------------------------------------------------->\n");
        printf("  Item         Quantity          Price         Total  \n");
        if (c1 > 0)
        {
            printf("  Noodles         %d              120            %d \n", c1, c1 * 120);
        }
        if (c2 > 0)
        {
            printf("  Cold Cofee      %d              70             %d \n", c2, c2 * 70);
        }
        if (c3 > 0)
        {
            printf("  Sandwitch       %d              150            %d \n", c3, c3 * 150);
        }
        printf("<---------------------------------------------------->\n");
        printf("                   Total Bill = %d\n", totalbill);
        printf("<---------------------------------------------------->\n");
        printf("              thanks for visit my club\n\n");
    }
    else
    {
        printf("you are not adult please try after %d years", 18 - age);
    }
}