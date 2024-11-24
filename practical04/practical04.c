#include <stdio.h>
#include <math.h>

#define N 12

float degtorad(float degarg);
float traprule(int numIntervals, float TanArr[N+1]);

int main() {
    int numIntervals = N;
    float a = 0.0, b = 60.0;
    float TanArr[N+1];
    float deg;

    // Calculate the area at pts x1, x2, ...., x11 and add them up
    for (int i = 0; i <= numIntervals; i++) {
        deg = i * 5.0;
        TanArr[i] = tan(degtorad(deg));
        printf("TanArr[%d] = %f\n", i, TanArr[i]);
    }

    float area = traprule(numIntervals, TanArr);

    // Approximated result
    printf("\nTrapezoidal result is: %f\n", area);
    // Actual result
    printf("Real result is: %f\n", log(2.0));

    return 0;
}

float degtorad(float degarg) {
    float pi = 3.1415927;
    return (pi * degarg) / 180.0;
}

float traprule(int numIntervals, float TanArr[N+1]) {
    float area;
    
    // Sum tan(a)+tan(b) where a and b are in radians
    area = TanArr[0] + TanArr[numIntervals];
    printf("\nInitial area (sum at x(0) and x(12)) = %f\n", area);
    
    for (int i = 1; i < numIntervals; i++) {
        area = area + 2 * TanArr[i];
    }

    area = area * 5.0 / 2.0;
    return area;
}
