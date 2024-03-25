#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 4, 7, 10, 13, 18, 23};
    int serach = 10;
    bool found = false;

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
        if (arr[i] == search) {
            cout << "Element found at index " << i << endl;
            found = true;
            break;
        }
    }

    if (!found)
        cout << "Element not found";

    return 0;
}
