#include <stdio.h>
#include <math.h>

int main() {

    double zeta(double s, int approx) {
        double sum = 0;
        for(int i = 1; i < approx; i++) {
            sum = sum + (1.0 / pow(i,s));
        }
        return sum;
    }
    double s;
    int approx;
    printf("Enter your desired choice for s, must be greater than 1\n");
    scanf("%lf",&s);
    printf("Enter an integer as an approximation for infinity\n");
    scanf("%d",&approx);

    printf("Zeta function applied with s = %lf and infinity approx = %d results in %lf", s, approx, zeta(s, approx));
return 0;
}

