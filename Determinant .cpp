#include<bits/stdc++.h>
using namespace std;
double dat(double a[100][100],int n) {
    double d=1;
    for(int i=0; i<n; i++) {
        for(int k=i+1; k<n; k++) {
            if(a[i][i]<a[i][k]) {
                for(int j=0; j<n; j++)
                    swap(a[i][j],a[k][j]);
                d*=-1;
            }
        }
    }
    for (int i=0; i<n-1; i++) {
        for(int k=i+1; k<n; k++) {
            double factor=a[k][i]/a[i][i];
            for(int j=0; j<n; j++)
                a[k][j]=a[k][j]-a[i][j]*factor;
        }
    }
    for(int i=0; i<n; i++) {
        d*=a[i][i];
    }
    return d;
}
int main() {
    int n;
    cout << "Enter the valu of n " << endl;
    cin>>n;
    cout << "Enter the elements row-wise" << endl;
    double a[100][100];
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++)
            cin>>a[i][j];
    }
    cout << "Determinant of matrix "<<dat(a,n)<< endl;
}