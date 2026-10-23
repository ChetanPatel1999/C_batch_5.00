//  Write a program using a do...while loop that keeps displaying the message:
// “papa please purchased bike “
// Until the user presses 1 .
#include <stdio.h>
void main()
{
    int num;
    do
    {
        printf("papa please purchased bike\n");
        printf("if not purchased bike press 1 otherwise 0 : ");
        scanf("%d", &num); // 5
    } while (num == 1);
    printf("thanks papa for bike !");
}