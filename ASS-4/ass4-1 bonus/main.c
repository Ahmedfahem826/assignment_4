#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 3

int main() {
    int x[MAX_SIZE];  // Array to store the numbers
    int i;

    // Store the numbers in x without overwriting
    x[0] = 5;
    x[1] = 20;
    x[2] = 80;

    // Print the numbers stored in x
    for (i = 0; i < MAX_SIZE; i++) {
        printf("%d ", x[i]);
    }
    printf("\n");

    return 0;
}
