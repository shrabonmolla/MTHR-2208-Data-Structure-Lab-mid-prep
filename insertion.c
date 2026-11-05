#include <stdio.h>

int main() {
    int n, i, pos, value;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n + 1]; // extra space for the inserted element

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to insert (1 to %d): ", n + 1);
    scanf("%d", &pos);

    printf("Enter the value to insert: ");
    scanf("%d", &value);

    // Shift elements to the right to make space
    for (i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new value at the given position
    arr[pos - 1] = value;
    n++; // array size increases by 1

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
