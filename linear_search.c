#include <stdio.h>

int main() {
    int n, i, item, location = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the search item:");
    scanf("%d", &item);

    for (i = 0; i < n; i++) {
        if (arr[i] == item)
        {
            location = i + 1;
            break;
        }
    }

    if (location == 0)
        printf("Item not found");
    else
        printf("Item is in location: %d", location);

    return 0;
}
