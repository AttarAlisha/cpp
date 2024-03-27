#include <iostream>  
using namespace std;  
int main() {  

        double numbers[] = {29,17,4,10,11,16,6,9};  
        double sum = 0;  
        double count = 0;  
        double average;  
        cout << "The array elements are: ";  
         for (const double &n : numbers)
        {  
            cout << n << "  ";  
            sum += n;   
            ++count;  
        }  
        cout << "\nTheir Sum = " << sum << endl;  
        average = sum / count;  
        cout << "Their Average = " << average << endl;  
  
  return 0;  
}  
