#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;

    printf("Enter value for number 1: ");
    scanf("%d", &num1);
    printf("Enter value for number 2: ");
    scanf("%d", &num2);

    printf("\nBefore swapping:\n");
    printf("Number 1: %d\n", num1);
    printf("Number 2: %d\n", num2);

    swap(&num1, &num2);

    printf("\nAfter swapping:\n");
    printf("Number 1: %d\n", num1);
    printf("Number 2: %d\n", num2);

    return 0;
}
