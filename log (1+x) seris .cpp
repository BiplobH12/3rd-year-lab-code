#include<bits/stdc++.h>
using namespace std;

double l(double x, int n){
    double sum = 0;
    int i = 1;           
    while(n--){
        double t =pow(x, i)*pow(-1,i+1) / i;
        sum += t;
        i++; 
    }
    return sum;
}
int main(){
z:
    double x;
    int n, y;
    cout <<fixed<<setprecision(20);
    cout << "Enter the value of x and n" << endl;
    cin >> x >> n;
    cout << "Sum of log(1+x) series = " << l(x, n)/2.302585 << endl;// log(1+x)=In(1+x)/2.302585
    cout <<"Error  of series value  " <<log10(1+x)-(l(x,n)/2.302585)<< endl;
    cout << "Run Again? yes 1 or no 0" << endl;
    cin >> y;
    if(y) goto z;
}
