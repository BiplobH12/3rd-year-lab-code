#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
    int n, i, j, k;
    cout.precision(2); //set precision
    cout.setf(ios::fixed);
    cout << "\nEnter the dimension of the matrix\n"; 
    cin >> n; 
    double a[n][n], determinant = 1.0; 
    cout << "\nEnter the elements of the matrix row-wise:\n";
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++) 
            cin >> a[i][j];

    // Pivotisation to make the matrix diagonally dominant
    for (i = 0; i < n; i++) 
        for (k = i + 1; k < n; k++)
            if (abs(a[i][i]) < abs(a[k][i]))
            {
                for (j = 0; j < n; j++)
                {
                    double temp = a[i][j];
                    a[i][j] = a[k][j];
                    a[k][j] = temp;
                }
                determinant *= -1;
            }

    cout << "\nThe matrix after Pivotisation is:\n";
    for (i = 0; i < n; i++) // print the new matrix
    {
        for (j = 0; j < n; j++)
            cout << a[i][j] << setw(16);
        cout << "\n";
    }

    // Loop to perform the gauss elimination
    for (i = 0; i < n - 1; i++) 
        for (k = i + 1; k < n; k++)
        {
            double t = a[k][i] / a[i][i];
            for (j = 0; j < n; j++)
                a[k][j] = a[k][j] - t * a[i][j];
        }

    cout << "\n\nThe matrix after gauss-elimination is as follows:\n";
    for (i = 0; i < n; i++) // print the new matrix
    {
        for (j = 0; j < n; j++)
            cout << a[i][j] << setw(16);
        cout << "\n";
    }

    // Calculate the determinant using the diagonal elements now
    for (i = 0; i < n; i++)
        determinant *= a[i][i];

    cout << "\nThe required determinant is:\n" << determinant;
    return 0;
}