#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n; // Input the number of integers
    
    vector<int> v(n); // Create a vector of size n
    
    // Input the integers into the vector
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    
    // Sort the vector
    sort(v.begin(), v.end());
    
    // Output the sorted integers
    for (int i = 0; i < n; ++i) {
        cout << v[i] << " ";
    }
    
    return 0;
}
