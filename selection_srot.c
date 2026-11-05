// C program for implementation of selection sort
#include <stdio.h>

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++) {
        // Assume the current position holds the minimum element
        int min_idx = i;

        // Iterate through the unsorted portion to find the actual minimum
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx])
                // Update min_idx if a smaller element is found
                min_idx = j;
        }

        // Move minimum element to its correct position
        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
}

int main() {
    int n;
    printf("Enter the number of elements in array:");
    scanf("%d",&n);

    int arr[n];

    printf("Enter %d elements:",n);
    for (int i = 0; i < n; i++)
        scanf("%d",&arr[i]);

    printf("Unsorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    // Calling insertion sort on array arr
    selectionSort(arr, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
