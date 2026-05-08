// Day 7
// Program: Linear Search
// Concept: Searching elements in an array

#include <stdio.h>

int main() {
    int array[100], n, search, i, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &search);

    for(i = 0; i < n; i++) {
        if(array[i] == search) {
            printf("%d found at position %d\n", search, i + 1);
            found = 1;
            break;
        }
    }

    if(found == 0) {
        printf("%d not found in array\n", search);
    }

    return 0;
}
