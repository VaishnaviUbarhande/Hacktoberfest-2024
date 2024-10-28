#include <iostream>
using namespace std;

int main() {
    int n;

    
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];  // Declare an array of size n

    
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

   
    cout << "Array elements are: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

  
    int maxElement = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }
    cout << "Maximum element: " << maxElement << endl;

    // Calculate the sum of elements
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    cout << "Sum of elements: " << sum << endl;

    return 0;
}
