#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, reveStr = "";
    cout << "Enter a string: ";
    getline(cin, str);
    int length = str.length();
    for (int i = length - 1; i >= 0; --i) {
        revStr += str[i];
    }
    cout << "Reversed string: " << revStr << endl;
    return 0;
}
