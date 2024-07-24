#include <stdio.h>

int binarySearch(int arr[], int l, int r, int x) {
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}

int main() {
    printf("Enter number of elements: ");
    int n;
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: ");
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("search for which element: ");
    int x;
    scanf("%d",&x);


    int index = binarySearch(arr, 0, n - 1, x);
    if (index == -1) {
        printf("Element is not present in the array");
    } else {
        printf("Element is present at index %d", index);
    }
    return 0;
}
