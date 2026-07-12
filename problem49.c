#include <stdio.h>

int main()
{
    int capacity, N;
    int change;
    int occupied = 0;
    int critical = 0;
    int i = 1;

    scanf("%d", &capacity);
    scanf("%d", &N);

    while(i <= N)
    {
        scanf("%d", &change);

        occupied = occupied + change;

        if(occupied > (capacity * 90) / 100)
        {
            critical++;
        }

        i++;
    }

    printf("Final Occupied Beds: %d\n", occupied);
    printf("Critical Hours: %d", critical);

    return 0;
}
