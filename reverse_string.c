#include <stdio.h>
#include <string.h>
void reverseString(char *str)
{
    int n = strlen(str);
    int i;
    char temp;
    for (i = 0; i < n / 2; i++)
    {
        temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
}

int main()
{
    char str[100];
    printf("Enter the Name:");
    fgets(str, sizeof(str), stdin);

    reverseString(str);
    printf("Reversed string: %s\n", str);

    return 0;
}
