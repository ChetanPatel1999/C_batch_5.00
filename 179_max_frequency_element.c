#include <stdio.h>
void main()
{
    //             0  1  2  3   4   5   6   7   8   9
    int arr[10] = {3, 5, 4, 3, 4, 3, 7, 3, 4, 4};
    int i, j;
    int max_cout = 0;
    int max_cout_element;
    int c;
    for (i = 0; i < 10; i++) // 4
    {
        c = 1;
        if (arr[i] != -1)
        {
            for (j = i + 1; j < 10; j++) // 9
            {
                // 4
                if (arr[i] == arr[j])
                {
                    c++; // 1
                    arr[j] = -1;
                }
            }
        }
        if (c > max_cout)
        {
            max_cout = c;              // 4
            max_cout_element = arr[i]; // 4
        }
    }
    printf("element %d is appear %d times which is max appearnce", max_cout_element, max_cout);
}