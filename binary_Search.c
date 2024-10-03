#include <stdio.h>

void sortArray(int array[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int binarySearch(int array[], int n, int search)
{
    int first = 0;
    int last = n - 1;

    while (first <= last)
    {
        int middle = (first + last) / 2;

        if (array[middle] < search)
        {
            first = middle + 1;
        }
        else if (array[middle] == search)
        {
            return middle;
        }
        else
        {
            last = middle - 1;
        }
    }

    return -1;
}

int main()
{
    int n, search, array[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers:", n);
    for (int c = 0; c < n; c++)
    {
        scanf("%d", &array[c]);
    }

    sortArray(array, n);

    printf("Enter the value to find: ");
    scanf("%d", &search);

    int result = binarySearch(array, n, search);
    if (result != -1)
    {
        printf("%d found at location %d.\n", search, result + 1);
    }
    else
    {
        printf("Not Found! %d is not present in the list.\n", search);
    }

    return 0;
}
