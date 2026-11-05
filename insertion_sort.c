#include <math.h>
#include <stdio.h>

void insertionSort(int arr[], int n)
{
    // Starting from the second element
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;

        // Move elements of arr[0...i-1], that are greater than key, to one position to the right of their
        //current position
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        // Move the key to its correct position
        arr[j + 1] = key;
    }
}

int main()
{
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
    insertionSort(arr, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
