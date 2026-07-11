#include <stdio.h>

int main() {
    int ATMcash, N;
    int i = 0;
    int withdrawal;
    int successfulWithdrawals = 0;

    scanf("%d", &ATMcash);
    scanf("%d", &N);

    while (i < N) {
        scanf("%d", &withdrawal);

        if (withdrawal <= ATMcash) {
            ATMcash -= withdrawal;
            successfulWithdrawals++;
        } else {
            break;
        }

        i++;
    }

    printf("Successful Withdrawals: %d\n", successfulWithdrawals);
    printf("Remaining Cash: %d\n", ATMcash);

    return 0;
}
