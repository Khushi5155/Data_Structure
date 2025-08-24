#include <stdio.h>

int main() {
    int arr[100], n, i, pos, newElement;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter position to insert (1 to %d): ", n+1);
    scanf("%d", &pos);

    if (pos < 1 || pos > n + 1) {
        printf("Invalid position!\n");
    } else {
        printf("Enter element to insert: ");
        scanf("%d", &newElement);

        // Shift elements to the right from end to pos
        for (i = n; i >= pos; i--) {
            arr[i] = arr[i - 1];
        }

        // Insert new element at pos-1 (0-based index)
        arr[pos - 1] = newElement;
        n++;

        printf("Array after insertion:\n");
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
