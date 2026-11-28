#include <stdio.h>
#include <string.h>
struct mouse
{
    char name[20];
    int price;
    float rating;
};
void main()
{
    struct mouse m1, m2, m3;

    printf("enter mouse1 info :\n");
    printf("enter company name : ");
    scanf("%s", m1.name);
    printf("enter price : ");
    scanf("%d", &m1.price);
    printf("enter rating : ");
    scanf("%f", &m1.rating);

    printf("enter mouse2 info :\n");
    printf("enter company name : ");
    scanf("%s", m2.name);
    printf("enter price : ");
    scanf("%d", &m2.price);
    printf("enter rating : ");
    scanf("%f", &m2.rating);

    printf("\nmouse1 info :\n");
    printf("name = %s\n", m1.name);
    printf("price = %d\n", m1.price);
    printf("rating = %.1f\n", m1.rating);
    printf("---------------------\n");

    printf("\nmouse2 info :\n");
    printf("name = %s\n", m2.name);
    printf("price = %d\n", m2.price);
    printf("rating = %.1f\n", m2.rating);
    printf("---------------------\n");
}