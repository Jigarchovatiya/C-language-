// C program Binary Search
#include <stdio.h>

int binarySearch(int a[], int low, int high, int elem)
{
    if (high >= low)
    {
        int mid = low + (high - low) / 2;

        if (a[mid] == elem)

            return mid;

        if (a[mid] > elem)
        
            return binarySearch(a, low, mid - 1, elem);

        return binarySearch(a, mid + 1, high, elem);
    }

    return -1;
}

int main(void)
{
    int a[] = {2, 3, 4, 10, 40};
    int n = sizeof(a) / sizeof(a[0]);
    int elem = 10;
    int result = binarySearch(a, 0, n - 1, elem);
    (result == -1)
        ? printf("Element is not present in array")
        : printf("Element is present at index %d", result);
    return 0;
}
