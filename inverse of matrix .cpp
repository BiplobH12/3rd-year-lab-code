// Inverse using Row-Elementary Operations
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
    cout.precision(4);
    cout.setf(ios::fixed);
    int i, j, k, n;
    float a[100][100];

a:
    cout << "\nEnter the order of matrix\n";
    cin >> n;
    cout << "\nEnter the elements\n";
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            cin >> a[i][j];

    // Form an augmented matrix by adding an identity matrix of same size 
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 2 * n; j++)
        {
            if (j == (i + n))
                a[i][j] = 1;
        }
    }

    // Pivotisation to make the matrix diagonally dominant
    for (i = 0; i < n; i++) 
        for (k = i + 1; k < n; k++)
            if (abs(a[i][i]) < abs(a[k][i]))
            {
                for (j = 0; j < 2 * n; j++)
                {
                    double temp = a[i][j];
                    a[i][j] = a[k][j];
                    a[k][j] = temp;
                }
            }

    cout << "\nAugmented Matrix after pivotization is: " << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 2 * n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    // Convert the left matrix to an identity matrix 
    for (i = 0; i < n; i++) 
    {
        for (k = 0; k < 2 * n; k++)
        {
            if (k != i)
            {
                double temp = a[k][i] / a[i][i];
                for (j = 0; j < 2 * n; j++)
                    a[k][j] = a[k][j] - temp * a[i][j]; 
            }
        }
    }

    // Divide every row by its leading entry to make the left matrix an identity matrix
    for (i = 0; i < n; i++)
    {
        double temp = a[i][i];
        if (temp == 0)
        {
            cout << "\nThe given matrix doesn't have an inverse\n";
            exit(0);
        }
        else
        {
            for (j = 0; j < n * 2; j++)
                a[i][j] = a[i][j] / temp;
        }
    }

    cout << "\nThe required inverse matrix is\n" << endl;
    for (i = 0; i < n; i++)
    {
        for (j = n; j < n * 2; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    int si;
    cout << "\nDo you want to calculate tax for different person?\n";
    cout << "\nIf yes press 1 or press 0?\n";
    cin >> si;
    if (si == 1) goto a;

    return 0;
}