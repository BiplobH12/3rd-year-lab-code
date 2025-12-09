#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

// ডিটারমিন্যান্ট বের করার ফাংশন
double dat(double a[][100], int n) {
    double tm[100][100];
    double deter = 1;

    // কপি করা হচ্ছে
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            tm[i][j] = a[i][j];
    }

    for (int i = 0; i < n; i++) {
    
        int pivot = i;
        for (int k = i + 1; k < n; k++) {
            if (fabs(tm[k][i]) > fabs(tm[pivot][i])) {
                pivot = k;
            }
        }

     
        if (fabs(tm[pivot][i]) < 1e-9) return 0;

      
        if (pivot != i) {
            for (int j = 0; j < n; j++) {
                swap(tm[i][j], tm[pivot][j]);
            }
            deter *= -1; // চিহ্ন পরিবর্তন
        }
        // ------------------------------------

        // এলিমিনেশন (Gaussian Elimination)
        for (int k = i + 1; k < n; k++) {
            double f = tm[k][i] / tm[i][i];
            for (int j = i; j < n; j++) { // j=0 এর বদলে j=i দিলেও চলে (অপ্টিমাইজেশন)
                tm[k][j] = tm[k][j] - tm[i][j] * f;
            }
        }
    }

    for (int i = 0; i < n; i++)
        deter *= tm[i][i];

    return deter;
}

class cr {
private:
    int n;
    double a[100][100], modi[100][100], b[100], x[100], maindat = 0;

public:
    void result() {
        cout << "Enter the Order: ";
        cin >> n;
        cout << "Enter the elements of matrix A: " << endl;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a[i][j];
            }
        }
        cout << "Enter RHS matrix (b): " << endl;
        for (int i = 0; i < n; i++)
            cin >> b[i];

        maindat = dat(a, n);

        // প্রধান ডিটারমিন্যান্ট যদি ০ হয়
        if (fabs(maindat) < 1e-9) {
            cout << "No unique solution (Determinant is 0)." << endl;
            return; 
        }

        for (int col = 0; col < n; col++) {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    modi[i][j] = (j == col) ? b[i] : a[i][j];
                }
            }
            x[col] = dat(modi, n) / maindat;
        }

        cout << "Values of x are: " << endl;
        for (int i = 0; i < n; i++) {
            cout << "x" << i + 1 << " = " << x[i] << endl;
        }
    }
};

int main() {
    cr c;
    c.result();
    return 0;
}
