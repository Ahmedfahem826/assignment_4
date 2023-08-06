#include <stdio.h>
#include <stdlib.h>



void edit(int *ptr) {
    (*ptr)++;
}

int main() {
    int x;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Value of x before calling the edit function: %d\n", x);

    edit(&x);

    printf("Value of x after calling the edit function: %d\n", x);

    return 0;
}
