#include <iostream>
using namespace std;

int main()
{

    char ch;
    float num1, num2;
    cout<<"Enter Operator:"<<endl;
    cin >>ch;
    cout<<"Enter two numbers:"<<endl;
    cin >> num1 >> num2;

    switch (ch) {

    case '+':

        cout << num1 + num2;

        break;

    case '-':

        cout << num1 - num2;

        break;
 
    case '*':

        cout << num1 * num2;

        break;

    case '/':

        cout << num1 / num2;

        break;
 
    default:

        cout << "Error! Enter correct operator!!!";

    }
    return 0;
}
