#include <stdio.h>
#include <string.h>
struct mouse
{
    char name[12];
    int price;
    float rating;
};
void main()
{
    struct mouse m[3];
    int i;
    for (i = 0; i < 3; i++) // 2
    {
        printf("\nenter mouse%d info :\n", i + 1);
        printf("enter company name : ");
        scanf("%s", m[i].name);
        printf("enter price : ");
        scanf("%d", &m[i].price);
        printf("enter rating : ");
        scanf("%f", &m[i].rating);
    }

    for (i = 0; i < 3; i++) // 1
    {
        printf("\nmouse%d info :\n", i + 1);
        printf("name = %s\n", m[i].name);
        printf("price = %d\n", m[i].price);
        printf("rating = %.1f\n", m[i].rating);
        printf("---------------------\n");
    }
}