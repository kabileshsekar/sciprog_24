#include <stdio.h>
#include <stdlib.h>

int* allocatearray(int size) {
    int *a = (int *)malloc(size * sizeof(int));
    if (a == NULL) {
        printf("Failed\n");
        exit(1);
    }
    return a;
}

void fillwithones(int *a, int size) {
    for (int i = 0; i < size; i++) {
        a[i] = 1;
    }
}

void printarray(int *a, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void freearr(int *a) {
    free(a);
}

int main() {
    int size;

    printf("Entering the size of the array: ");
    scanf("%d", &size);

    int *a = allocatearray(size);

    fillwithones(a, size);
    printf("Array filled with ones:\n");
    printarray(a, size);

    freearr(a);

    return 0;
}
