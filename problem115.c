#include <stdio.h>

int main() {
    int n, arr[100], leader[100];
    int i, max, count = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    max = arr[n - 1];
    leader[count++] = max;

    for(i = n - 2; i >= 0; i--) {
        if(arr[i] > max) {
            max = arr[i];
            leader[count++] = max;
        }
    }

    for(i = count - 1; i >= 0; i--)
        printf("%d ", leader[i]);

    return 0;
}
