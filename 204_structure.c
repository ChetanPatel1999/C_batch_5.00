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

    strcpy(m1.name, "frontech");
    m1.price = 700;
    m1.rating = 4.7;

    strcpy(m2.name, "antesports");
    m2.price = 1500;
    m2.rating = 4.4;

    printf("mouse info :\n");
    printf("name = %s\n", m1.name);
    printf("price = %d\n", m1.price);
    printf("rating = %.1f\n", m1.rating);
    printf("---------------------\n");

    printf("mouse info :\n");
    printf("name = %s\n", m2.name);
    printf("price = %d\n", m2.price);
    printf("rating = %.1f\n", m2.rating);
    printf("---------------------\n");
}