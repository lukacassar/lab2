#include <stdio.h>
#include <string.h>

#define conv 0.93; // 1 usd is 0.93 eur
int main() {
double dollars[10], euros[10];
    printf("Enter 10 numbers of dollars\n");
    for (int i = 0; i < 10; i++) {
        scanf("%lf", &dollars[i]);
        euros[i] = dollars[i] * conv;
        printf("%lf\n", euros[i]);
    }

    return 0;
}
