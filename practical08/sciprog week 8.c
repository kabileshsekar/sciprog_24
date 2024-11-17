#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int n1, n2;

    printf("Provide two integer values: ");
    scanf("%d %d", &n1, &n2);

    int final = gcd(n1, n2);
    printf("Greatest Common Divisor of %d and %d is: %d\n", n1, n2, final);

    return 0;
}
