#include <stdio.h>

int main() {
    int i, n, sum = 0;

    printf("Integer N: ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++) {
        sum = sum + i;
    }

    printf("Sum = %d\n", sum);

    return 0;
}
