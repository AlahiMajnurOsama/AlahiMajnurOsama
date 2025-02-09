#include <iostream>

using namespace std;  // Allows us to use standard library names without std:: prefix

int main() {
    int n;  // Number of elements in the array

    // Ask the user for the number of elements
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    // Create an array of size n
    int arr[n];

    // Take input from the user for the array elements
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];  // Read each element into the array
    }

    // Insertion sort algorithm
    for (int i = 1; i < n; i++) {
        int key = arr[i];  // The element we want to position in the sorted part
        int j = i - 1;     // The index of the last element in the sorted part

        // Move elements of arr[0..i-1], that are greater than key,
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];  // Shift element to the right
            j--;  // Move to the left in the sorted part
        }

        arr[j + 1] = key;  // Place the key in its correct position
    }

    // Print the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";  // Print each element of the sorted array
    }
    cout << endl;

    return 0;
}
