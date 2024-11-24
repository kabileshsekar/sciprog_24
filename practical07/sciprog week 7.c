#include <stdio.h>
#include <stdlib.h>

double esti(int order) {
    double *a = (double *)malloc((order + 1) * sizeof(double));
    if (a == NULL) {
        printf("Memory is unable to allocate.\n");
        exit(1);
    }

    a[0] = 1.0;
    double fact = 1.0;

    for (int i = 1; i <= order; i++) {
        fact *= i;               
        a[i] = 1.0 / fact;   
    }

    double estimator = 0.0;
    for (int i = 0; i <= order; i++) {
        estimator += a[i];
    }

    free(a);

    return estimator;
}

int main() {
    int b;
    double act = 2.718281828459045;

    printf("Enter the maximum order for estimating e: ");
    scanf("%d", &b);

    for (int order = 1; order <= b; order++) {
        double estimator = esti(order);
        printf("Order %d: Estimator = %.10f, Fail = %.10f\n", order, estimator, act - estimator);
    }

    return 0;
}
