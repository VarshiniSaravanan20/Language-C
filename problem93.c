#include <stdio.h>

int main() {
    int type;
    scanf("%d", &type);

    if (type == 1)
        printf("Admin");
    else if (type == 2)
        printf("User");
    else
        printf("Guest");

    return 0;
}
