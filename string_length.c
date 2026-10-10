#include <stdio.h>

int main()
{
    char str[100];
    int i = 0, length = 0;

    printf("Enter a string: ");
    scanf("%99[^\n]", str);

    while (str[i] != '\0')
    {
        length++;
        i++;
    }

    printf("Length of the string = %d\n", length);

    return 0;
}