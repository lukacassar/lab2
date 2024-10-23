#include <stdio.h>

#define MAXNUM 10

int main() {
    printf("Enter 10 numbers of days\n");
    double days[MAXNUM];
    int weeks[MAXNUM];
    int remDays[MAXNUM];  // remaining days after calculating weeks

    // Input loop
    for (int i = 0; i < MAXNUM; i++) {
        scanf("%lf", &days[i]);
    }
    for (int i = 0; i < MAXNUM; i++) {
        weeks[i] = (int)(days[i] / 7);
        remDays[i] = (int)(days[i]) % 7;
    }
    for (int i = 0; i < MAXNUM; i++) {
        printf("%lf days is %d weeks and %d days.\n", days[i], weeks[i], remDays[i]);
    }

    return 0;
}
