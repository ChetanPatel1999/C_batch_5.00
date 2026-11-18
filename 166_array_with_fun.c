#include <stdio.h>
void display(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)//1
    {
        printf("%d ", arr[i]);
    }
}

void main()
{
    int marks[5] = {40, 60, 50, 20, 90};
    int heights[8] = {5, 4, 7, 8, 3, 6, 10, 2};
    int scores[3] = {120, 540, 78};

    printf("display marks : \n");
    display(marks, 5);

    printf("\ndisplay heights : \n");
    display(heights, 8);

    printf("\ndisplay scores : \n");
    display(scores, 3);
}