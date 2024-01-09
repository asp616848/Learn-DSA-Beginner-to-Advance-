#include <iostream>
using namespace std;

void segregate(int arr[], int n) {
    int left = 0, right = n - 1;

    while (left < right) {
        while (arr[left] % 2 == 0 && left < right)
            left++;
        while (arr[right] % 2 != 0 && left < right)
            right--;

        if (left < right) {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

int main() {
    int arr[] = {3, 5, 3, 6, 21, 6, 84, 45, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    segregate(arr, n);

    cout << "[";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "]" << endl;

    return 0;
}
