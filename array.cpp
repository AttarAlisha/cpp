#include <iostream>
using namespace std;

int main() {
    int num[5];

    num[0] = 10;
    num[1] = 20;
    num[2] = 30;
    num[3] = 40;
    num[4] = 50;

    cout << "Elements of the array:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "Element " << i << ": " << num[i] << endl;
    }

    return 0;
}
