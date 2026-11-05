#include <stdio.h>

int main()
{
    int n, i, item, low, high, mid, location = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the search item: ");
    scanf("%d", &item);

    low = 0;
    high = n - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == item)
        {
            location = mid + 1;
            break;
        }
        else if (arr[mid] < item)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if (location == 0)
        printf("Item not found");
    else
        printf("Item is in location: %d", location);

    return 0;
}
