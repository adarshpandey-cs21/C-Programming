#include <stdio.h>
int main()
{
    int i, j, size, temp = 0;

    printf("enter the size of array\n ");
    scanf("%d", &size);
    int arr[size], fre[size], visited = -1;
    printf("Enter the elements in array\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < size; i++)
    {
        int count = 1;
        for (j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                fre[j] = visited;
            }
        }
        if (fre[i] != visited)
            fre[i] = count;
    }
    for (int i = 0; i < size; i++)

    {
        if (fre[i] != visited)
        {
            printf("%d,", arr[i]);
            printf("--%d\n", fre[i]);
        }
    }
}