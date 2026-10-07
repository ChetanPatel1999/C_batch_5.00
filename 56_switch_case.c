// Write a program using switch-case to print your friend's name based on the
// first letter of their name.
#include <stdio.h>
void main()
{
    char f_latter;
    printf("enter first latter of your friend name : ");
    scanf("%c", &f_latter);//c
    switch(f_latter)
    {
        case 'a': printf("aditya gurjar");break;
        case 'A': printf("Amiq ali");break;
        case 's': printf("shivraj sendhav");break;
        case 'k': printf("krishnpal sendhav");break;
        case 'S': printf("sadiq khan");break;
        case 'g': printf("gaurav patel");break;
        default: printf("you have not friend which name start with %c",f_latter);
    }
}