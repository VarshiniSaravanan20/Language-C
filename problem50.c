#include <stdio.h>

int main() {
    int months, i = 1;
    int n;
    int streak = 0;
    int currentStreak = 0;

    scanf("%d", &months);

    while (i <= months) {
        scanf("%d", &n);

        if (n == 0) {
            currentStreak++;

            if (currentStreak > streak) {
                streak = currentStreak;
            }
        } else {
            currentStreak = 0;
        }

        i++;
    }

    printf("Longest Default Streak: %d", streak);

    return 0;
}
