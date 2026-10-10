#include <stdio.h>

int main(void)
{
    char str[100];
    int i = 0, length = 0;

    printf("Enter a string: ");
    if (scanf("%99[^\n]", str) != 1) {
        printf("No input received.\n");
        return 1;
    }

    while (str[i] != '\0')
    {
        length++;
        i++;
    }

    printf("Length of the string = %d\n", length);
    return 0;
}