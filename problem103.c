#include <stdio.h>

int main()
{
    char str[100];
    char a;
    int i, b = -1;

    scanf("%99s", str);
    scanf(" %c", &a);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == a)
        {
            b = i;
            break;
        }
    }

    printf("%d", b);

    return 0;
}
