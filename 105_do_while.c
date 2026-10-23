// 8. Write a program to create a simple calculator using a do...while loop.
// The program should:
// 1. Ask the user to enter two numbers.
// 2. Ask the user to choose an operation:
// o + for addition
// o - for subtraction
// o * for multiplication
// o / for division
// 3. Display the result.
#include <stdio.h>
void main()
{
    int num, a, b, c, p;
    printf("<=== welcome to my calculator ===> \n");
    do
    {
        printf("     Press 1 to addition :\n");
        printf("     Press 2 to subtraction :\n");
        printf("     Press 3 to multiplication :\n");
        printf("     Press 4 to division :\n");
        printf("     Press any number  : ");
        scanf("%d", &num); // 2
        switch (num)
        {
        case 1:
            printf("your choice is addition app ...\n");
            printf("enter first num : ");
            scanf("%d", &a);
            printf("enter second num : ");
            scanf("%d", &b);
            c = a + b;
            printf("addition = %d\n", c);
            break;
        case 2:
            printf("your choice is subtraction app ...\n");
            printf("enter first num : ");
            scanf("%d", &a);
            printf("enter second num : ");
            scanf("%d", &b);
            c = a - b;
            printf("subtraction = %d\n", c);
            break;
        case 3:
            printf("your choice is multiplication app ...\n");
            printf("enter first num : ");
            scanf("%d", &a);
            printf("enter second num : ");
            scanf("%d", &b);
            c = a * b;
            printf("multiplication = %d\n", c);
            break;
        case 4:
            printf("your choice is division app ...\n");
            printf("enter first num : ");
            scanf("%d", &a);
            printf("enter second num : ");
            scanf("%d", &b);
            c = a / b;
            printf("division = %d\n", c);
            break;
        default:
            printf("please enter 1 to 4\n");
            break;
        }

        printf("you want to perform more operation press 1 otherwise 0 :");
        scanf("%d", &p); // 0

    } while (p == 1);
    printf("thanks for using my calculator !");
}