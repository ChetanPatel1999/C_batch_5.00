#include <stdio.h>
void display(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++) // 1
    {
        printf("%d ", arr[i]);
    }
}

void getarry(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++) // 1
    {
        scanf("%d", &arr[i]);
    }
}
void main()
{
    int marks[5];
    int heights[8];
    int scores[3];

    printf("enter marks : \n");
    getarry(marks, 5);
    printf("enter heights : \n");
    getarry(heights, 8);
    printf("enter scores : \n");
    getarry(scores, 3);

    printf("display marks : \n");
    display(marks, 5);

    printf("\ndisplay heights : \n");
    display(heights, 8);

    printf("\ndisplay scores : \n");
    display(scores, 3);
}