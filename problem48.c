#include <stdio.h>

int main()
{
    int maxWeight, N;
    int weight;
    int totalWeight = 0;
    int allowed = 0;
    int i = 1;

    scanf("%d", &maxWeight);
    scanf("%d", &N);

    while(i <= N)
    {
        scanf("%d", &weight);

        totalWeight = totalWeight + weight;

        if(totalWeight > maxWeight)
        {
            break;
        }

        allowed++;

        i++;
    }

    printf("Passengers Allowed: %d\n", allowed);

    if(totalWeight > maxWeight)
    {
        printf("Overload: Yes");
    }
    else
    {
        printf("Overload: No");
    }

    return 0;
}
