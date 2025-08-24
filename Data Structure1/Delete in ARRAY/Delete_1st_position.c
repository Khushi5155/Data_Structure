#include <stdio.h>

int main() {
    int arr[100], n, i;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Deleting first element means shifting everything left
    for (i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--; // reduce size

    printf("Array after deleting first element:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
