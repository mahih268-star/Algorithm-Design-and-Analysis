#include <stdio.h>

// Function to perform Binary Search
int binarySearch(int arr[], int low, int high, int target) {
    while (low <= high) {
        int mid = low + (high - low) / 2; // Prevents potential overflow

        // Check if target is present at mid
        if (arr[mid] == target)
            return mid;

        // If target is greater, ignore left half
        if (arr[mid] < target)
            low = mid + 1;

        // If target is smaller, ignore right half
        else
            high = mid - 1;
    }

    return -1; // Element not found
}

int main() {
    // Array MUST be sorted for Binary Search
    int data[] = {10, 20, 30, 40, 50, 70, 80, 90};
    int size = sizeof(data) / sizeof(data[0]);
    int target = 70;

    int result = binarySearch(data, 0, size - 1, target);

    if (result != -1) {
        printf("Element found at index: %d\n", result);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}
