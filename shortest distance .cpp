#include <bits/stdc++.h>
using namespace std;

double d(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

class DistanceCalculator {
private:
    int n;
    double** a;

public:
    void setvalue() {
        cout << "Enter the amount of points: ";
        cin >> n;
        a = new double*[n];
        for(int i = 0; i < n; i++) {
            a[i] = new double[2];
        }
        
        cout << "Enter the points (x,y)" << endl;
        for(int i = 0; i < n; i++) {
            cin >> a[i][0] >> a[i][1];
        }
        
        double min = 1e18, max = -1e18;
        
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                double dis = d(a[i][0], a[i][1], a[j][0], a[j][1]);
                if(dis < min) min = dis;
                if(dis > max) max = dis;
            }
        }
        
        cout << "Largest distance: " << max << endl;
        cout << "Smallest distance: " << min << endl;
        
        // Free memory
        for(int i = 0; i < n; i++) {
            delete[] a[i];
        }
        delete[] a;
    }
};
int main() {
    DistanceCalculator ds;
    ds.setvalue();
    return 0;
}