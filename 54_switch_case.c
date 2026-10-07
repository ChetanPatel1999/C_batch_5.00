// wap to print day name according to number.
#include <stdio.h>
void main()
{
    int day;
    printf("enter a num for day : ");
    scanf("%d", &day); // 4
    switch(day)
    {
        case 1: printf("monday");break;
        case 2: printf("tuesday");break;
        case 3: printf("wednesday");break;
        case 4: printf("thursday");break;
        case 5: printf("friday");break;
        case 6: printf("saturday");break;
        case 7: printf("sunday");break;
        default:printf("please enter 1 to 7 ");
    }
}