#include <stdio.h>

int main() {
    int N;
    int i = 0;
    int status;
    int currentStreak = 0;
    int longestStreak = 0;

    scanf("%d", &N);

    while (i < N) {
        scanf("%d", &status);

        if (status == 0) {
            currentStreak++;

            if (currentStreak > longestStreak) {
                longestStreak = currentStreak;
            }
        } else {
            currentStreak = 0;
        }

        i++;
    }

    printf("Longest Failure Streak: %d", longestStreak);

    return 0;
}
