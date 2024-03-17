#include <iostream>
using namespace std;

int main() {
    const int size = 6;
    int arr[size] = {12, 34, 56, 78, 90, 23};

    int maxElement = arr[0];

    for (int i = 1; i < size; ++i) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }
    cout << "The largest element in the array is: " << maxElement << endl;

    return 0;
}
