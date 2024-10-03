#include <stdio.h>
void arrayRev(int array[], int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        int temp;
        temp = array[i];
        array[i] = array[size - i - 1];
        array[size - i - 1] = temp;
    }
}
int main()
{
    int array[] = {5, 6, 1, 7, 10};
    arrayRev(array, 5);
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", array[i]);
    }
    return 0;
}
