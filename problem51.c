#include <stdio.h>

int main()
{
    int fuel, N;
    int i = 1;
    int tripFuel;
    int completedTrips = 0;

    scanf("%d", &fuel);
    scanf("%d", &N);

    while (i <= N)
    {
        scanf("%d", &tripFuel);

        if (tripFuel <= fuel)
        {
            fuel = fuel - tripFuel;
            completedTrips++;
        }
        else
        {
            break;
        }

        i++;
    }

    printf("Completed Trips: %d\n", completedTrips);
    printf("Remaining Fuel: %d", fuel);

    return 0;
}
