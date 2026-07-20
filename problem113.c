#include <stdio.h>

int main() {
    int n, k, arr[100], temp[100];
    int i, index = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &k);

    for(i = k; i < n; i++)
        temp[index++] = arr[i];

    for(i = 0; i < k; i++)
        temp[index++] = arr[i];

    for(i = 0; i < n; i++)
        printf("%d ", temp[i]);

    return 0;
}
