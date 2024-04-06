#include <stdio.h>

int findOccurences(int arr[], int size, int a);

int main() {
    int arr[] = {1, 2, 2, 2, 3, 4, 4, 5, 5, 5, 5}; // Sorted array with duplicates
    int size = sizeof(arr) / sizeof(arr[0]);
    int element = 2; // Element to find occurrences

    int occurrences = findOccurences(arr, size, element);
    printf("Number of occurrences of %d: %d\n", element, occurrences);

    return 0;
}

int findOccurences(int arr[], int size, int a){
    int first = -1; // Initialize first occurrence index to -1
    int last = -1;  // Initialize last occurrence index to -1
    int s = 0;
    int e = size - 1;

    // Finding the first occurrence
    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (arr[mid] == a) {
            first = mid;
            e = mid - 1; // Move left to find the first occurrence
        }
        else if (arr[mid] < a) {
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
    }

    // Finding the last occurrence
    s = 0;
    e = size - 1;
    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (arr[mid] == a) {
            last = mid;
            s = mid + 1; // Move right to find the last occurrence
        }
        else if (arr[mid] < a) {
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
    }

    // If either first or last occurrence was not found, return 0
    if (first == -1 || last == -1)
        return 0;
    else
        return (last - first + 1); // Return the count of occurrences
}
