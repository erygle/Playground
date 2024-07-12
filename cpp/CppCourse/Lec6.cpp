//SORTING ALGORITHMS:



/*
#include <iostream>
#include <cstdlib>
#include <ctime>
#define N 5
using namespace std;


BUBBLE SORT:

// Bubble sort: sorts the elements in the array from smallest to largest.

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

    return 0;
}
*/

//--------------------------------------------------------------------------------------------------------------
/*SELECTİON SORT:

#include <iostream>
#include <cstdlib>
#include <ctime>
#define N 5
using namespace std;

// Selection sort: diziyi en küçükten en büyüğe sıralar.

int main() {
    int i, j, temp, select;
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
        select = i;
        for (j = i + 1; j < N; j++) {
            if (arr[select] > arr[j]) {
                select = j;
            }
        }
        if (select != i) {
            temp = arr[i];
            arr[i] = arr[select];
            arr[select] = temp;
        }
    }
    cout << "After sorting :" << endl;
    for (i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
*/