/*Linear Search:

#include <iostream>
#include <cstdlib>
#include <ctime>
#define N 5

using namespace std;

int main() {
    int i, find, control = 0;
    int arr[N];

    srand(time(0));

    for (i = 0; i < N; i++) {
        arr[i] = rand() % 100;
    }

    cout << "ARRAY:" << endl;

    for (i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Please enter which number you want:" << endl;
    cin >> find;

    // Search
    for (i = 0; i < N; i++) {
        if (find == arr[i]) {
            cout << find << " is at position " << i + 1 << " in the array." << endl;
            control = 1;
            break;
        }
    }
    if (control == 0) {
        cout << find << " number is not found in the array." << endl;
    }
    return 0;
}

------------------------------------------------------------------------------------------*/

// Binary Search: 
/*

#include <iostream>
#include <ctime>
#define N 5
using namespace std;


Binary Search is defined as a searching algorithm used in a sorted array by repeatedly dividing the search interval in half.
The idea of binary search is to use the information that the array is sorted and reduce the time complexity to O(log N).                 


int main() {
    int i, j, temp;
    int arr[N];
    srand(time(0));
    for (i = 0; i < N; i++) {
        arr[i] = rand() % 100;
    }
    cout << "Before sorting :" << endl;
    for (i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (i = 0; i < N - 1; i++) {
        for (j = 0; j < N - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "After sorting :" << endl;
    for (i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int find;
    cout << "Please enter which number you want:" << endl;
    cin >> find;

    int first = 0;
    int last = N - 1;
    int middle = (first + last) / 2;

    while (first <= last) {
        if (arr[middle] < find) {
            first = middle + 1;
        } else if (arr[middle] == find) {
            cout << "Number " << find << " found in array" << endl;
            break;
        } else {
            last = middle - 1;
        }
        middle = (first + last) / 2;
    }
    if (first > last) {
        cout << find << " is not found in array." << endl;
    }

    return 0;
}

*/