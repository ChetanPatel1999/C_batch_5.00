#include <stdio.h>
void main()
{
   char ch;
   printf("enter a character : ");
   scanf("%c", &ch);
   if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
   {
      printf("char is alphabet");
   }
   else if (ch >= '0' && ch <= '9')
   {
      printf("char is digit");
   }
   else
   {
      printf("char is special symbole");
   }
}