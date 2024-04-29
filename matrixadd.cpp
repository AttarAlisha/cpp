#include<iostream>
using namespace std;

class Matrix {

public:
    int i, j, r, c;
    int a[100][100];

public:
    int setm() {
        cout << "Enter number of rows" << endl;
        cin >> r;
        cout << "Enter number of columns" << endl;
        cin >> c;
        cout << "Enter elements:" << endl;
        for (i = 0; i < r; i++) {
            for (j = 0; j < c; j++) {
                cin >> a[i][j];
            }
        }
        return 0;
    }

    Matrix operator +(Matrix& m2)
    {
        Matrix m3;
        m3.r = r; // Set dimensions of result matrix
        m3.c = c;

        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                m3.a[i][j] = a[i][j] + m2.a[i][j]; // Add corresponding elements
            }
        }

        return m3;
    }

    int show()
    {
        for (i = 0; i < r; i++)
        {
            cout << endl;
            for (j = 0; j < c; j++)
            {
                cout << a[i][j];
                cout << " ";
            }
        }
        return 0;
    }
};

int main()
{
    Matrix m1, m2, m3;
    cout << "1st matrix:" << endl;
    m1.setm();
    m1.show();
    cout << "\n2nd matrix:" << endl;
    m2.setm();
    m2.show();

    cout << "\nAddition:" << endl;
    m3 = m1 + m2;
    m3.show();

    return 0;
}
